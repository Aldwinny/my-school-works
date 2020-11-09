#include <iostream>
#include <string>

using namespace std;

int menu();
bool stream(int);
void gpuStream();
void cpuStream();
void moboStream();
void cart();
void receipt();
void addToCart(string, int);
void sanitizeInput();

//List of items
string code[3][2] = {{"GTX 1650 super", "RX 570"}, {"Intel i3 9th gen", "Intel i5 9th gen"}, {"MSI A320m- PRO V2", "ASUS ROG Crosshair VI Hero"}};

//Integer array for the cart
int cartValue[6] = {0, 0, 0, 0, 0, 0};
float prices[6] = {147, 1, 1, 1, 1, 1};

main()
{
    bool loopControl = true;
    int choice;

    addToCart(code[0][0], 3);

    while (loopControl)
    {
        choice = menu();
        loopControl = stream(choice);
    }
}

int menu()
{
    int temp;

    cout << "                           " << endl;
    cout << "            ,---.          " << endl;
    cout << "           ;     \\         " << endl;
    cout << "       .==\\\"/==.  `-." << endl;
    cout << "      ((+) .  .:)    !" << endl;
    cout << "      |`.-(o)-.'|    |" << endl;
    cout << "      \\/  \\_/  \\/    ^" << endl;
    cout << "***************************" << endl;
    cout << "*        Welcome to       *" << endl;
    cout << "*    Techware PC EXPRESS  *" << endl;
    cout << "*           SHOP          *" << endl;
    cout << "***************************" << endl;
    cout << "[1] GPUs         [2] CPUs" << endl;
    cout << "[3] Motherboards [4] My Cart" << endl;
    cout << "[5] Check out    [6] Exit" << endl;
    cout << ">> ";
    cin >> temp;
    cout << endl;
    return temp;
}

bool stream(int choice)
{
    switch (choice)
    {
    case 1:
        gpuStream();
        break;
    case 2:
        cpuStream();
        break;
    case 3:
        moboStream();
        break;
    case 4:
        cart();
        break;
    case 5:
        receipt();
        return false;
    case 6:
        cout << "Thank you for shopping with us!" << endl;
        return false;
    default:
        sanitizeInput();
    }
    return true;
}

void gpuStream()
{
    int choice;
    bool end = false;

    cout << "***************************" << endl;
    cout << "*           GPU           *" << endl;
    cout << "***************************" << endl;
    do
    {
        cout << "GPU Section" << endl;
        cout << "[1] " << code[0][0] << endl;
        cout << "[2] " << code[0][1] << endl;
        cout << "[3] Exit" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice)
        {
            /*
            PSEUDOCODE
            1. Display Specs of product
            2. Ask User whether he/she buys
                > IF BUY
                    > ASK QUANTITY (HOW MANY?)
                    > addToCart(gpuCode[INDEX], QUANTITY)
                > ELSE
                    > Break
            */
        case 1:
            // YOUR CODE HERE
            break;
        case 2:
            // YOUR CODE HERE
            break;
        case 3:
            end = true;
            break;
        default:
            sanitizeInput();
        }
    } while (!end);
}

void cpuStream()
{
    int choice;
    bool end = false;

    cout << "***************************" << endl;
    cout << "*           CPU           *" << endl;
    cout << "***************************" << endl;
    do
    {
        cout << "CPU Section" << endl;
        cout << "[1] " << code[1][0] << endl;
        cout << "[2] " << code[1][1] << endl;
        cout << "[3] Exit" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice)
        {
        /*
        PSEUDOCODE
        1. Display Specs of product
        2. Ask User whether he/she buys
            > IF BUY
            > ASK QUANTITY (HOW MANY?)
                > addToCart(gpuCode[INDEX], QUANTITY)
            > ELSE
                > Break
        */
        case 1:
            // YOUR CODE HERE
            break;
        case 2:
            // YOUR CODE HERE
            break;
        case 3:
            end = true;
            break;
        default:
            sanitizeInput();
        }
    } while (!end);
}

