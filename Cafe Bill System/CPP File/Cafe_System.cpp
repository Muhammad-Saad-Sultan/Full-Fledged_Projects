#include <iostream>
using namespace std;

int main() {
    int employeeID;
    int totalTransactions = 0;
    string items[10] = { "Tea","Small Pizza","Shoarma","Pastry","Samosa","Green Salad","Sandwich","Burger","Fries","Coffee" };
    int prices[10] = { 30, 40, 40, 40, 10, 30, 70, 100, 100, 50 };
    int quantities[10] = { 0 };

    cout << endl;
    cout << "\t\t\t\t" << " __ __  ____ _____        ____  ___  _____  ____" << endl;
    cout << "\t\t\t\t" << "|  |  |/    |     \\      /    |/   \\|     |/   _|" << endl;
    cout << "\t\t\t\t" << "|  |  |    /|  o   |    |    /|  o  |   __|   |_ " << endl;
    cout << "\t\t\t\t" << "|  |  |   | |   __/     |   | |     |  |__|    _|" << endl;
    cout << "\t\t\t\t" << "|  :  |   | |  |        |   | |  _  |   __|   |_ " << endl;
    cout << "\t\t\t\t" << "|     |    \\|  |        |    \\| | | |  |  |     |" << endl;
    cout << "\t\t\t\t" << " \\___/ \\____|__|         \\____|_| |_|__|   \\____|" << endl;
    cout << "\n\n\n";
    cout << "\t\t\t    |-------------------------------------------------------|" << endl;
    cout << "\t\t\t    |  \tDeveloped by\t  |    \t  Muhammad Saad Sultan\t    |" << endl;
    cout << "\t\t\t    |-------------------------------------------------------|" << endl;
    cout << "\n\n\n";
    cout << "Enter Employee ID: ";
    cin >> employeeID;
    system("cls");

    if (employeeID == 431 || employeeID == 532) {
        while (true) {
            string choice;
            cout << endl;
            cout << "\t\t\t\t" << " __ __  ____ _____        ____  ___  _____  ____" << endl;
            cout << "\t\t\t\t" << "|  |  |/    |     \\      /    |/   \\|     |/   _|" << endl;
            cout << "\t\t\t\t" << "|  |  |    /|  o   |    |    /|  o  |   __|   |_ " << endl;
            cout << "\t\t\t\t" << "|  |  |   | |   __/     |   | |     |  |__|    _|" << endl;
            cout << "\t\t\t\t" << "|  :  |   | |  |        |   | |  _  |   __|   |_ " << endl;
            cout << "\t\t\t\t" << "|     |    \\|  |        |    \\| | | |  |  |     |" << endl;
            cout << "\t\t\t\t" << " \\___/ \\____|__|         \\____|_| |_|__|   \\____|" << endl;
            cout << "\n\n\n";
            cout << "\nGo to the Items List." << endl;
            cout << "Press T  => Tea" << endl;
            cout << "Press SP => Small Pizza" << endl;
            cout << "Press Sh => Shoarma" << endl;
            cout << "Press P  => Pastry" << endl;
            cout << "Press S  => Samosa" << endl;
            cout << "Press G  => Green Salad" << endl;
            cout << "Press SA => Sandwich" << endl;
            cout << "Press B  => Burger" << endl;
            cout << "Press F  => Fries" << endl;
            cout << "Press C  => Coffee" << endl;
            cout << "1. To Calculate Total Price of your all-selected items." << endl;
            cout << "2. Exit." << endl;

            cout << "Enter your choice: ";
            cin >> choice;
            cout << "\n\n\n\n";

            if (choice == "t" || choice == "T") {
                // Process item selection
                if (quantities[0] < 2) {
                    quantities[0]++;
                    cout << items[0] << " added to your cart.\n\n\n\n" << endl;
                }
                else {
                    cout << "You can only select up to 2 quantities of each item." << endl;
                }
            }
            else if (choice == "sp" || choice == "SP") {
                // Process item selection
                if (quantities[1] < 2) {
                    quantities[1]++;
                    cout << items[1] << " added to your cart.\n\n\n\n" << endl;
                }
                else {
                    cout << "You can only select up to 2 quantities of each item." << endl;
                }
            }
            else if (choice == "sh" || choice == "SH") {
                // Process item selection
                if (quantities[2] < 2) {
                    quantities[2]++;
                    cout << items[2] << " added to your cart.\n\n\n\n" << endl;
                }
                else {
                    cout << "You can only select up to 2 quantities of each item." << endl;
                }
            }
            else if (choice == "p" || choice == "P") {
                // Process item selection
                if (quantities[3] < 2) {
                    quantities[3]++;
                    cout << items[3] << " added to your cart.\n\n\n\n" << endl;
                }
                else {
                    cout << "You can only select up to 2 quantities of each item." << endl;
                }
            }
            else if (choice == "s" || choice == "S") {
                // Process item selection
                if (quantities[4] < 2) {
                    quantities[4]++;
                    cout << items[4] << " added to your cart.\n\n\n\n" << endl;
                }
                else {
                    cout << "You can only select up to 2 quantities of each item." << endl;
                }
            }
            else if (choice == "g" || choice == "G") {
                // Process item selection
                if (quantities[5] < 2) {
                    quantities[5]++;
                    cout << items[5] << " added to your cart.\n\n\n\n" << endl;
                }
                else {
                    cout << "You can only select up to 2 quantities of each item." << endl;
                }
            }
            else if (choice == "sa" || choice == "SA") {
                // Process item selection
                if (quantities[6] < 2) {
                    quantities[6]++;
                    cout << items[6] << " added to your cart.\n\n\n\n" << endl;
                }
                else {
                    cout << "You can only select up to 2 quantities of each item." << endl;
                }
            }
            else if (choice == "b" || choice == "B") {
                // Process item selection
                if (quantities[7] < 2) {
                    quantities[7]++;
                    cout << items[7] << " added to your cart.\n\n\n\n" << endl;
                }
                else {
                    cout << "You can only select up to 2 quantities of each item." << endl;
                }
            }
            else if (choice == "f" || choice == "F") {
                // Process item selection
                if (quantities[8] < 2) {
                    quantities[8]++;
                    cout << items[8] << " added to your cart.\n\n\n\n" << endl;
                }
                else {
                    cout << "You can only select up to 2 quantities of each item." << endl;
                }
            }
            else if (choice == "c" || choice == "C") {
                // Process item selection
                if (quantities[9] < 2) {
                    quantities[9]++;
                    cout << items[9] << " added to your cart.\n\n\n\n" << endl;
                }
                else {
                    cout << "You can only select up to 2 quantities of each item." << endl;
                }
            }
            else if (choice == "1") {
                // Calculate total price
                int totalPrice = 0;
                system("cls");
                cout << endl;
                cout << "\t\t\t\t" << " __ __  ____ _____        ____  ___  _____  ____" << endl;
                cout << "\t\t\t\t" << "|  |  |/    |     \\      /    |/   \\|     |/   _|" << endl;
                cout << "\t\t\t\t" << "|  |  |    /|  o   |    |    /|  o  |   __|   |_ " << endl;
                cout << "\t\t\t\t" << "|  |  |   | |   __/     |   | |     |  |__|    _|" << endl;
                cout << "\t\t\t\t" << "|  :  |   | |  |        |   | |  _  |   __|   |_ " << endl;
                cout << "\t\t\t\t" << "|     |    \\|  |        |    \\| | | |  |  |     |" << endl;
                cout << "\t\t\t\t" << " \\___/ \\____|__|         \\____|_| |_|__|   \\____|" << endl;
                cout << "\n\n\n";
                cout << "|-------------------------------------------------------|" << endl;
                cout << "|                     UCP CAFE BILL                     |" << endl;
                cout << "|-------------------------------------------------------|" << endl;
                cout << "|     Item     |     Quantity     |        Price        |" << endl;
                cout << "|-------------------------------------------------------|" << endl;
                for (int i = 0; i < 10; i++) {
                    if (quantities[i] > 0) {
                        int itemPrice = quantities[i] * prices[i];
                        cout << "| " << items[i] << " \t\tx" << quantities[i] << "\t\tRS " << itemPrice << "\t\t|" << endl;
                        totalPrice += itemPrice;
                    }
                }
                cout << "|-------------------------------------------------------|" << endl;
                cout << "| Total Price:\t\t                RS " << totalPrice << "\t\t|" << endl;
                cout << "|-------------------------------------------------------|\n\n\n" << endl;
            }
            else if (choice == "2") {
                // Exit
                system("cls");
                int totalPrice = 0;
                cout << endl;
                cout << "\t\t\t\t" << " __ __  ____ _____        ____  ___  _____  ____" << endl;
                cout << "\t\t\t\t" << "|  |  |/    |     \\      /    |/   \\|     |/   _|" << endl;
                cout << "\t\t\t\t" << "|  |  |    /|  o   |    |    /|  o  |   __|   |_ " << endl;
                cout << "\t\t\t\t" << "|  |  |   | |   __/     |   | |     |  |__|    _|" << endl;
                cout << "\t\t\t\t" << "|  :  |   | |  |        |   | |  _  |   __|   |_ " << endl;
                cout << "\t\t\t\t" << "|     |    \\|  |        |    \\| | | |  |  |     |" << endl;
                cout << "\t\t\t\t" << " \\___/ \\____|__|         \\____|_| |_|__|   \\____|" << endl;
                cout << "\n\n\n";
                cout << "\t\t\t|=======================================================|" << endl;
                cout << "\t\t\t|                     UCP CAFE BILL                     |" << endl;
                cout << "\t\t\t|=======================================================|" << endl;
                cout << "\t\t\t|     Item     |     Quantity     |        Price        |" << endl;
                cout << "\t\t\t|-------------------------------------------------------|" << endl;
                for (int i = 0; i < 10; i++) {
                    if (quantities[i] > 0) {
                        int itemPrice = quantities[i] * prices[i];
                        cout << "\t\t\t| " << items[i] << " \t\tx" << quantities[i] << "\t\tRS " << itemPrice << "\t\t|" << endl;
                        totalPrice += itemPrice;
                    }
                }
                cout << "\t\t\t|-------------------------------------------------------|" << endl;
                cout << "\t\t\t| Total Price:\t\t                RS " << totalPrice << "\t\t|" << endl;
                cout << "\t\t\t|=======================================================|" << endl;
                cout << "\t\t\t|        Thank You for coming to UCP Cafeteria.         |" << endl;
                cout << "\t\t\t|-------------------------------------------------------|" << endl;
                cout << "\t\t\t|          .....Study.....Eat.....Repeat.....           |" << endl;
                cout << "\t\t\t|=======================================================|" << endl;
                break;
            }
            else {
                cout << "\t\t\t|-------------------------------------------------------|" << endl;
                cout << "\t\t\t|           Invalid choice. Please try again.           |" << endl;
                cout << "\t\t\t|-------------------------------------------------------|" << endl;
            }

            system("pause");
            system("cls");
        }
    }
    else {
        cout << "|-------------------------------------------------------|" << endl;
        cout << "|          Invalid employee ID. Access denied.          |" << endl;
        cout << "|-------------------------------------------------------|" << endl;
    }

    return 0;
}

