#include <iostream>
#include <string>

using namespace std;

//Declaration of functions
int menu();
bool stream(int);
void gpuStream();
void cpuStream();
void moboStream();
void cart();
void receipt();
void addToCart(string, int);
void costFinder();
void sanitizeInput();

//List of items as multidim array
const string code[3][2] = {{"GTX 1650 super", "RX 570"}, {"Intel i3 9th gen", "Intel i5 9th gen"}, {"MSI A320m- PRO V2", "ASUS ROG Crosshair VI Hero"}};

//Integer array for the cart
int cartValue[6] = {0, 0, 0, 0, 0, 0};
float finalCost = 0;
const float prices[6] = {9000, 7000, 3840, 10000, 3600, 18000};

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
//Main menu
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
// GPU Menu
void gpuStream()
{
    int choice;
    bool end = false;
    int qty;

    cout << "***************************" << endl;
    cout << "*           GPU           *" << endl;
    cout << "***************************" << endl;
    do
    {
        //Choices
        cout << "GPU Section" << endl;
        cout << "[1] " << code[0][0] << endl;
        cout << "[2] " << code[0][1] << endl;
        cout << "[3] Exit" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice)
        {
        //Asking If he/she wants to buy
        case 1:
            cout << "\n* * * * * * * Specification * * * * * * * ";
            cout << "\n*  Architecture : Turning Shaders       * ";
            cout << "\n*  Boost Clock  : 1725mhz               * ";
            cout << "\n*  Frame Buffer : 4GB GDDR6             * ";
            cout << "\n*  Memory Speed : 12 Gbps               * ";
            cout << "\n*         Price : Php 9000              * ";
            cout << "\n* * * * * * * * * * * * * * * * * * * * * ";
            cout << "\n Would you like to buy?";
            cout << "\n[1] YES ";
            cout << "\n[2] NO ";
            cout << "\n>> ";
            cin >> choice;
            switch (choice)
            {
            //Asking the quantity
            case 1:
                cout << "\nHow many?";
                cout << "\n>> ";
                cin >> qty;
                addToCart(code[0][0], qty);
                break;
            //Returns to product section
            case 2:
                break;
            default:
                sanitizeInput();
            }
            break;
        //Asking if he/she wants to buy
        case 2:
            cout << "\n* * * * * * * * Specification * * * * * * * * * *";
            cout << "\n*  Engine Clock       : Up to 1284 Mhz, Boost   * ";
            cout << "\n*  Stream Processors  : 2480                    * ";
            cout << "\n*  Memory Size/Bus    : 8GB GDDR5/256-bit       * ";
            cout << "\n*  Memory Clock       : 7000 Mhz                * ";
            cout << "\n*         Price       : Php 7000                * ";
            cout << "\n* * * * * * * * * * * * * * * * * * * * * * * * *";
            cout << "\n Would you like to buy?";
            cout << "\n[1] YES ";
            cout << "\n[2] NO ";
            cout << "\n>> ";
            cin >> choice;
            switch (choice)
            {

            //Asking the quantity
            case 1:
                cout << "\n How many?";
                cout << "\n>> ";
                cin >> qty;
                addToCart(code[0][1], qty);
                break;
            //Returns to product section
            case 2:
                break;
            default:
                sanitizeInput();
            }
            break;
        //Returns to main menu
        case 3:
            end = true;
            break;
        default:
            sanitizeInput();
        }
    } while (!end);
}

