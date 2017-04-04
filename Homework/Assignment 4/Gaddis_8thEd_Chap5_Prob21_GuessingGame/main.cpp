/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on April 3, 2017, 2:15 PM
 * Purpose:  Create a number guessing game
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>      //Time
#include <cstdlib>    //Random number generator
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int randNum;
    int userNum;
    int attempts=0;

    //Input data
    bool win=false;
    unsigned seed=time(0);
    srand(seed);

    //Map inputs to Output
    randNum=1+rand()%10;

    //Display Output
    cout<<"Can you guess the number I am thinking of?"<<endl;
    cin>>userNum;

    while(!win)
    {
        if(userNum<randNum)         //Number guessed is too low
        {
            cout<<"Too low, try again!"<<endl;
            cin>>userNum;
             attempts++;
        }
        else if(userNum>randNum)    //Number guessed is too high
        {
            cout<<"Too high, try again!"<<endl;
            cin>>userNum;
            attempts++;
        }
        else
        {
            attempts++;
            cout<<"Congratulations, you win!"<<endl;
            cout<<"It took you "<<attempts<<" attempts."<<endl;
            win=true;
        }
    }
    return 0;
}