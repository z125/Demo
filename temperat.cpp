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
	cout<<"�����뻪���¶�"<<endl;
	cin>>a;
	cout<<"��Ӧ�������¶���:"<<tempertrasnlate(a)<<endl;
	system("pause");
}