void moboStream()
{
    int choice;
    bool end = false;

    cout << "***************************" << endl;
    cout << "*       Motherboards      *" << endl;
    cout << "***************************" << endl;
    do
    {
        cout << "Motherboards Section" << endl;
        cout << "[1]" << code[2][0] << endl;
        cout << "[2]" << code[2][1] << endl;
        cout << "[3] Exit" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice)
        {
        /*
        PSEUDOCODE
        1. Display Specs of product
        2. Ask User whether he/she buys
            > IF BUY
            > ASK QUANTITY (HOW MANY?)
                > addToCart(gpuCode[INDEX], QUANTITY)
            > ELSE
                > Break
        */
        case 1:
            // YOUR CODE HERE
            break;
        case 2:
            // YOUR CODE HERE
            break;
        case 3:
            end = true;
            break;
        default:
            sanitizeInput();
        }
    } while (!end);
}

void cart()
{
    int choice;
    bool end = false;
    do
    {
        cout << "Cart:" << endl;
        cout << "Product       qty          cost " << endl;
        for (int i = 0; i < 6; i++)
        {
            if (cartValue[i] != 0)
            {
                switch (i)
                {
                case 0:
                    cout << code[0][0].substr(0, 3) << "           " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                    break;
                case 1:
                    cout << code[0][1].substr(0, 3) << "           " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                    break;
                case 2:
                    cout << code[1][0].substr(0, 8) << "      " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                    break;
                case 3:
                    cout << code[1][1].substr(0, 8) << "      " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                    break;
                case 4:
                    cout << code[2][0].substr(0, 4) << "          " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                    break;
                case 5:
                    cout << code[2][1].substr(0, 4) << "          " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                    break;
                default:
                    break;
                }
            }
        }
        cout << "\nWhat would you like to do?" << endl;
        cout << "[1] Check out" << endl;
        cout << "[2] Remove an item / Change Quantity" << endl;
        cout << "[3] Exit" << endl;
        cout << ">> ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            receipt();
            exit(0);
            break;
        case 2:
            //DO something
            break;
        case 3:
            end = true;
            break;
        default:
            sanitizeInput();
            break;
        }
    } while (!end);
}

void receipt()
{

    cout << "\n--------------------------------" << endl;
    cout << "      Techware PC Express       " << endl;
    cout << "    -----------------------     " << endl;
    cout << "Product       qty          cost " << endl;
    for (int i = 0; i < 6; i++)
    {
        if (cartValue[i] != 0)
        {
            switch (i)
            {
            case 0:
                cout << code[0][0].substr(0, 3) << "           " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                break;
            case 1:
                cout << code[0][1].substr(0, 3) << "           " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                break;
            case 2:
                cout << code[1][0].substr(0, 8) << "      " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                break;
            case 3:
                cout << code[1][1].substr(0, 8) << "      " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                break;
            case 4:
                cout << code[2][0].substr(0, 4) << "          " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                break;
            case 5:
                cout << code[2][1].substr(0, 4) << "          " << cartValue[i] << (cartValue[i] >= 10 ? "" : " ") << "           Php " << (prices[i] * cartValue[i]) << "    " << endl;
                break;
            default:
                break;
            }
        }
    }
    cout << "                        --------" << endl;
    cout << "               Final Cost: -    " << endl;
    cout << "--------------------------------" << endl;
    cout << "           Thank you            " << endl;
    cout << "     for Shopping with us!      " << endl;
    cout << "--------------------------------" << endl;
}

void addToCart(string type, int quantity)
{
    if (type == code[0][0] || type == code[0][1])
    {
        if (type == code[0][0])
        {
            cartValue[0] = quantity;
        }
        else
        {
            cartValue[1] = quantity;
        }
        cout << "User added to cart " << quantity << " " << type << endl;
    }
    else if (type == code[1][0] || type == code[1][1])
    {

        if (type == code[1][0])
        {
            cartValue[2] = quantity;
        }
        else
        {
            cartValue[3] = quantity;
        }
        cout << "User added to cart " << quantity << " " << type << endl;
    }
    else if (type == code[2][0] || type == code[2][1])
    {

        if (type == code[2][0])
        {
            cartValue[4] = quantity;
        }
        else
        {
            cartValue[5] = quantity;
        }
        cout << "User added to cart " << quantity << " " << type << endl;
    }
    else
    {
        cout << "Error 404: Not found!" << endl;
    }

    cout << type << endl;
}

void sanitizeInput()
{
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "\nInvalid Input, Please try again!\n"
         << endl;
}