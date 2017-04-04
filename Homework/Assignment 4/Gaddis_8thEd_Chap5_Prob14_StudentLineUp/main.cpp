/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on April 3, 2017, 12:45 PM
 * Purpose:  Determine which student would be first and last in line
 *           alphabetically.
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
    int    numStud=0;//Number of students
    string studName; //Student name
    string fstStud;  //First student in line
    string lstStud;  //Last student in line

    //Display Output
    //Number of students cant be less than 1 or greater than 25
    while (numStud<1||numStud>25)
    {
        cout<<"Please enter the number of students, must be between 1 and 25"<<endl;
        cin>>numStud;
    }
    for (int i=1; i<=numStud;i++)
    {
        cout<<"Please enter name of student "<<i<<":"<<endl;
        cin>>studName;
        if(i==1)
        {
            fstStud=studName;
            lstStud=studName;
        }
        else
        {
            if(studName<fstStud)
            fstStud=studName;
        else if(studName>lstStud)
            lstStud=studName;       
        }
    }
    cout<<"First student is: "<<fstStud<<endl;
    cout<<"Last student is:  "<<lstStud<<endl;
    
    //Exit stage right!
    return 0;
}