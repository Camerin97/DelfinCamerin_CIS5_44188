/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on February 28, 2017, 12:36 PM
 * Purpose:  calculate the subtotal, sales tax, and total of 5 items
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
    float item1=15.95,  //Price of items in $'s
          item2=24.95,
          item3=6.95,
          item4=12.95,
          item5=3.95,
          subtot,       //Subtotal in $'s
          saleTax=.07,  //Sales tax in %
          taxTot,       //Tax Amount in $'s
          total;        //Total in $'s
    
    //Map inputs to outputs or process the data
    subtot=item1+item2+item3+item4+item5;
    taxTot=subtot*saleTax;
    total=subtot+taxTot;
    
    //Output the transformed data
    cout<<"Price of item 1 = $"<<item1<<endl;
    cout<<"Price of item 2 = $"<<item2<<endl;
    cout<<"Price of item 3 = $ "<<item3<<endl;
    cout<<"Price of item 4 = $"<<item4<<endl;
    cout<<"Price of item 5 = $ "<<item5<<endl;
    cout<<"Subtotal        = $"<<subtot<<endl;
    cout<<"Sales tax       = $"<<taxTot<<endl;
    cout<<"_________________________"<<endl;
    cout<<"Total           = $"<<total<<endl;
    
    //Exit stage right!
    return 0;
}