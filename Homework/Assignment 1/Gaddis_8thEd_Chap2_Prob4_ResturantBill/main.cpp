/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on February 28, 2017, 12:09 PM
 * Purpose:  Calculate the tax and tip of a restaurant bill
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
    float tax=.0675,    //tax = 6.75%
          tip=.20,      //tip = 20%
          charge=88.67f,//Meal charge $88.67
          taxAmnt,      //Tax amount in $'s
          tipAmnt,      //Tip amount in $'s
          total;        //Total bill
    
    //Map inputs to outputs or process the data
    taxAmnt=charge*tax;
    tipAmnt=charge*tip;
    total=charge+taxAmnt+tipAmnt;
    
    //Output the transformed data
    cout<<"Your meal cost = $"<<charge<<endl;
    cout<<"Tax amount     = $"<<taxAmnt<<endl;
    cout<<"Tip amount     = $"<<tipAmnt<<endl<<endl;
    cout<<"Total bill     = $"<<total<<endl;
    
    //Exit stage right!
    return 0;
}