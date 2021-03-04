#include <iostream>
#include <string>

using namespace std;

class binary
{
private:
    string value = "0b";

    //Turns a string to a binary object
    static binary parse(string s)
    {
        string bin = toBinary(s);
        return binary(bin);
    }

    //turns a string to binary value
    static string toBinary(string s)
    {
        int dec = stoi(s);
        string temp = "";
        
        //Algorithm that changes temp
        do
        {
            temp.append(to_string(dec % 2));
            dec /= 2;
            if (dec == 0 || dec == 1)
            {
                temp.append(to_string(dec));
            }
        } while (!(dec == 0 || dec == 1));

        //Reverses the string temp
        int n = temp.length();
        for (int i = 0; i < n / 2; i++)
        {
            swap(temp[i], temp[n - i - 1]);
        }

        return temp;
    }

    //Checks whether something is a valid binary or not
    static bool validate(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 48 || s[i] == 49)
            {
                continue;
            }
            return false;
        }
        return true;
    }

public:
    //Turns an integer to binary
    binary(int v)
    {
        value.append(toBinary(to_string(v)));
    }

    //Turns a string to binary by validating it first
    //If it is not valid, it will invoke parse turning it into binary
    //And then it will set its value;
    binary(string s)
    {
        if (validate(s))
        {
            value.append(s);
        }
        else
        {
            value = parse(s).value;
        }
    }

    //getters and setters
    string getValue()
    {
        return value;
    }

    void setValue(string s)
    {
        value = binary(s).getValue();
    }

    void setValue(int v)
    {
        value = binary(v).getValue();
    }
};

int main()
{
    //testing and all that
    binary bin = binary("6553");
    cout << bin.getValue() << endl;

    bin.setValue("64");
    cout << bin.getValue() << endl;

    return 0;
}
