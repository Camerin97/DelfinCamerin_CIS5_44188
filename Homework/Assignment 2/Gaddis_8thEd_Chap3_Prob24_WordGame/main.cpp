/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 12, 2017, 1:38 PM
  Purpose:  Create a word game.
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
    string name,    //Name of user
           age,     //Age of user
           city,    //City user chooses
           college, //College user chooses
           profess, //A profession user chooses
           animal,  //Type of animal user chooses
           petName; //A pet's name
    
    //Input values
    cout<<"We are going to play a word game!"<<endl;
    cout<<"Please input your name:"<<endl;
    getline(cin, name);
    cout<<"Input your age"<<endl;
    cin>>age;
    cout<<"Input the name of a city"<<endl;
    getline(cin, city);
    cout<<"Input the name of a college"<<endl;
    getline(cin, college);
    cout<<"Input a profession"<<endl;
    getline(cin, profess);
    cout<<"Input a type of animal"<<endl;
    getline(cin, animal);
    cout<<"Input a pet's name"<<endl;
    getline(cin, petName);
    
    //Output values
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<
            ". At the age of "<,endl;
    cout<<age<<", "<<name<<" went to college at "<<college<<". "<<name<<
            " graduated and went to work "<<endl;
    cout<<"as a "<<profess<<". Then, "<<name<<" adopted a(n) "<<animal<<" named "
            <<petName<<". They "<<endl;
    cout<<"both lived happily ever after!"<<endl;

    //Exit stage right!
    return 0;
}