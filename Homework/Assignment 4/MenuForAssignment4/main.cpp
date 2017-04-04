/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on April 3, 2017, 11:05 PM
 * Purpose:  Menu for Homework 4
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Formatting Library
#include <cstdlib>   //Random number generator
#include <ctime>     //Set the random number seed
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and loop
    do{
        //Display Menu
        cout<<endl<<endl<<"Type 0 to exit"<<endl;
        cout<<"Type 1 Student Line Up Problem"<<endl;
        cout<<"Type 2 Savings Account Balance Problem"<<endl;
        cout<<"Type 3 for Guessing Game Problem"<<endl;
        cout<<"Type 4 for Pattern Display Problem"<<endl;
        cout<<"Type 5 for Calories Burned Problem"<<endl;
        cout<<"Type 6 for Pennies For Pay Problem"<<endl;
        cout<<"Type 7 for Math Tutor Problem"<<endl;
        cout<<"Type 8 for Hotel Capacity Problem"<<endl;
        cout<<"Type 9 for Inflation Rate Problem"<<endl;<<endl;
       
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1':{
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
                break;
            }
            case '2':{
                //Declare variables
                float annIntRt=0;    //Annual Interest Rate
                float starBal=0;     //Starting balance
                int   mnthsPsd=0;    //Months passed
                float deposits=0;    //Deposits
                float withdraw=0;    //Withdrawal
                float totDepos=0;    //Total deposit
                float totWith=0;     //Total withdrawal
                float totInt=0;      //Total interest
                float mnthInRt=0;    //Monthly interest rate
                float totBal=0;      //Total balance

                //Input Values
                cout<<"Enter the annual interest rate on the account (e.g .04):"<<endl;
                cin >> annIntRt;

                cout<<"Enter the starting balance:"<<endl;
                cin >> starBal;

                cout<<"How many months have passed since the account was established? "<<endl;
                cin >> mnthsPsd;

                //Map Inputs to Outputs
                totBal=starBal;
                mnthInRt=annIntRt/12;

                //Loop and let user input values
                for(int x=1; x <= mnthsPsd; ++x)
                {
                    cout<<"Month #"<<x<<endl;
                    cout<<"Total deposits for this month:"<<endl;
                    cin>>deposits;
                    totDepos+=deposits;
                    totBal+=deposits;

                    cout<<"Total withdrawal for this month:"<<endl;
                    cin>>withdraw;
                    totWith+=withdraw;
                    totBal-=withdraw;

                    totInt+=(totBal*mnthInRt);
                    totBal+=(totBal*mnthInRt);

                    // check for negative values, end loop if the values are negative
                    if(deposits<0 || withdraw<0 || totBal<0)
                    {
                        cout<< "Please enter positive numbers only!"<<endl;
                        cout<<"The account has been closed.."<<endl;
                        return 0;
                    }
                }
                //Display data
                cout<<fixed<<setprecision(2);
                cout<<"Ending balance: "<<left<<setw(20)<<right<<setw(20)<<"$"<<totBal<<endl;
                cout<<"Amount of deposits: "<<left<<setw(20)<<right<<setw(16)<<"$"<<totDepos<<endl;
                cout<<"Amount of withdrawals: "<<left<<setw(20)<<right<<setw(13)<<"$"<<totWith<<endl;
                cout<<"Amount of interest earned: "<<left<<setw(20)<<right<<setw(9)<<"$"<<totInt<<endl;
                break;
            }
            case '3':{
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
                break;
            }
            case '4':{
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
                break;
            }
            case '5':{
                //Declare variables
                float calBrnd;      //Calories burned
                float calPrMin=3.9f; //Calories burned per min = 3.9

                //Map inputs to outputs and Display Output
                for(int i=5; i<=30; i+=5)
                {
                    calBrnd=i*calPrMin;
                    cout<<"In "<<i<<" minutes, you burned "<<calBrnd<<" calories."<<endl;
    }
                break;
            }
            case '6':{
                //Declare variables
                int numDays=1;      //Number of days
                float money=1.0;    //1 penny
                float total=0;      //Total for the day entered
                float dayPay=0;     //Pay for each day

                //Input data
                cout<<"Enter the number of days"<<endl;
                cin>>numDays;

                //Output data
                while(numDays<1) //Number of days cannot be < 1
                {
                    cout<<"The number of days cannot be less than 1. Please enter a valid number of days"<<endl;
                    cin>>numDays;
                }
                for(int i=1; i<=numDays; i++)
                {
                    dayPay=money/100;
                    cout<<"For day "<<i<<" you earned "<<dayPay<<" pennies"<<endl;
                    total+=dayPay;
                    money*=2;
                }
                cout<<"The total earnings for "<<numDays<<" days are $"<<total<<endl;
                break;
            }
            case '7':{
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare variables
                int op1,op2,result,answer;
                char choice;

                //Input data
                do{
                    cout<<"Math Tutor"<<endl;
                    cout<<"Choose the operation * / + - or anything else to exit"<<endl;
                    cin>>choice;
                    cout<<endl<<endl;
                    if(!(choice=='+'||choice=='-'||choice=='/'||choice=='*')){
                        cout<<"Exit the Math Tutor"<<endl;
                        exit(0);
                    }

                    //Map inputs to outputs or process the data
                    switch(choice){
                        case '+':{
                            op1=rand()%900+100;//[100-999]
                            op2=rand()%900+100;//[100-999]
                            answer=op1+op2;//[3 to 4 digit result]
                            break;
                        }
                        case '-':{
                            op1=rand()%900+100;//[100-999]
                            op2=rand()%900+100;//[100-999]
                            answer=op1-op2;//[0 to 3 digit result]
                            break;
                        }
                        case '*':{
                            op1=rand()%90+10;//[10-99]
                            op2=rand()%90+10;//[10-99]
                            answer=op1*op2;//[2 to 4 digit result]
                            break;
                        }
                        case '/':{
                            answer=rand()%90+10;//[10-99]
                            op2=rand()%90+10;//[10-99]
                            op1=answer*op2;//[2 to 3 digit result]
                            break;
                        }
                        default:{
                            cout<<"Bad operator"<<endl;
                            return 1;
                        }
                    }

                    //Output the transformed data
                    cout<<setw(8)<<op1<<endl;
                    cout<<choice<<setw(7)<<op2<<endl;
                    cout<<"--------"<<endl;
                    cin>>result;

                    //Compare the answer
                    cout<<endl;
                    cout<<((result==answer)?"Correct":"Incorrect")<<endl;
                    cout<<"The answer = "<<answer<<endl;
                }while(choice=='+'||choice=='-'||choice=='/'||choice=='*');
                break;
            }
            case '8':{
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
                break;
            }
            case '9':{
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
                break;
            }
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}