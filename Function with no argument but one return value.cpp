
#include <iostream> 
 #include<conio.h> 
#include<stdlib.h>

using namespace std;
string num();
int main()
{
int number;

number=num();

if ( number%2==0)
{
cout<<number<<" \tis an Even number   ";
}
else {
cout<<number<<" \tis an  Odd number ";
}

return 0;
}
string num ()
{
int number;
cout<<"Enter a number =";
cin>>number;

return number;
}