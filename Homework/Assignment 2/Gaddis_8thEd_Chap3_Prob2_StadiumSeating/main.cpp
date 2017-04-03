/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 12, 2017, 1:22 PM
  Purpose:  Calculate the amount of income generated from ticket sales
            for baseball game seating.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float classA,       //Number of class A tickets sold
          classB,       //Number of class B tickets sold
          classC,       //Number of class C tickets sold
          priceA=15.00, //Price of class A tickets in $
          priceB=12.00,
          priceC=9.00,
          income;       //Income made in $ 
    
    //Input values
    cout<<"This program will calculate the amount of income"<<endl;
    cout<<"generated from seat tickets sold for a baseball game."<<endl;
    cout<<"How many Class A tickets were sold?"<<endl;
    cin>>classA;
    cout<<"How many Class B tickets were sold?"<<endl;
    cin>>classB;
    cout<<"How many Class C tickets were sold?"<<endl;
    cin>>classC;
    cout<<endl;
    
    //Process by mapping inputs to outputs
    income=classA*priceA+classB*priceB+classC*priceC;
    
    //Output values
    cout<<fixed<<setprecision(2);
    cout<<"Income made: $"<<income<<endl;

    //Exit stage right!
    return 0;
}