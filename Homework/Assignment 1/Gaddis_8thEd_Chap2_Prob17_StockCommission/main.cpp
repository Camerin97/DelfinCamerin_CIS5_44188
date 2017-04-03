/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on February 28, 2017, 12:52 PM
 * Purpose:  Calculate the amount paid for stock, commission, and
 *           total paid altogether.
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
    int   nShares=750;  //Number of shares
    float stckPrc=35.0f,//Price per stock in $'s
          commish=.02,  //Commission percent
          stkAmnt,      //Amount paid for stock in $'s
          comAmnt,      //Amount of commission in $'s
          totPaid;      //Total paid for commish and stock in $'s
    
    //Map inputs to outputs or process the data
    stkAmnt=nShares*stckPrc;
    comAmnt=stkAmnt*commish;
    totPaid=stkAmnt+comAmnt;
    
    //Output the transformed data
    cout<<"Amount paid for 750 shares = $"<<stkAmnt<<endl;
    cout<<"Commission amount (2%)     = $  "<<comAmnt<<endl;
    cout<<"Total paid                 = $"<<totPaid<<endl;
    
    //Exit stage right!
    return 0;
}