/**********************************************/
/**********************************************/
/***********	Author: Mohamed Samir  ********/
/***********	DATE:   17-8/2019	   ********/
/**********************************************/
/**********************************************/
#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
int pin;
int choice;
int balance=1000;
int withdraw;
float deposite;
int password;





cout<<"########### WElCOM TO MY ATM ############## \n";

cout<<"Please Enter your PIN  :  ";
    cin>>pin;


    ifstream Testfile;
    Testfile.open("atm.txt" ,ios::in);
Testfile>> password;


while(pin !=password ){

cout<<"That is not true ,Please Enter your PIN  :  ";
    cin>>pin;

    }
do{
    cout<<"1. check account \n "<<endl;
    cout<<"2. withdraw Cash  \n"<<endl;
    cout<<"3. Deposit cash  \n"<<endl;
    cout<<"4. Quite  \n"<<endl;

  cout<<"############  Chose from the menu  : ############ \n\n ";
  cin >>choice;
             system("cls");


     switch (choice){
            case 1:
            cout<<"##########Your current balance is ########## : $" <<balance<<endl;
            break;
            case 2 :
                cout<<"Enter the amount to withdraw :  ";
                cin>>withdraw;
               if (withdraw > balance ){
                cout<<" !!!!!!!!!!!!!You dont have enough money...... !!!!!!!!!!!!!"<<endl;
               }else{
                balance = balance - withdraw;
                cout<<"Your current balance is :$ " <<balance<<endl;
                 }
                break;

            case 3:
                cout<<"Enter the amount :  ";
                cin >>deposite;
                balance= balance + deposite;

                 cout<<"Your current balance is : $ " <<balance<<endl;

                break;

            case 4:
                cout<<" *************** Thanke you for using this  ************\n\n";
            default:
            cout<<"the number is not exist..........";
            break;
            }
}while(choice!=4);
}

