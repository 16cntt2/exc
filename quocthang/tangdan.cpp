#include <iostream>
using namespace std;
int main()
{
	float a,b,c,phu;
	cout<<"nhap a=";
	cin>>a;
	cout<<"nhap b=";
	cin>>b;
	cout<<"nhap c=";
	cin>>c;
	if(a>b)
	{
		phu=a;
		a=b;
		b=phu;
	}
	if(a>c)
	{
		phu=a;
		a=c;
		c=phu;
	}
	if(b>c)
	{
		phu=b;
		b=c;
		c=phu;
	}
	cout<<"so thu tu tang dan:  "<<a<<" "<<b<<" "<<c;
}
