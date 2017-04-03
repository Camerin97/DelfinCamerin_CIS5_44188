/* 
  File:   main.cpp
  Author: Camerin Delfn 
  Created on January 12, 2017, 12:39 PM
  Purpose:  Calculate a theaters Gross and Net profit for a night
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
    string         movName;      //Movie name
    unsigned short adtTick,      //Number of adult tickets sold
                   chdTick;      //Number of children tickets sold
    float          adtPric=10.00,//Price of adult tickets in $
                   chdPric=6.00, //Price of children's tickets in $
                   grsProf,      //Gross profit made in $
                   netProf,      //Net profit made in $
                   paidDis;      //Amount paid to the Distributor in $
     
    //Input values
    cout<<"Please Input the name of the movie:"<<endl;
    getline(cin, movName);
    cout<<"How many adult tickets were sold for this movie?"<<endl;
    cin>>adtTick;
    cout<<"How many children's tickets were sold for this movie?"<<endl;
    cin>>chdTick;
    cout<<endl<<endl;
    
    //Process by mapping inputs to outputs
    grsProf=adtTick*adtPric+chdTick*chdPric;
    netProf=grsProf*.20;
    paidDis=grsProf-netProf;
    
    //Output values
    cout<<"Movie Name:                  "<<movName<<endl;
    cout<<"Adult tickets sold:          "<<adtTick<<endl;
    cout<<"Child tickets sold:          "<<chdTick<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Gross Box Office Profit:     $"<<grsProf<<endl;
    cout<<"Net Box Office Profit:       $"<<netProf<<endl;
    cout<<"Amount paid to Distributor:  $"<<paidDis<<endl;
    
    

    //Exit stage right!
    return 0;
}