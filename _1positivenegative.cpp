// 1. Write a C++ Program to Check Whether a Number is a Positive or Negative Number.
#include<iostream>
using namespace std;
int main()
{
    int num=100;
    if(num>=0)
    {
        cout<<num<<" is a positive number";
    }
    if(num<0)
    {
        cout<<num<<" is a negative number";
    }
    return 0;
}