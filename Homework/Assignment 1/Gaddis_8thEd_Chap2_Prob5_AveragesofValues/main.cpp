/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 28, 2017, 1:06 PM
 * Purpose:  Find the average of five values
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
    float iDont=28,  //Five numbers to be averaged
          know=32,
          whatTo=37,
          name=24,
          these=33,
          sum,      //Sum of the five numbers
          average;  //Average of the five numbers
    
    //Map inputs to outputs or process the data
    sum=iDont+know+whatTo+name+these;
    average=sum/5;
    
    //Output the transformed data
    cout<<"The sum of the 5 #'s = "<<sum<<endl;
    cout<<"The avg of the 5 #'s = "<<average<<endl;
    
    //Exit stage right!
    return 0;
}