//2. Write a Program to Find the Greatest of the Three Numbers.

#include<iostream>
using namespace std;
int main()
{
    int a=10,b=400,c=60;
    cout<<"The Greatest Among three Number is:";
    if(a>=b && a>=c)
    {
        cout<<a<<endl;
    }
    else if(b>=a && b>=c)
    {
        cout<<b<<endl;
    }
    else{
         cout<<c<<endl;
    }
}