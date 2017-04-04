/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on April 3, 2017, 1:32 PM
 * Purpose:  Calculate the balance of a savings count after a certain amount
 *           of time.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float annIntRt=0;    //Annual Interest Rate
    float starBal=0;     //Starting balance
    int   mnthsPsd=0;    //Months passed
    float deposits=0;    //Deposits
    float withdraw=0;    //Withdrawal
    float totDepos=0;    //Total deposit
    float totWith=0;     //Total withdrawal
    float totInt=0;      //Total interest
    float mnthInRt=0;    //Monthly interest rate
    float totBal=0;      //Total balance

    //Input Values
    cout<<"Enter the annual interest rate on the account (e.g .04):"<<endl;
    cin >> annIntRt;

    cout<<"Enter the starting balance:"<<endl;
    cin >> starBal;

    cout<<"How many months have passed since the account was established? "<<endl;
    cin >> mnthsPsd;

    //Map Inputs to Outputs
    totBal=starBal;
    mnthInRt=annIntRt/12;

    //Loop and let user input values
    for(int x=1; x <= mnthsPsd; ++x)
    {
        cout<<"Month #"<<x<<endl;
        cout<<"Total deposits for this month:"<<endl;
        cin>>deposits;
        totDepos+=deposits;
        totBal+=deposits;

        cout<<"Total withdrawal for this month:"<<endl;
        cin>>withdraw;
        totWith+=withdraw;
        totBal-=withdraw;

        totInt+=(totBal*mnthInRt);
        totBal+=(totBal*mnthInRt);

        // check for negative values, end loop if the values are negative
        if(deposits<0 || withdraw<0 || totBal<0)
        {
            cout<< "Please enter positive numbers only!"<<endl;
            cout<<"The account has been closed.."<<endl;
            return 0;
        }
    }
    //Display data
    cout<<fixed<<setprecision(2);
    cout<<"Ending balance: "<<left<<setw(20)<<right<<setw(20)<<"$"<<totBal<<endl;
    cout<<"Amount of deposits: "<<left<<setw(20)<<right<<setw(16)<<"$"<<totDepos<<endl;
    cout<<"Amount of withdrawals: "<<left<<setw(20)<<right<<setw(13)<<"$"<<totWith<<endl;
    cout<<"Amount of interest earned: "<<left<<setw(20)<<right<<setw(9)<<"$"<<totInt<<endl;
    
    
    //Exit stage right!
    return 0;
}