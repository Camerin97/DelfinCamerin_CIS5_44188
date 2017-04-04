/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on April 1, 2017, 2:05 PM
 * Purpose:  Calculate a hotels capacity
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float floors=0,
      count=0,
      rooms,
      roomTot=0,
      occupied,
      occTot=0,
      unoccupied,
      number=0,
      percent=0;

    //Input data
    cout<<"Welcome to the hotel occupancy calculator"<<endl;
    cout<<"How many floors are in your hotel?"<<endl;
    cin>>floors;

    while (floors < 1)//if user enters 0 or less floors, error
    {
        cout<<"ERROR: You cannot enter 0 or less for the number of floors!"<<endl;
        cout<<"PLEASE TRY AGAIN!"<<endl;
        cin>>floors;
    }
    while (number < floors)//loop to ask for input from user, once for each floor
    {
        count++;
    //if count == 13 (13th floor) we will stop loop, and start over at top
        if (count == 13)
        {
            cout<<"We will be skipping floor #13, as is common in most hotels."<<endl;
            continue;
        }
    //asks user to enter number of floors
        cout<<"How many rooms on floor number "<<count<<"? (cannot be less than 10)"<<endl;
        cin>>rooms;
    while (rooms <10)//if user enters less than 10 rooms per floor, error
    {
        cout<<"ERROR: Cannot be less than 10 rooms! Please try again."<<endl;
        cin>>rooms;
    }           
    //asks users how many rooms in floor
    cout<<"How many rooms are occupied on this floor?"<<endl;
    cin>>occupied;
    while (occupied > rooms)
    {
    //if user enters more occupied than rooms on floor, error
         cout<<"ERROR: You cannot have more occupied rooms than total rooms on floor! Please try again."<<endl;
         cin>>occupied;
    }       
    //add one to number during each loop
    number++;
    roomTot+=rooms;
    occTot+=occupied;
    }

    //Map Inputs to Outputs
    unoccupied=roomTot-occTot;
    percent=occTot/roomTot*100;

    //Output data
    cout<<"Total Floors: "<<floors<<endl;
    cout<<"Total Rooms: "<<roomTot<<endl;
    cout<<"Total Occupied: "<<occTot<<endl;
    cout<<"Total Unoccupied: "<<unoccupied<<endl;
    cout<<"Percentage of rooms occupied is: "<<fixed<<setprecision(2)<<percent<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}

