#include<stdio.h>
#include<iostream>
using namespace std;
 double factorial(double a,double b)
 {  double numerator=1;
    double denominator=1;/*�����ĸ*/
	double tempt=a-b+1;
	
    double j=a;
	while(j>=tempt)
	{
		numerator=numerator*j;
		j--;
	}
	
	while(b>0)
	{
		denominator=denominator*b;
		b--;
	}
	double c=numerator/denominator;
	return c;

 }

 int main()
 {
	 int x,y;
	 cout<<"������n��m"<<endl;
	 cin>>x>>y;
	 cout<<factorial(x,y)<<endl;
	system("pause");

 }