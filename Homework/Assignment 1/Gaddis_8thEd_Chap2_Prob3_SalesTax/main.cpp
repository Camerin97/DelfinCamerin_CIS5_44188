/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on February 28, 2017, 11:45 PM
 * Purpose:  Calculate the sales tax on a $95 purchase
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
    float prchase=95, //Purchase total in $'s
          statTax=.04,//State sales tax %
          countTx=.02,//County sales tax %
          totTax;     //Total sales tax %
    
    //Map inputs to outputs or process the data
    totTax=(prchase*statTax)+(prchase*countTx);
    
    //Output the transformed data
    cout<<"The total sales tax amount of your $95 purchase is $"<<totTax
            <<"0"<<endl;
    
    //Exit stage right!
    return 0;
}