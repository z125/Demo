#include<stdio>
#include<iostream>
using namespace std;
int Pownumber(int x,int y)
{
	int i=y;
	int j;
	if(i>1)
	{
		j=j*Pownumber(x,y-1)
	}
	else
	{
		j=x;
	}
	return j;
}

int main()
{
	int a;
	int b;
	cout<<"ÇëÊäÈëxºÍy"<<endl;
	cin>>a>>b;
	cout<<Pownumber(a,b)<<endl;
}
