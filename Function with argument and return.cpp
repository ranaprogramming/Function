
#include <iostream> 
 #include<conio.h>
#include<stdlib.h>

using namespace std; 
string num(int n);
int main(){
int number;
cout<<"Enter a number =";
cin>>number;
cout<<"Result\n" <<num(number);
getch();
return(0);
}
string num ( int number)
{
if ( number %2==0)
{
return "Number is Even  ";}

else {
return "Number is Odd  ";}
}
