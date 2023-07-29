#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
#include<windows.h>
#include<string.h>
#include<cstring>
#include<conio.h>
#include "entrance.h"
#include "mainmenu.h"
#include "get_information.h"
#include "feedback.h"
#include "set_workout_schedule.h"
#include "set_own_diet.h"
#include "view_workout_schedule.h"
#include "expert_diet.h"
using namespace std;
struct execise{

         float plank = 1;
         int bsp=4;
         int lte=3;
         int bp=5;
         int bc=2;
         int freq=1;
         string ex[5][6]{{"shoulder ","plank","barbell standing press","lying tricep extension","bench press","barbell curl"}
         ,{"chest ","cobra stretch","inclined press","Dumbbell pull over","wide push ups","chest press"}
         ,{"abdomen ","side plank","mountain climber","leg raise","russian twist","sit-ups"},
         {"lower body ","jumping jacks","barbell squats","calf raise","leg raise","leg extension"}};



    }exr;
void f(string);
void i(string);
void s(string);
void strength();
void q(char);
void weight_loss();
void cardio();
int main () {

    naruto:
    int luffy;
    char d;
    system("cls");
    cout << "PLEASE SELECT THE KIND OF WORKOUT PLAN?\n1 for Weight Loss : 2 for Strength Building : 3 for Cardiovascular\n";
    cin >> luffy;
    system("cls");
    if(luffy == 1){
weight_loss();

            cout << "Would you like to continue?: 'Y' for Yes , 'N' for NO \n";
cin >> d;
cout << "\n\n";

    if(d == 'Y' || d == 'y'){
    goto naruto;
}

    }else if(luffy == 2){
    strength();

    goto naruto;

    }

    else if(luffy == 3){
        cardio();
        goto naruto;
    }

return 0;
}
void i(string y){

        ifstream file1("help1.txt");

            while(file1){

                getline(file1, y);
                cout << y<< "\n";
}
}
void f(string x){
 ifstream file("help.txt");

        while(file){

                getline(file, x);
                cout << x<<"\n";
}
}
void s(string z){

 ifstream file2("help2.txt");


        while(file2){

                getline(file2, z);
                cout << z<<"\n";
}}
void q(char){
  cout << "\nYou should try avoiding foods with high fat content like 'FRENCH FRIES' 'SUGARY DRINKS' 'CANDY BARS'\n";
            cout<< "Workouts done during the morning are more ideal for losing weight but late workouts tend to give you more energy\n";
            cout << "You should never do a workout immediately after eating. It may cause cramping, bloating and nausea\n\n";

}
void weight_loss(){



    char a,b,c;
    string m;
    cout << "Do you want FAST, INTERMEDIATE or SLOW weight loss instructions? \n\n";
    cout << "F for Fast Weight Loss: I for Intermediate Weight Loss: S for Slow Weight Loss\n";

zoro:
    cin >> a;
    system("cls");
    if (a == 'i' || a == 'I'){
        i(m);
    }else if(a == 'f' || a == 'F'){
        f(m);
    }else if(a == 's' || a == 'S'){
        s(m);
    }else{
        cout << "PLEASE ENTER A VALID INPUT: ";
goto zoro;
    }
    cout << "Would you like more tips on dieting and timing?: 'Y' for Yes , 'N' for NO \n";
        cin >> b;
        system("cls");
        if(b == 'y' || b == 'Y'){
              q(c);
              cout << "Thank you for choosing us! ... ";
        }
        else{
            cout << "Thank you for choosing us! ... ";
        }




}
void strength(){
    beg:
fstream myfile("myfile.txt");
int num=1;
int type;
   system("cls");
  cout<<" Select the type of strength exercise you want to participate: \n 1. shoulder \n 2. arm \n 3. back \n 4. lower body \n 5. full body\n press 0 to exit from this work out plan"<<endl;

  cin>>type;
  if(type==0){

  }
  else{


           int co= type;
         for(int j=0;j<num;j++){
            system("cls");
        cout<<" Available strength exercises for "<<exr.ex[co-1][0]<< "\n\n"<<exr.ex[co-1][1]<<endl<<exr.ex[co-1][2]<<endl<<exr.ex[co-1][3]<<endl<<exr.ex[co-1][4]<<endl<<exr.ex[co-1][5]<<endl<<endl;
         co++;

         }
    for(int day=1; day<30; day++){

if(type==5){
    num=4;
    type=1;
    }
system("cls");
       for(int j= 0;j<num;j++){

    cout<<exr.ex[type-1][0]<<"strength exercises for day: "<<day<<endl<<endl;

    cout<<left<<setw(30)<<"Exercise number"<<left<<setw(30)<<"Name"<<left<<setw(40)<<"Repetition(duration in minutes)"<<left<<setw(30)<<"Frequency"<<endl;
    cout<<left<<setw(30)<<1<<left<<setw(30)<<exr.ex[type-1][1]<<left<<setw(40)<<exr.plank<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    cout<<left<<setw(30)<<2<<left<<setw(30)<<exr.ex[type-1][2]<<left<<setw(40)<<exr.bsp<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    cout<<left<<setw(30)<<3<<left<<setw(30)<<exr.ex[type-1][3]<<left<<setw(40)<<exr.lte<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    cout<<left<<setw(30)<<4<<left<<setw(30)<<exr.ex[type-1][4]<<left<<setw(40)<<exr.bp<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    cout<<left<<setw(30)<<5<<left<<setw(30)<<exr.ex[type-1][5]<<left<<setw(40)<<exr.bc<<left<<setw(30)<<exr.freq<<setw(30)<<endl<<endl;


    myfile<<exr.ex[type-1][0]<<"strength exercises for day: "<<day<<endl<<endl;

    myfile<<left<<setw(30)<<"Exercise number"<<left<<setw(30)<<"Name"<<left<<setw(40)<<"Repetition(duration in minutes)"<<left<<setw(30)<<"Frequency"<<endl;
    myfile<<left<<setw(30)<<1<<left<<setw(30)<<exr.ex[type-1][1]<<left<<setw(40)<<exr.plank<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    myfile<<left<<setw(30)<<2<<left<<setw(30)<<exr.ex[type-1][2]<<left<<setw(40)<<exr.bsp<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    myfile<<left<<setw(30)<<3<<left<<setw(30)<<exr.ex[type-1][3]<<left<<setw(40)<<exr.lte<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    myfile<<left<<setw(30)<<4<<left<<setw(30)<<exr.ex[type-1][4]<<left<<setw(40)<<exr.bp<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    myfile<<left<<setw(30)<<5<<left<<setw(30)<<exr.ex[type-1][5]<<left<<setw(40)<<exr.bc<<left<<setw(30)<<exr.freq<<setw(30)<<endl;



    if(num>1)
     type++;


       }
    int counter;

    cout << "\n\nif you want to increase the intensity of the exercise for the next day\n Enter \n1 for a low \n2 for a medium and \n3 for a high increase \n press 0 for no change "<<endl;
    cin>> counter;


     if(counter==1){
         exr.plank += 0.25;
         exr.bsp+=2;
         exr.lte+=2;
         exr.bp+=3;
         exr.bc+=1;
         if(exr.freq<10)
          exr.freq+=1;

    }
  else if(counter==2){
         exr.plank += 0.5;
         exr.bsp+=4;
         exr.lte+=3;
         exr.bp+=5;
         exr.bc+=2;
       if(exr.freq<10)
        exr.freq +=2;

    }

    else if(counter==3){
         exr.plank += 1;
         exr.bsp+=7;
         exr.lte+=6;
         exr.bp+=7;
         exr.bc+=5;
         if(exr.freq<10)
         exr.freq+=3;
    }
   int ter;
   system("cls");
 cout<< "if you want to terminate enter 0, to display the previous data enter 1, or press another number to continue"<<endl;

     cin>>ter;
     if(ter==0){
        goto beg;
    }
    if(ter==1){
        string y;
            while(myfile){

                getline(myfile,y);
                cout << y<< "\n";
    }
    }
    }}}

    void cardio(){
 display();

    int navigation ,x, y, personal_work = 0, personal_diet =0, expert_work = 0, expert_diet =0;
    mainentrance:
    navigation = menu();

if(navigation == 1)
   {
         system("cls");
         cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
         cout << "\t\t\t\t\t\t\t<0> Go back         " << endl << endl;
         cout << "\t\t\t\t\t\t\t<1> Set personal workout schedule " << endl << endl;
         cout << "\t\t\t\t\t\t\t<2> Set personal diet schedule      " << endl << endl;
         cout << "\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
         cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
         cin >> y;
         if(y == 0)
         {
             goto mainentrance;


         }

         else if(y==1)
         {
              ++personal_work;


             if(get_time()==0)
             {
                 goto mainentrance;
             }


         }

         else if(y==2)
         {
             ++personal_diet;

            int z=   get_diet();


               if (z== 0)
       {
           goto mainentrance;
       }

         }

         else
         {
             cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
        cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
        getch();
        goto mainentrance;
         }








   }


   else if(navigation ==2)
   {


       system("cls");
         cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
         cout << "\t\t\t\t\t\t\t<0> Go back         " << endl << endl;
         cout << "\t\t\t\t\t\t\t<1> Set schedule to expert workout schedule " << endl << endl;
         cout << "\t\t\t\t\t\t\t<2> Set schedule to expert diet schedule      " << endl << endl;
         cout << "\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
         cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
         cin >> y;
         if(y == 0)
         {
             goto mainentrance;


         }

         else if(y==1)
         {
             expert_work++;
             system("cls");
              cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Your workout schedule has been successfully set to expert mode      " << endl << endl;
              cout << "\t\t\t\t\t\t\t Press any key to continue      " << endl << endl;

              getch();
               goto mainentrance;

         }

         else if(y==2)
         {
             expert_diet++;

              system("cls");
              cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Your diet schedule has been successfully set to expert mode      " << endl << endl;
                cout << "\t\t\t\t\t\t\t Press any key to continue      " << endl << endl;
              getch();

               goto mainentrance;


         }

         else
         {
             cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
        cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
        getch();
        goto mainentrance;
         }










   }



    else if(navigation ==3)
   {


       if(personal_work==1 &&personal_diet==1)
       {
              show_time();
              view_diet();
              getch();
               goto mainentrance;

       }

       else if(personal_work==1 &&expert_diet==1)
       {
           show_time();
           expertdiet();
            getch();
               goto mainentrance;
       }
       else if(expert_work==1 &&expert_diet==1)

       {
           expert_workout();
           expertdiet();
            getch();
               goto mainentrance;
       }

       else{
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tIncomplete Input" << endl;
        cout << "\t\t\t\t\t\t\t\t\tPress any key to go back and fill your schedules correctly ...";
        getch();
        goto mainentrance;

       }
   }
    else if(navigation ==4)
   {
        system("cls");
       x =  get_info();
       if (x == 0)
       {
           goto mainentrance;
       }
   }
    else if(navigation ==5)
   {
         system("cls");
       x =  get_feedback();
       if (x == 0)
       {
           goto mainentrance;
       }

   }
    else if(navigation ==6)
    {

    }
   else
   {
        system("cls");
        system("cls");
        cout << "\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
        system("cls");
        cout << "\t\t\t\tt\t\t\tPress any key to choose another option ...";
        getch();
        goto mainentrance;
   }




    }

