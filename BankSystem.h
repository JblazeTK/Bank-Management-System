#pragma once

#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

void intro()
{
    system("cls");

    cout << "============================== ";
    cout << "BANK";
    cout << "MANAGEMENT";
    cout << "SYSTEM";
    cout << " ==============================";

}

class account
{
    
public:
    int accountNumber, accountBalance;
    char accountName[50];
    char accountType;

    void create_account()
    {
        char tempName, tempType;
        int tempNumber;
        system("cls");
        cout << "\n\n====NEW ACCOUNT ENTRY FORM====\n\n";
        cout << "\nEnter The account Number : ";
        cin >> accountNumber;
        cout << "\nEnter The Name of The account Holder : ";
        cin >> accountName;
        cout << "\nEnter Type of The account (C/S) : ";
        cin >> accountType;
        accountType = toupper(accountType);
        cout << "\nEnter Initial amount\n>=500 for Saving >=1000 for current :";
        cin >> accountBalance;
        cout << "\n\n\nYour Account Created Successfully ..\n";
    }
    void modify_account(int acNum)
    {
        cout << "\nAccount No. : " << accountNumber;
        cout << "\nModify Account Holder Name : ";
        cin >> accountName;
        cout << "Modify Type of Account : "; cin >> accountType;
        cout << "Modify Balance amount : "; cin >> accountBalance;
        cout << endl;
    }
    void deposit(int acNum)
    {
        int temp;
        cout << "\n\n====ACCOUNT TRANSCATION FORM====";
        cout << "\n\nEnter The account No. : ";
        cin >> temp;
        if (acNum == temp)
        {
            cout << "\n\nEnter The amount to DEPOSIT : ";
            cin >> temp;
            accountBalance = accountBalance + temp;
            cout << "\n\nDEPOSIT COMPLETED : CURRENT BALANCE : $" << accountBalance;
        }
        else
        {
            cout << "\n\n Record Not Found ";
        }
        cout << endl;
    }
    void withdraw(int acNum)
    {
        int temp;
        cout << "\n\n====ACCOUNT TRANSCATION FORM====";
        cout << "\n\nEnter The account No. : ";
        cin >> temp;
        if (acNum == temp)
        {
            cout << "\n\nEnter The amount to WITHDRAW : ";
            cin >> temp;
            if (temp <= accountBalance)
            {
                accountBalance = accountBalance - temp;
                cout << "\n\nWITHDRAW COMPLETED : CURRENT BALANCE : $" << accountBalance;
            }
            else
            {
                cout << "\n\nWITHDRAW FAILED : NOT ENOUGH BALANCE ";
            }
        }
        else
        {
            cout << "\n\n Record Not Found ";
        }
        cout << endl;
    }
    void display_account(int acNum)
    {
        int temp;
        cout << "\n\n====BALANCE DETAILS====";
        cout << "\n\nEnter the Account Number : ";
        cin >> temp;
        
        if (acNum == temp && temp != 0)
        {
            cout << "\n\nACCOUNT NUMBER :" << accountNumber << "\nACCOUNT NAME : " << accountName;
            cout << "\nACCOUNT BALANCE : $ " << accountBalance << "\nACCOUNT TYPE : ";
            switch (accountType)
            {
            case 'C': cout << "CHECK";
                break;
            case 'S': cout << "SAVINGS";
            default: cout << "\a";
            }
        }

        if (temp == 0)
        {

            cout << "\n\n Record Not Found ";
        }
        cout << endl;
    }
}; 
