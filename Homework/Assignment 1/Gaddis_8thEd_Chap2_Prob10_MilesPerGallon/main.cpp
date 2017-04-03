/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on February 28, 2017, 11:30 PM
 * Purpose:  Calculate the miles per gallon a car gets.
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
    int gallons=15, //Gallons the car can hold
        miles=375,  //Miles the car can travel before refuling
        mpg;        //Miles per gallon the car gets
    
    //Map inputs to outputs or process the data
    mpg=miles/gallons;
    
    //Output the transformed data
    cout<<"Your car can hold 15 gallons and can travel"<<endl;
    cout<<"375 miles before refuling. With this info,"<<endl;
    cout<<"your car gets "<<mpg<<" mpg."<<endl;
    
    //Exit stage right!
    return 0;
}