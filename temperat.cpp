#include<stdio.h>
#include<iostream>
using namespace std;

int tempertrasnlate(double a)
{
	double c;
	c=5*(a-32)/9;
	return c;
}

int main()
{

	double a;
	cout<<"请输入华氏温度"<<endl;
	cin>>a;
	cout<<"对应的摄氏温度是:"<<tempertrasnlate(a)<<endl;
	system("pause");
}
