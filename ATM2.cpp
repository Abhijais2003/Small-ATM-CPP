#include <iostream>
using namespace std;

void Options()
{
    cout << "**********************************MENU**************************************\n"
         << endl;
    cout << "1: Balance" << endl;
    cout << "2: Deposit" << endl;
    cout << "3: Withdraw" << endl;
    cout << "4: Transfer\n"<< endl;
    cout << "*********************************EXIT***************************************\n"<< endl;
}
int main()
{

    int option;
    int Balance_check;
    Balance_check = 10000;

    do
    {
        Options();
        cout << "Option:- ";
        cin >> option;

        system("cls");

        switch (option)
        {
        case 1:
            cout << Balance_check << "rupees\n"<<endl;
            break;
        case 2:
            int deposit;
            cout << "Amount:- ";
            cin >> deposit;
             Balance_check+=deposit;
            break;
        case 3:
            int withdraw;
            cout << "Amount:-";
            cin >> withdraw;
            if (Balance_check >= withdraw)
                 Balance_check = Balance_check - withdraw;
            else
                cout << "Warning! not have enough money!"<<endl;
                break;
        case 4:
            string Name;
            cout << "Name:- ";
            cin >> Name;
            string upi_id;
            cout << "UPI-ID:- ";
            cin >> upi_id;
            int amout;
            cout << "Amout:- ";
            cin >> amout;
            if (amout > Balance_check)
                cout << "Warning! Not having enough money "<<endl;
            else
                Balance_check -= amout;
                break;
        }
    } while (option !=5);

        return 0;
}