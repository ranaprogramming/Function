
#include <iostream> 
 #include<conio.h> 
#include<stdlib.h>

using namespace std;
void num();
int main(){
num();
return 0;
}
void num ()
{
int number;
cout<<"Enter a number =";
cin>>number;

if ( number %2==0)
{
cout<<number<<" \tis an Even number   ";
}
else {
cout<<number<<" \tis an  Odd number ";
}
}