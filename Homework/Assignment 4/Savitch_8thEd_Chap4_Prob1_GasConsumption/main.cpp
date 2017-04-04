/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on April 2, 2017, 7:40 PM
 * Purpose:  Calculate the gas mileage traveled
 * Extra Problem for lab absence on March 30th
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
    float liters = 0;
    float distance = 0.0;
    float mpg = 0.0;
    char redo;
    const float MPG=0.264179;

    //Do-While loop
    do
    {

        //Input Values
        cout<<"Enter the amount of gasoline in liters: ";
        cin>>liters;
        cout<<endl;

        cout<<"Enter the number of miles traveled: ";
        cin>>distance;
        cout<<endl;

        //Map inputs to outputs
        mpg=distance/(liters * MPG);

        //Display data
        cout<<"The gas mileage of this travel is "<<mpg<<endl;
        cout<<endl;

        cout<<"Do you want to run this program again(yes=1, no=0)? ";
        cin>>redo;
        cout<<endl;

    }while(redo == '1');
    cout<<"Don't text and Drive. It's the law!"<<endl;

    //Exit stage right!
    return 0;
}