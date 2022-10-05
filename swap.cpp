#include<iostream>
using namespace std;

int main()
{
   int a, b;

   cout<<"Enter two integers to swap\n";
   cout<<"Enter a= ";
   cin>>a;
   cout<<"Enter b= ";
   cin>>b;

   a = a + b;   \\ ex. a=5,b=6  so,  here a = 5+6 = 11
   b = a - b;   \\  b= a-b i.e. b = 11-6 = 5
   a = a - b;   \\  a= a-b i.e. a = 11-5 = 6

   cout<<"\nAfter Swapping\n";
   cout<<"a = "<<a<<"\nb = "<<b;
   return 0;
}
