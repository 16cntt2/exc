#include<iostream>
using namespace std;
main()
{
 char ch;
 cout<<"Nhap vao 1 ki tu "<<endl;
 cin>>ch;
  if(ch>='a'&&ch<='z')
  cout<<"Chu thuong` chu' gi`"<<endl;
 else if (ch>='A'&&ch<='Z')
  cout<<"Chu hoa ro~ rang` day ma`"<<endl;
 else if (ch<='10'&&ch>='0')
  cout<<"Chac chan day la so roi"<<endl;
 else
  cout<<"Ki tu dac biet nao do :))";
 return 0;
}
