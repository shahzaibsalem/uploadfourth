#include<iostream>
using namespace std;
void ifpass(int marks);
main()
{

    int marks;
     while(true)
    {cout<<"entr marks:";
	   cin>>marks;
    ifpass( marks);}
     }

      void ifpass(int marks)
      {
        if (marks > 50 ){
        cout<<"you have passed the quiz";
         }
         if ( marks==50){
         cout<<"your marks are 50";
         }
  
       if ( marks<50){

        cout<<"your marks are less than 50";
        }
  
}
