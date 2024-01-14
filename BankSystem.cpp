#include"BankSystem.h"
#include<stdio.h>
#include<iostream>

//Replace everything and make a less complicated version of this system
//Take it slow and learn everything once more
//It's almost done you can upload it to github as put on resume then apply to the job dad sent


int main()
{
    char option;
    intro();

    account A{};
    do
    {
        system("cls");
        cout << "\n\n\n\tMAIN MENU";
        cout << "\n\n\t01. NEW ACCOUNT";
        cout << "\n\n\t02. DEPOSIT AMOUNT";
        cout << "\n\n\t03. WITHDRAW AMOUNT";
        cout << "\n\n\t04. BALANCE ENQUIRY";
        cout << "\n\n\t05. MODIFY AN ACCOUNT";
        cout << "\n\n\t06. EXIT";
        cout << "\n\n\tSelect Your Option (1-7) ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case '1': A.create_account();
           break;
        case '2': A.deposit(A.accountNumber);
            break;
        case '3': A.withdraw(A.accountNumber);
            break;
        case '4': A.display_account(A.accountNumber);
            break;
        case '5': A.modify_account(A.accountNumber);
            break;
        case '6': exit(0);
        default: cout << "\a";
        }
        system("pause");
    } while (option != '6');
}
