#include<iostream>
#include<stdlib.h>
using namespace std;
//Hàm tìm ước chung lớn nhất của 2 số, với
// mọi cặp a,b không bao giờ chạy quá 4 lần lặp
int UCLN(int a,int b)
{
 while (b!=0)
 {
   int r=a%b;
   a=b;
   b=r;
 }
 return a;
}

//Sau đó tìm  bội chung nhỏ nhất của 2 số a,b đơn giản bởi công thức
// a*b/UCLN(a,b)

int BCNN(int a,int b)
{
 //Chú ý thực hiện phép chia trước để tránh việc tràn dữ liệu khi 2 số
 //a và b đủ lớn :D
 return a*(b/UCLN(a,b));
}

int main()
{
 int a,b;
 cout<<"Nhap a=";
 cin>>a;
 cout<<"Nhap b=";
 cin>>b;
 cout<<"UCLN("<<a<<","<<b<<")="<<UCLN(a,b)<<endl;
 cout<<"BCNN("<<a<<","<<b<<")="<<BCNN(a,b)<<endl;
 system("pause");
}
