#include<iostream>
using namespace std;
void totalamount(string day , int amount);
main()
{
int amount;
string day;
cout<<"entr the amount:";
cin>>amount;
cout<<"entr the day:";
cin>>day;
totalamount(day , amount);
cout<<endl;
}
    void totalamount(string day , int amount)
{
   
   if(day =="sunday")
   
   {
   	int  total_amount;
    total_amount=amount-amount*0.1;
  cout<<"net amount is:"<<total_amount; 
    } 
   
   if(day!="sunday")
   {
   	
   cout<<"net amount is"<< amount;
   }
 }  
