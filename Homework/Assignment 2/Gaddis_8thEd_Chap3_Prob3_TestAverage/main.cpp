/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 12, 2017, 1:11 PM
  Purpose:  Calculate the average of five test scores that the user inputs
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
    float test1,
          test2,
          test3,
          test4,
          test5,
          average;
    
    //Input values
    cout<<"This program will calculate the average of five"<<endl;
    cout<<"test scores. Please input the five test scores"<<endl;
    cout<<"seperated by a space, for example: 85 83 76 95 53."<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    
    //Process by mapping inputs to outputs
    average=(test1+test2+test3+test4+test5)/5;
    
    //Output values
    cout<<fixed<<setprecision(1);
    cout<<"The average of these test scores is: "<<average<<endl;

    //Exit stage right!
    return 0;
}