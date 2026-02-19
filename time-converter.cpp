/* Q1. Time Converter
   Convert seconds to the HH:MM:SS format or vice versa.
*/

//header file
#include<iostream>
using namespace std;

//class
class TimeConverter{
    public:   //Access specifier
       
       int hours,minutes,seconds,totalSeconds;   //attributes

       //Function to convert seconds to HH:MM:SS
       void secondsToHours(){
           //heading
           cout<<endl<<"-----FROM SECONDS TO HH:MM:SS-----"<<endl<<endl;
           cout<<"Enter Total Seconds : ";    
           cin>>totalSeconds;     //total seconds input

           //conversion
           hours=totalSeconds/3600;
           minutes=(totalSeconds % 3600) / 60;
           seconds=(totalSeconds % 3600) % 60;
           totalSeconds=(hours*360) + (minutes*60) + seconds;

           //Output
           cout<<endl<<"----------- Conversion -----------"<<endl;
           cout<<"       HH:MM:SS -> "<<hours<<":"<<minutes<<":"<<seconds<<"       "<<endl;
           cout<<"----------------------------------"<<endl<<endl;
       }

       //Function to convert HH:MM:SS to seconds
       void hoursToSeconds(){
           //heading
           cout<<endl<<"----- FROM HH:MM:SS TO SECONDS -----"<<endl<<endl;
           cout<<"Enter Hours : ";    
           cin>>hours;     //hour input
           cout<<"Enter Minutes : ";    
           cin>>minutes;     //minute input
           cout<<"Enter Seconds : ";    
           cin>>seconds;    //seconds input

           //conversion
           totalSeconds=(hours*3600) + (minutes*60) + seconds;

           //Output
           cout<<endl<<"------------ Conversion ------------"<<endl;
           cout<<"       Total Seconds : "<<totalSeconds<<"       "<<endl;
           cout<<"------------------------------------"<<endl<<endl;
       }
};

//main function
int main(){
    //Object
    TimeConverter obj;
    //variable
    int choice;

    //heading
    cout<<"==================================="<<endl;
    cout<<"           TIME CONVERTER          "<<endl;
    cout<<"==================================="<<endl<<endl;

    //do while loop for choice
    do{
        cout<<"Press 1 : From Seconds to HH:MM:SS"<<endl;
        cout<<"Press 2 : From HH:MM:SS to Seconds"<<endl;
        cout<<"Press 3 : Exit"<<endl<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        //switch case to match choice
        switch(choice){
            case 1:
            obj.secondsToHours();
            break;

            case 2:
            obj.hoursToSeconds();
            break;

            case 3:
            cout<<"============== EXIT =============="<<endl;
            break;

            default:
            cout<<endl<<"Enter a valid choice!"<<endl<<endl;
        }
    }
    while(choice!=3);

    return 0;
}