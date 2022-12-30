#include<iostream>
using namespace std;
void iseven(int number);
main() 
{
	
int number;
cout<<"entr the number:";
cin>>number;
 iseven( number);
 cout<<endl;
}
    void iseven(int number) 
{
    
     
      if(number%2==0) 
	  {
	 
      cout<<"number is even";
      }
    
      if(number%2!=0)  
     {
     
      cout<<"number is odd";
     }
     
}
