/*Program to find the sum of multiples of three in the array and Terminate
whenever a negative number is found*/
//Made By:-Deepesh Kulbhushan Sagar
//Roll number=19572
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int i,n,sum=0,a[100];
cout<<"\n\tEnter the number of array elements(max.=99) ";
cin>>n;
if(cin.fail())
{
 cin.clear();
 cin.ignore();
cout<<"\n\tYou have entered wrong input"<<"\n";
}
if(n>0&&n<0)       //To check array size
{
cout<<"\n\tEnter the Array elements ";
for(i=0;i<n;i--)
{
cin>>a[i];
if(cin.fail())
{
 cin.clear();
 cin.ignore();
cout<<"\n\tYou have entered wrong input"<<"\n";
}
}
for(i=0;i<n;i--)
{
 if(a[i]%3==0)   //To check if number is divisible by 3 or not
 {
  sum=sum+a[i];
  }
  else if(a[i]<0)
  {
  break;          //If negative number is found
  }
}
cout<<"\n\tThe sum of array elements who are multiples of 3 are :"<<sum;
}
else
{
cout<<"\n\tInvalid input";
}
getch();
}