#include <iostream>
#include <string>

using namespace std;

class binary
{
private:
    string value = "0b";

    static binary parse(string s)
    {
        string bin = toBinary(s);
        return binary(bin);
    }

    static string toBinary(string s)
    {
        int dec = stoi(s);
        string temp = "";
        do
        {
            temp.append(to_string(dec % 2));
            dec /= 2;
            if (dec == 0 || dec == 1)
            {
                temp.append(to_string(dec));
            }
        } while (!(dec == 0 || dec == 1));

        //Reverses the string
        int n = temp.length();
        for (int i = 0; i < n / 2; i++)
        {
            swap(temp[i], temp[n - i - 1]);
        }

        return temp;
    }

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
    binary(int v)
    {
        value.append(toBinary(to_string(v)));
    }

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
    binary bin = binary("6553");
    cout << bin.getValue() << endl;

    bin.setValue("64");
    cout << bin.getValue() << endl;

    return 0;
}
