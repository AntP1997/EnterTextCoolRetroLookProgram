#include <iostream>
#include <unistd.h>
#include <ctime>
#include <vector>
#define OSWindows "cls"
#define OSLinux "clear"

using namespace std;

void SleepFunction()//this is a sleep function
{
  for(int i = 0; i <= 10000000;i++){}
}

void gameload1(char LetterArray[],/*this the sleep function counting with the for loop*/void SleepFun(),int num)
{
          SleepFun();
          cout<<LetterArray[num];
}
void gameload2(char CharArray[],/*this the sleep function counting with the for loop*/void SleepFun(),int num)
{
          SleepFun();
          cout<<CharArray[num];
}


int main()
{
       int size=1000;
       int ni=0;
       char LoadingLetter[size];
       static int count1=0;
       cout<<"please enter text to see retro terminal effect"<<endl;
      bool TORF= true;
       for(;;){


            cin>>LoadingLetter[ni];




            if(LoadingLetter[ni]=='!')
            {//this check to see if you type in exit
            TORF=false;
            break;


            }


               ni++;
           count1++;
        }

        char LoadingStar[]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'};



       for(int c =0; c <6;c++)
       {



         for(int i = 0; i<=count1;i++)
         {

           int hold =c%2;
           if(hold== 0)

           {
             gameload1(LoadingLetter,SleepFunction,i);
             if(i==count1)
             /*
              this nested if statmant will make sure
              the the program pause at the end of the array
              so the user will see it and read it
             */
              {

                i +=1;

                sleep(2);
                gameload1(LoadingLetter,SleepFunction,i);
              }
           }
           else if(hold ==1)
            {
              gameload2(LoadingStar,SleepFunction,i);
            }


         }
         system(OSWindows);
         //system(OSLinux);
     }
 return 0;
}
