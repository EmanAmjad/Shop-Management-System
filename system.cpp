// system.cpp : Defines the entry point for the console application.
//

#include"stdafx.h"
#include <iostream>
using namespace std;
    struct stock
    {
        string item[5];
        int price[5],quantity[5],purchase[5];
    };
    void Display(stock &stock){
        cout << "     ***Welcome To The Mini-Store of Eman Amjad***     "<<endl;
        cout << "          Which item do you Want to purchase?        " << endl;
        for(int i=0;i<5;i++)
        { 
            cout << i+1 <<") " << stock.item[i] << " for " << stock.price[i] << " Rs. ( Availble Stock "<< stock.quantity[i] << " )"<< endl;
        }
        cout << "0) To See Final Bill."<<endl;
    }
    void Purchase(stock &stock,int &choice){

    if(choice == 1){
    cout << "Stock remaining " << stock.quantity[0] << " of " << stock.item[0] << "." << endl;
}else
if(choice == 2){
    cout << "Stock remaining " << stock.quantity[1] <<  " of " << stock.item[1] << "."  << endl;
}else
if(choice == 3){
    cout << "Stock remaining " << stock.quantity[2] <<  " of "<<stock.item[2] << "."  << endl;
}else
if(choice == 4){
    cout << "Stock remaining " << stock.quantity[3] <<  " of " << stock.item[3] << "."  << endl;
}else
if(choice == 5){
    cout << "Stock remaining " << stock.quantity[4] <<  " of " << stock.item[4] << "."  << endl;
    }
    }
int input(int &choice,int &bill,stock &stock){
bill=0;
cin >>choice;
while(choice != 0)
{
if(choice == 1){
    if(stock.quantity[0]==0){
        cout << "Sorry Out Of Stock.\n Kindly Choose Another Item." << endl;
    }else{
    stock.quantity[0]=stock.quantity[0]-1;
    stock.purchase[0]=stock.purchase[0]+1;
    bill=bill+20;
    Purchase(stock,choice);
    }
}else
if(choice == 2){
    if(stock.quantity[1]==0){
        cout << "Sorry Out Of Stock.\n Kindly Choose Another Item." << endl;
    }else{
    stock.quantity[1]=stock.quantity[1]-1;
    stock.purchase[1]=stock.purchase[1]+1;
    bill=bill+150;
    Purchase(stock,choice);
    }
}else
if(choice == 3){
    if(stock.quantity[2]==0){
        cout << "Sorry Out Of Stock.\n Kindly Choose Another Item." << endl;
    }else{
    stock.quantity[2]=stock.quantity[2]-1;
    stock.purchase[2]=stock.purchase[2]+1;
    bill=bill+100;
    Purchase(stock,choice);
    }
}else
if(choice == 4){
    if(stock.quantity[3]==0){
        cout << "Sorry Out Of Stock.\n Kindly Choose Another Item." << endl;
    }else{
    stock.quantity[3]=stock.quantity[3]-1;
    stock.purchase[3]=stock.purchase[3]+1;
    bill=bill+5;
    Purchase(stock,choice);
    }
}else
if(choice == 5){
    if(stock.quantity[4]==0){
        cout << "Sorry Out Of Stock.\n Kindly Choose Another Item." << endl;
    }else{
    stock.quantity[4]=stock.quantity[4]-1;
    stock.purchase[4]=stock.purchase[4]+1;
    bill=bill+10;
    Purchase(stock,choice);
    }
}else
cout << "Invalid Input." << endl;

cout << "Anything else?"<<endl;
cin >> choice;
}
   return bill; 
}
void output(int &bill , stock &stock){
    cout << "            ***Final Bill***        " << endl;
    cout << "    Items    " << "   Amount    " << "   Price    " << endl;
    for (int i=0;i<5;i++){
        cout <<"    "<< stock.item[i] <<"       "<< stock.purchase[i] <<"               "<< stock.purchase[i]*stock.price[i] << endl;
    }
    cout << "-----------------------------------------------------"<<endl;
    cout << "Your Final Bill is:" << bill << " Rs." << endl;
    cout << "Thanks For Shopping." << endl;
}


int main(){
    int choice,bill=0;
    //Initialization of store
    stock stock;
    stock.item[0]="Lays";
    stock.item[1]="Kitkat";
    stock.item[2]="Coke";
    stock.item[3]="Salanty";
    stock.item[4]="Chocolato";
    for(int i=0;i<5;i++){
    stock.quantity[i]=10;
    stock.purchase[i]=0;
    }
    stock.price[0]=20;
    stock.price[1]=150;
    stock.price[2]=100;
    stock.price[3]=5;
    stock.price[4]=10;
    //Initialization End
    Display(stock);
    input(choice , bill, stock);
    output(bill,stock);
    return 0;
}