/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on February 28, 2017, 12:27 PM
 * Purpose:  Calculate an employees total annual pay
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
    float payAmnt=2200.0f;//Amount each pay period = $2200
    int   payPerd=26;     //# of pay periods in a yr
    float annPay;         //Employee's annual pay
    
    //Map inputs to outputs or process the data
    annPay=payAmnt*payPerd;
    
    //Output the transformed data
    cout<<"Your annual pay amount is $"<<annPay<<endl;
    
    //Exit stage right!
    return 0;
}