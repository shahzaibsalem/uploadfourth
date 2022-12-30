#include<iostream>
using namespace std;
void check(int number1 , int number2);
main()
{
    int number1;
    int number2;
    cout<<"entr first number:";
    cin>>number1;
    cout<<"entr second number:";
    cin>>number2;
check( number1 , number2);
}
    void check(int number1 ,int number2)
{
     if(number1>number2)
    {
      cout<<"number 1 is greater";}

     
       if(number1<number2)
     {
        cout<<"number 1 is smaller";}
     
}
