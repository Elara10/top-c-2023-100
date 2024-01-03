//5. Write a Program to Check Whether a Character is a Vowel or Consonant

#include<iostream>
using namespace std;
int main()
{
   char ch='b';
   if(ch=='a' ||  ch=='e' || ch=='i' || ch=='o' || ch=='u')
   {
     cout<<ch<<" is a vowel ";
   }
   else 
    {
    cout<<ch<<" is a consonant";
   }
   return 0;
}