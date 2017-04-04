/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on April 1, 2017, 6:30 PM
 * Purpose:  Calculate calories burned
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
    float calBrnd;      //Calories burned
    float calPrMin=3.9f; //Calories burned per min = 3.9

    //Map inputs to outputs and Display Output
    for(int i=5; i<=30; i+=5)
    {
        calBrnd=i*calPrMin;
        cout<<"In "<<i<<" minutes, you burned "<<calBrnd<<" calories."<<endl;
    }
    
    //Exit stage right!
    return 0;
}