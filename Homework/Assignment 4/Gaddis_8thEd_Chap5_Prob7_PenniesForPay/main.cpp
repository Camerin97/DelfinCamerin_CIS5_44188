/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on April 1, 2017, 2:45 PM
 * Purpose:  Calculate how much a person would earn after a given
 *           amount of days, with the first day given a penny and each
 *           day afterwards the value would double.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int numDays=1;      //Number of days
    float money=1.0;    //1 penny
    float total=0;      //Total for the day entered
    float dayPay=0;     //Pay for each day

    //Input data
    cout<<"Enter the number of days"<<endl;
    cin>>numDays;

    //Output data
    while(numDays<1) //Number of days cannot be < 1
    {
        cout<<"The number of days cannot be less than 1. Please enter a valid number of days"<<endl;
        cin>>numDays;
    }
    for(int i=1; i<=numDays; i++)
    {
        dayPay=money/100;
        cout<<"For day "<<i<<" you earned "<<dayPay<<" pennies"<<endl;
        total+=dayPay;
        money*=2;
    }
    cout<<"The total earnings for "<<numDays<<" days are $"<<total<<endl;
    
    //Exit stage right!
    return 0;
}