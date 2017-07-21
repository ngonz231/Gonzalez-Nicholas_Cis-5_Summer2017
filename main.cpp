/* 
 * File:   main.cpp
 * Author: Nick Gonzalez
 * Created on July 18, 2017, 12:07 PM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>//Input Output Library

#include <string>//String Library
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void prnArry(int doz[],int size){
    for(int i=0;i<size;i++)
    cout<<doz[i]<<endl;
}
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand(static_cast<unsigned int>(time(0)));
    char name[10];
    const int SIZE=12;
    int betType,r,win,b,ev,od,high,low,c1,c2,c3;
    float acct,bet;
    string color,hLo;
    char choice,evO,col;
    int doz1[]={1,2,3,4,5,6,7,8,9,10,11,12};
    
    //Input or initialize values Here
    //Create Beginning Prompts for Game.
    cout<<"Welcome to Roulette!"<<endl;
    cout<<"Please Enter Your First Name."<<endl;
    cin>>name;
    cout<<"Thanks for playing "<<name<<" Please Enter the Amount of money"
            " you have to gamble."<<endl;
    cin>>acct;
    cout<<"You have "<<acct<<" dollars in your account."<<endl;
    cout<<"Now, please enter how much you would like to bet.(1-100)"<<endl;
    cin>>bet;
    while(bet<0||bet>100||bet>acct){
        cout<<"Please enter a number between 1 and 100 or within "<<
                acct<<"(Account Value)"<<endl;
        cin>>bet;
       }
        
    do{       
    cout<<"1 -Bet on a certain color."<<endl;
    cout<<"2 -Bet on even/odd."<<endl;
    cout<<"3 -Bet on High/Low numbers."<<endl;
    cout<<"4 -Bet on column"<<endl;
    cout<<"5 -Bet on one specific Number"<<endl;
    cin>>betType;
    //Create Switch statement to allow player to enter in a choice.
    switch(betType){
        
        case 1: 
            do{
            cout<<"Color Bet."<<endl;
            cout<<"Please select the color which you would like to bet on."
                    <<" Red or Black"<<endl;
            cin>>color;
            while(color!="Red"&&color!="red"&&color!="Black"&&color!="black"){
                    cout<<"Invalid. Try again (Red or Black)"<<endl;
                    cin>>color;
            }
            if (color=="Red"||color=="red"){
                cout<<"Rolling Red"<<endl;
                r=rand()%19;
                if(r%2==0){
                    cout<<"Congratulations  "<<name<<" You Won "<<bet<<endl;
                    acct+=bet;
                   
                    cout<<"You now have "<<acct<<" In your account"<<endl;
                }else{
                    cout<<"Sorry "<<name<<" Better luck next time"<<endl;
                    acct-=bet;
                cout<<"You now have "<<acct<<" in your account"<<endl;
                }
                
            }else if (color=="Black"||color=="black"){
                cout<<"Rolling Black..."<<endl;
                b=rand()%18+1;
                if(b%2==0){
                    cout<<"Congratulations  "<<name<<" You Won "<<bet<<endl;
                    acct+=bet;
                    cout<<"You now have "<<acct+win<<" In your account"<<endl;
                }else{
                    cout<<"Sorry "<<name<<" Better luck next time"<<endl;
                    acct-=bet;
                cout<<"You now have "<<acct<<" in your account"<<endl;
                }
            }cout<<"Would You Like to Bet on Red or Black Again?(Y or N)"<<endl;
            cin>>choice;
            }while(choice=='Y'||choice=='y');
                
            
            break;
        case 2:
            do{
            cout<<"Even/Odd bet"<<endl;
            cout<<"Enter E to bet on Even or O to bet on Odd."<<endl;
            cin>>evO;
            while(evO!='E'&&evO!='e'&&evO!='O'&&evO!='o'){
                cout<<"Invalid Choice. Please enter an E or O"<<endl;
                cin>>evO;
            }
            if(evO=='E'||evO=='e'){
             ev=rand()%18+1;
              if(ev%2==0){
                    cout<<"Congratulations  "<<name<<" You Won "<<bet<<endl;
                    acct+=bet;
                    cout<<"You now have "<<acct+win<<" In your account"<<endl;
                }else{
                    cout<<"Sorry "<<name<<" Better luck next time"<<endl;
                    acct-=bet;
                cout<<"You now have "<<acct<<" in your account"<<endl;
              }
            }else if(evO=='O'||evO=='o'){
                ev=rand()%18+1;
                if(ev%2==1){
                    cout<<"Congratulations  "<<name<<" You Won "<<bet<<endl;
                    acct+=bet;
                    cout<<"You now have "<<acct+win<<" In your account"<<endl;
                }else{
                    cout<<"Sorry "<<name<<" Better luck next time"<<endl;
                    acct-=bet;
                cout<<"You now have "<<acct<<" in your account"<<endl;
                }
            }cout<<"Would you like to bet on Even or Odd again?{Y or N)"<<endl;
            cin>>choice;
            }while(choice=='Y'||choice=='y');
        case 3:
            do{
            cout<<"High/Low Bet"<<endl;
            cout<<"Please type the High or Low, depending on which "
                    "you would like to bet on."<<endl;
                   cin>>hLo;
            while(hLo!="High"&&hLo!="high"&&hLo!="Low"&&hLo!="low"){
                    cout<<"Invalid. Try again (High or Low)"<<endl;
                    cin>>hLo;
            }
            if (hLo=="High"||hLo=="high"){
                cout<<"Rolling for High..."<<endl;
                high=rand()%36+1;
                if(high>=19){
                    cout<<"Congratulations  "<<name<<" You Won "<<bet<<endl;
                    acct+=bet;
                   
                    cout<<"You now have "<<acct<<" In your account"<<endl;
                }else{
                    cout<<"Sorry "<<name<<" Better luck next time"<<endl;
                    acct-=bet;
                cout<<"You now have "<<acct<<" in your account"<<endl;
                }
                
            }else if (hLo=="Low"||hLo=="low"){
                cout<<"Rolling for Low..."<<endl;
                low=rand()%36+1;
                if(low<=18){
                    cout<<"Congratulations  "<<name<<" You Won "<<bet<<endl;
                    acct+=bet;
                    cout<<"You now have "<<acct+win<<" In your account"<<endl;
                }else{
                    cout<<"Sorry "<<name<<" Better luck next time"<<endl;
                    acct-=bet;
                cout<<"You now have "<<acct<<" in your account"<<endl;
                }
            }cout<<"Would You Like to Bet on High or Low Again?(Y or N)"<<endl;
            cin>>choice;
            }while(choice=='Y'||choice=='y');
        case 4:
            do{
            cout<<"Column Bet"<<endl;
            cout<<"Please type the Number of the column"
                    "you would like to bet on.(1,2,or 3)"<<endl;
            cout<<"1- Column 1(1,4,7,10,13,16,19,22,25,28,31,34)"<<endl;
            cout<<"2- Column 2(2,5,8,11,14,17,20,23,26,29,32,35)"<<endl;
            cout<<"3- Column 3(3,6,9,12,15,18,21,24,27,30,33,36)"<<endl;
                   cin>>col;
            while(col!='1'&&col!='2'&&col!='3'){
                    cout<<"Invalid. Try again (1,2,or 3)"<<endl;
                    cin>>col;
            }
            if (col=='1'){
                cout<<"Column 1 roll."<<endl;
                c1=rand()%36+1;
                if(c1==1||c1==4||c1==7||c1==10||c1==13||c1==16||c1==19||c1==22||c1==25||c1==28||c1==31||c1==34){
                    cout<<"Congratulations  "<<name<<" You Won "<<bet*2<<endl;
                    acct+=bet*2;
                   
                    cout<<"You now have "<<acct<<" In your account"<<endl;
                }else{
                    cout<<"Sorry "<<name<<" Better luck next time"<<endl;
                    acct-=bet;
                cout<<"You now have "<<acct<<" in your account"<<endl;
                }
                
            }else if (col=='2'){
                cout<<"Column 2 Roll"<<endl;
                c2=rand()%36+1;
                if(c2==2||c2==5||c2==8||c2==11||c2==14||c2==17||c2==20||c2==23||c2==26||c2==29||c2==32||c2==35){
                    cout<<"Congratulations  "<<name<<" You Won "<<bet*2<<endl;
                    acct+=bet*2;
                    cout<<"You now have "<<acct+win<<" In your account"<<endl;
                }else{
                    cout<<"Sorry "<<name<<" Better luck next time"<<endl;
                    acct-=bet;
                cout<<"You now have "<<acct<<" in your account"<<endl;
                }
                
                    
            }else if(col=='3'){
                cout<<"Column 3 Roll"<<endl;
                c3=rand()%36+1;
                if(c3==3||c3==6||c3==9||c3==12||c3==15||c3==18||c3==21||c3==24||c3==27||c3==30||c3==33||c3==36){
                    cout<<"Congratulations  "<<name<<" You Won "<<bet*2<<endl;
                    acct+=bet*2;
                    cout<<"You now have "<<acct+win<<" In your account"<<endl;
                }else{
                    cout<<"Sorry "<<name<<" Better luck next time"<<endl;
                    acct-=bet;
                cout<<"You now have "<<acct<<" in your account"<<endl;
                }
            }cout<<"Would You Like to Bet on Column Again?(Y or N)"<<endl;
            cin>>choice;
            }while(choice=='Y'||choice=='y');
             
            
            
    }
//Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    }while(betType>=1&&betType<=6);
    return 0;
}
