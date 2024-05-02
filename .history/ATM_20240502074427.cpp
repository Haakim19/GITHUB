#include<iostream>

using namespace std;

void startMenu(){
    cout << "*****MENU*****" << endl;
    cout << "1. Check Ballance" << endl;//if customer select 1 print the ballance
    cout << "2. Deposit Money" << endl;//if customer select 2 deposit money ,add to ballance
    cout << "3. Withdraw Money" << endl;//if customer select 3 withdraw  money ,sub from ballance
    cout << "4. Transfer Money" << endl;//if customer select 4 ask for account number and pin and transfer the money 
    cout << "5. Logout" << endl;//if customer select logout
}

int main ()
{
      int option;
      double ballance = 100000;
    do // using do while loop for run the code one time 
    {
     startMenu();
     
     
     cout << "Option:" << endl;
     cin >> option;
     
     system("cls");// clear the terminal
     switch (option)
     {
     case 1:
        cout << "Your ballance is: " << ballance << endl;
        break;
     
     case 2:
        double depositAmount;
        cout << "Deposit Amount:" << endl;
        cin >> depositAmount ;
        ballance += depositAmount;
        break;
     
     case 3:
        double withdrawAmount;
        cout << "Withdraw Amount:" << endl;
        cin >> withdrawAmount;
        if (withdrawAmount<=ballance)
            {
                ballance -= withdrawAmount;
            }
        else
        {
            cout << "Not Enough Money." << endl;
        }
        break;
     
     case 4:
        int userPIN = 1100 , pin , transferAccountNumber;
        double transferAmount;
        cout << "Your Pin Number:" <<endl;
        cin >> pin;
        cout << "Account Number To Transfer The Money:";
        cin >> transferAccountNumber;
        if (pin == userPIN)
            {
                cout << "Transfer Amount:" << endl;
                cin >> transferAmount ;
                if (ballance >= transferAmount)
                {
                    cout << transferAmount << " is successfully transferred to " << transferAccountNumber << endl;
                }

            }
        else
            {
                cout << "Invalid Pin Number of Account Number." << endl;
            }
        break;
     case 5:
        cout << "*****THANKYOU*****" << endl;
        cout << "*****COME AGAIN*****" << endl;
        break;
     }
    } while (option !=5);
    



}