//CPU Section
void cpuStream()
{
    int choice;
    int qty;
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
        //Asking if he/she wants to buy
        case 1: // Show the specs of the given product
            cout << "\n* * * * * * * Specification * * * * * * * ";
            cout << "\n*             Name: i3-9100             * ";
            cout << "\n*   Base Frequency: 3.60Ghz             * ";
            cout << "\n*    Max frequency: 4.20Ghz             * ";
            cout << "\n*       # of cores: 4                   * ";
            cout << "\n*            Cache: 6MB smart cache     * ";
            cout << "\n*               Graphics                * ";
            cout << "\n*       Intel UHD Graphics 630          * ";
            cout << "\n*            Price: Php 3,840           * ";
            cout << "\n* * * * * * * * * * * * * * * * * * * * * ";
            cout << "\n Would you like to buy?";
            cout << "\n[1] YES ";
            cout << "\n[2] NO ";
            cout << "\n>> ";
            cin >> choice;
            switch (choice)
            {
                //Asking the quantity
            case 1:
                cout << "\nHow many?";
                cout << "\n>> ";
                cin >> qty;
                addToCart(code[1][0], qty);
                break;
                //Return to main window
            case 2:
                break;
            default:
                sanitizeInput();
            }
            break;
        //Asking if he/she wants to buy
        case 2: // Show the specs of the given product
            cout << "\n* * * * * * * Specification * * * * * * * ";
            cout << "\n*             Name: i5-9400             * ";
            cout << "\n*   Base Frequency: 2.90Ghz             * ";
            cout << "\n*    Max frequency: 4.10Ghz             * ";
            cout << "\n*       # of cores: 6                   * ";
            cout << "\n*            Cache: 9MB smart cache     * ";
            cout << "\n*               Graphics                * ";
            cout << "\n*       Intel UHD Graphics 630          * ";
            cout << "\n*           Price: Php 10,000           * ";
            cout << "\n* * * * * * * * * * * * * * * * * * * * * ";
            cout << "\n Would you like to buy?";
            cout << "\n[1] YES ";
            cout << "\n[2] NO ";
            cout << "\n>> ";
            cin >> choice;
            switch (choice)
            {
                // Asking quantity
            case 1:
                cout << "\nHow many?";
                cout << "\n>> ";
                cin >> qty;
                addToCart(code[1][1], qty);
                break;
            //Returns to product section
            case 2:
                break;
            default:
                sanitizeInput();
            }
            break;
        //Returns to main menu
        case 3:
            end = true;
            break;
        default:
            sanitizeInput();
        }
    } while (!end);
}

//Motherboard Section
void moboStream()
{
    int choice;
    bool end = false;
    int qty;

    cout << "***************************" << endl;
    cout << "*       Motherboards      *" << endl;
    cout << "***************************" << endl;
    do
    {
        //Choices
        cout << "Motherboards Section" << endl;
        cout << "[1] " << code[2][0] << endl;
        cout << "[2] " << code[2][1] << endl;
        cout << "[3] Exit" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice)
        {
        //Asking if he/she wants to buy
        case 1: // Show the specs of the given product
            cout << "\n* * * * * * * Specification * * * * * * * ";
            cout << "\n*           Micro-ATX Form Factor       * ";
            cout << "\n*            AMD A320 Chipset           * ";
            cout << "\n*                Socket AM4             * ";
            cout << "\n*    2 x Dual-Channel DDR4-3200 (OC)    * ";
            cout << "\n*            Price: Php 18,000          * ";
            cout << "\n* * * * * * * * * * * * * * * * * * * * * ";
            cout << "\n Would you like to buy?";
            cout << "\n[1] YES ";
            cout << "\n[2] NO ";
            cout << "\n>> ";
            cin >> choice;
            switch (choice)
            {
            // Asking quantity
            case 1:
                cout << "\nHow many?";
                cout << "\n>> ";
                cin >> qty;
                addToCart(code[2][0], qty);
                break;
            //Returns to product section
            case 2:
                break;
            default:
                sanitizeInput();
            }
            break;
            //Asking if he/she wants to buy
        case 2: // Show the specs of the given product
            cout << "\n* * * * * * * * Specification * * * * * * * * * *";
            cout << "\n*               ATX Form Factor                 *";
            cout << "\n*               AMD X370 Chipset                *";
            cout << "\n*                  AM4 Socket                   *";
            cout << "\n*        4 x Dual-Channel DDR4-3200 (OC)        *";
            cout << "\n*               Price: Php 3,600                *";
            cout << "\n* * * * * * * * * * * * * * * * * * * * * * * * *";
            cout << "\n Would you like to buy?";
            cout << "\n[1] YES ";
            cout << "\n[2] NO ";
            cout << "\n>> ";
            cin >> choice;
            switch (choice)
            {
            //Asking the quantity
            case 1:
                cout << "\n How many?";
                cout << "\n>> ";
                cin >> qty;
                addToCart(code[2][1], qty);
                break;
                //Returns to products section
            case 2:
                break;
            default:
                sanitizeInput();
            }
            break;
            //Returns to main menu
        case 3:
            end = true;
            break;
        default:
            sanitizeInput();
        }
    } while (!end);
}

