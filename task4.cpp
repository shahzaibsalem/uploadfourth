#include<iostream>
using namespace std;
void eligible(int age);
main()
{
int age;
cout<<"entr your age:";
cin>>age;
eligible( age);
cout<<endl;
}

void eligible(int age)
{

     if (age>18)
    {
    cout<<"you are eligible";
     }
     if (age<18)
    {
     cout<"your are not eligble";
    }
}
