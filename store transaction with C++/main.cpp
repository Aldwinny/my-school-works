#include <iostream>
#include <string>
#include <windows.h>

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
string gpuCode[] = {"GTX 1650 super", "RX 570"};
string cpuCode[] = {"Intel i3 9th gen", "Intel i5 9th gen"};
string moboCode[] = {"MSI A320m- PRO V2", "ASUS ROG Crosshair VI Hero"};

//Integer array for the cart
int cartValue[6] = {0, 2, 3, 45, 4, 6};

main()
{
    bool loopControl = true;
    int choice;

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
        cout << "[1] " << gpuCode[0] << endl;
        cout << "[2] " << gpuCode[1] << endl;
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
        cout << "[1] " << cpuCode[0] << endl;
        cout << "[2] " << cpuCode[1] << endl;
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
        cout << "[1]" << moboCode[0] << endl;
        cout << "[2]" << moboCode[1] << endl;
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
    //ALDWIN WILL EDIT THIS TO WORK
    cout << "Product       qty          cost " << endl;
    cout << "-             -            -    " << endl;
    cout << "-             -            -    " << endl;
}

void receipt()
{
    cout << "--------------------------------" << endl;
    cout << "      Techware PC Express       " << endl;
    cout << "    -----------------------     " << endl;
    cout << "Product       qty          cost " << endl;
    cout << "-             -            -    " << endl;
    cout << "-             -            -    " << endl;
    cout << "                        --------" << endl;
    cout << "               Final Cost: -    " << endl;
    cout << "--------------------------------" << endl;
    cout << "           Thank you            " << endl;
    cout << "     for Shopping with us!      " << endl;
    cout << "--------------------------------" << endl;
}

void addToCart(string type, int quantity)
{
    cout << "User added to cart " << quantity << " " << type << endl;
}

void sanitizeInput()
{
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "\nInvalid Input, Please try again!\n"
         << endl;
}