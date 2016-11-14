#include<iostream>
#include<math.h>
using namespace std;
main ()
{
  float a,b,c,S,p;
  cout << "nhap vao do dai canh tam giac"<<endl;
  cin>> a;
   cout << "nhap vao do dai canh tam giac"<<endl;
  cin>> b;
   cout << "nhap vao do dai canh tam giac"<<endl;
  cin>> c;
  p=(a+b+c)/2.0;
  S=sqrt(p*(p-a)*(p-b)*(p-c));
  cout<<"Dien tich cua tam giac la"<<  S;
}
