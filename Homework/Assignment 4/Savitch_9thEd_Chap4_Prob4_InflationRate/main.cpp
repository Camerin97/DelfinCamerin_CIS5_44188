/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on April 2, 2017, 8:28 PM
 * Purpose:  Calculate the inflation rate of an item
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
    float lasYrPr=0.0;
    float curYrPr=0.0;
    float infRte=0.0;
    char redo;

    do
    {
        //Input values
        cout<<"What was the price of the item a year ago? ";
        cin>>lasYrPr;
        cout<<"What is the price of the item today? ";
        cin>>curYrPr;


        //map inputs to outputs and display data
        cout<<"The inflation rate is "<<((curYrPr-lasYrPr)/lasYrPr*100)<<"%."<<endl;

        cout<<"Do you want to run this program again(yes=1, no=0)? "<<endl;
        cin>>redo;
        cout<<endl;
    }while(redo == '1');
    cout<<"Don't Let Your Money Sit Around Losing Value"<<endl;
    
    //Exit stage right!
    return 0;
}