//Cart Section
void cart()
{
    bool cartCheck = false;
    int choice;
    int cartChoice;
    int qty;
    int counter = 1;
    bool end = false;
    do
    {
        costFinder();
        for (int i = 0; i < 6; i++)
        {
            if (cartValue[i] > 0)
            {
                cartCheck = true;
                break;
            }
            else
            {
                cartCheck = false;
            }
        }
        if (!cartCheck)
        {
            cout << "There are no items in the cart!" << endl;
            break;
        }
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
        cout << "                         ------------------" << endl;
        cout << "               Final Cost: Php " << finalCost << "    " << endl;
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
            break;
        case 2:
            cout << "What would you like to change?" << endl;
            counter = 1;
            for (int i = 0; i < 6; i++)
            {
                if (cartValue[i] > 0)
                {
                    switch (i)
                    {
                    case 0:
                        cout << "[" << counter << "] " << code[0][0] << endl;
                        counter++;
                        break;
                    case 1:
                        cout << "[" << counter << "] " << code[0][1] << endl;
                        counter++;
                        break;
                    case 2:
                        cout << "[" << counter << "] " << code[1][0] << endl;
                        counter++;
                        break;
                    case 3:
                        cout << "[" << counter << "] " << code[1][1] << endl;
                        counter++;
                        break;
                    case 4:
                        cout << "[" << counter << "] " << code[2][0] << endl;
                        counter++;
                        break;
                    case 5:
                        cout << "[" << counter << "] " << code[2][1] << endl;
                        counter++;
                        break;
                    default:
                        break;
                    }
                }
            }

            cout << ">> ";
            cin >> choice; //VALIDATE

            counter = 1;
            for (int i = 0; i < 6; i++)
            {
                if (cartValue[i] > 0)
                {
                    switch (i)
                    {
                    case 0:
                        if (counter == choice)
                        {
                            cout << code[0][0] << " has been selected" << endl;
                            cout << "[1] Remove" << endl;
                            cout << "[2] Change quantity" << endl;
                            cout << "[3] Exit" << endl;
                            cin >> cartChoice;
                            switch (cartChoice)
                            {
                            case 1:
                                cartValue[i] = 0;
                                cout << "Done" << endl;
                                break;
                            case 2:
                                cout << "Please enter quantity: " << endl;
                                cout << ">> ";
                                cin >> qty;
                                if (qty > -1 && qty < 100)
                                {
                                    addToCart(code[0][0], qty);
                                }
                                else
                                {
                                    sanitizeInput(); //REPEAT LOOP
                                }
                                break;
                            case 3:
                                //BREAKS LOOP
                                break;
                            default:
                                sanitizeInput();
                                break;
                            }
                        }
                        counter++;
                        break;
                    case 1:
                        if (counter == choice)
                        {
                            cout << code[0][1] << " has been selected" << endl;
                            cout << "[1] Remove" << endl;
                            cout << "[2] Change quantity" << endl;
                            cout << "[3] Exit" << endl;
                            cin >> cartChoice;
                            switch (cartChoice)
                            {
                            case 1:
                                cartValue[i] = 0;
                                cout << "Done" << endl;
                                break;
                            case 2:
                                do
                                {
                                    cout << "Please enter quantity: " << endl;
                                    cout << ">> ";
                                    cin >> qty;
                                    if (qty > -1 && qty < 100)
                                    {
                                        addToCart(code[0][1], qty);
                                        break;
                                    }
                                    else
                                    {
                                        sanitizeInput(); //REPEAT LOOP
                                    }
                                } while (true);
                                break;
                            case 3:
                                //BREAKS LOOP
                                break;
                            default:
                                sanitizeInput();
                                break;
                            }
                        }
                        counter++;
                        break;

                    case 2:
                        if (counter == choice)
                        {
                            cout << code[1][0] << " has been selected" << endl;
                            cout << "[1] Remove" << endl;
                            cout << "[2] Change quantity" << endl;
                            cout << "[3] Exit" << endl;
                            cin >> cartChoice;
                            switch (cartChoice)
                            {
                            case 1:
                                cartValue[i] = 0;
                                cout << "Done" << endl;
                                break;
                            case 2:
                                do
                                {
                                    cout << "Please enter quantity: " << endl;
                                    cout << ">> ";
                                    cin >> qty;
                                    if (qty > -1 && qty < 100)
                                    {
                                        addToCart(code[1][0], qty);
                                        break;
                                    }
                                    else
                                    {
                                        sanitizeInput(); //REPEAT LOOP
                                    }
                                } while (true);
                                break;
                            case 3:
                                //BREAKS LOOP
                                break;
                            default:
                                sanitizeInput();
                                break;
                            }
                        }
                        counter++;
                        break;

                    case 3:
                        if (counter == choice)
                        {
                            cout << code[1][1] << " has been selected" << endl;
                            cout << "[1] Remove" << endl;
                            cout << "[2] Change quantity" << endl;
                            cout << "[3] Exit" << endl;
                            cin >> cartChoice;
                            switch (cartChoice)
                            {
                            case 1:
                                cartValue[i] = 0;
                                cout << "Done" << endl;
                                break;
                            case 2:
                                do
                                {
                                    cout << "Please enter quantity: " << endl;
                                    cout << ">> ";
                                    cin >> qty;
                                    if (qty > -1 && qty < 100)
                                    {
                                        addToCart(code[1][1], qty);
                                        break;
                                    }
                                    else
                                    {
                                        sanitizeInput(); //REPEAT LOOP
                                    }
                                } while (true);
                                break;
                            case 3:
                                //BREAKS LOOP
                                break;
                            default:
                                sanitizeInput();
                                break;
                            }
                        }
                        counter++;
                        break;

                    case 4:
                        if (counter == choice)
                        {
                            cout << code[2][0] << " has been selected" << endl;
                            cout << "[1] Remove" << endl;
                            cout << "[2] Change quantity" << endl;
                            cout << "[3] Exit" << endl;
                            cin >> cartChoice;
                            switch (cartChoice)
                            {
                            case 1:
                                cartValue[i] = 0;
                                cout << "Done" << endl;
                                break;
                            case 2:
                                do
                                {
                                    cout << "Please enter quantity: " << endl;
                                    cout << ">> ";
                                    cin >> qty;
                                    if (qty > -1 && qty < 100)
                                    {
                                        addToCart(code[2][0], qty);
                                        break;
                                    }
                                    else
                                    {
                                        sanitizeInput(); //REPEAT LOOP
                                    }
                                } while (true);
                                break;
                            case 3:
                                //BREAKS LOOP
                                break;
                            default:
                                sanitizeInput();
                                break;
                            }
                        }
                        counter++;
                        break;

                    case 5:
                        if (counter == choice)
                        {
                            cout << code[2][1] << " has been selected" << endl;
                            cout << "[1] Remove" << endl;
                            cout << "[2] Change quantity" << endl;
                            cout << "[3] Exit" << endl;
                            cin >> cartChoice;
                            switch (cartChoice)
                            {
                            case 1:
                                cartValue[i] = 0;
                                cout << "Done" << endl;
                                break;
                            case 2:
                                do
                                {
                                    cout << "Please enter quantity: " << endl;
                                    cout << ">> ";
                                    cin >> qty;
                                    if (qty > -1 && qty < 100)
                                    {
                                        addToCart(code[2][1], qty);
                                        break;
                                    }
                                    else
                                    {
                                        sanitizeInput(); //REPEAT LOOP
                                    }
                                } while (true);
                                break;
                            case 3:
                                //BREAKS LOOP
                                break;
                            default:
                                sanitizeInput();
                                break;
                            }
                        }
                        counter++;
                        break;
                    default:
                        sanitizeInput();
                        break;
                    }
                }
            }
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

//Receipt Section
void receipt()
{
    float balance = 0;
    costFinder();

    cout << "Please input your balance (Php)" << endl;
    cout << ">> ";
    cin >> balance;

    if (balance >= finalCost)
    {
        cout << "\n-------------------------------------" << endl;
        cout << "         Techware PC Express       " << endl;
        cout << "     ----------------------------     " << endl;
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
        cout << "                        -------------" << endl;
        cout << "               Final Cost: Php " << finalCost << "    " << endl;
        cout << "                  Balance: Php " << balance << "    " << endl;
        cout << "                   Change: Php " << (balance -= finalCost) << "    " << endl;
        cout << "-------------------------------------" << endl;
        cout << "              Thank you            " << endl;
        cout << "        for Shopping with us!      " << endl;
        cout << "-------------------------------------" << endl;
        exit(0);
    }
    else
    {
        cout << "Insufficient Balance! Please edit your cart." << endl;
    }
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
}

void costFinder()
{
    float temp = 0;
    for (int i = 0; i < 6; i++)
    {
        temp += prices[i] * cartValue[i];
    }
    finalCost = temp;
}

//Repeat Loop
void sanitizeInput()
{
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "\nInvalid Input, Please try again!\n"
         << endl;
}