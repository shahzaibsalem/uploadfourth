#include<iostream>
using namespace std;
void add(int number1,int number2);
void multi(int number1,int number2);
void subtraction(int number1,int number2);
void divide(int number1,int number2);
main()
{
int number1;
int number2; 
char operation;
cout<<"entr numbr 1:";
cin>>number1;
cout<<"entr numbr 2:";
cin>>number2;
cout<<"entr operation";
cin>>operation;
add(number1,number2);
subtraction(number1,number2);
divide(number1,number2);
multi(number1,number2);

}
     
void add(int number1,int number2)
  {
  	char operation;
  	if(operation=='+'){
  		
int sum;

sum=number1+number2;
cout<<"sum is:"<<sum;}

   }
void multi(int number1,int number2)
  {
  	char operation;
  	if(operation=='*'){
  		
     int multiply;
     multiply=number1*number2;
     cout<<"multiply is:"<<multiply;}
  }
void subtraction(int number1,int number2)
{
	    char operation;
    	if(operation=='-'){
        int sub;
        sub=number1-number2;
        cout<<"sub is:"<<sub;}
}
void divide(int number1,int number2)
{

		if(operation=='/')
		{
				char operation;
       int div;
       div=number1/number2;
       cout<<"div is:"<<div;}
}
