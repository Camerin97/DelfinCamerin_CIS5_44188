/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on April 1, 2017, 1:32 AM
 * Purpose:  Create the triangle patterns A and B
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
    int colomn=10;
    int row=10;

    //Display Output
    //Pattern A
    cout<<endl<<"Pattern A:"<<endl;
    for(int row=0; row<10; row++)
    {
        for(int col=0; col<row;col++)
        cout<<"+";
        cout<<endl;
    }

    //Pattern B
    cout<<endl<<"Pattern B:"<<endl;
    for(int row=10; row>=1; row--)
    {
        for(int col=1; col<row;col++)
        cout<<"+";
        cout<<endl;
    }
    
    //Exit stage right!
    return 0;
}