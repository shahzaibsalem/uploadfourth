#include<iostream>
using namespace std;
void check(int numbr1 , int numbr2);
main()
{

     int numbr1;
     int numbr2;
     cout<<"entr first number:";
     cin>>numbr1;
     cout<<"entr second number:";
     cin>>numbr2;
     check( numbr1 , numbr2);
     cout<<endl;
}
    void check(int numbr1 , int numbr2)
{
      if(numbr1>numbr2)
     {
      cout<<"number 1 is greater";
     }
       if(numbr1<numbr2)
     {
        cout<<"number 1 is smaller";
     }
}
