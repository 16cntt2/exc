#include<iostream>
using namespace std;
main ()
{
float score;
cout<<"Nhap vao diem cua ban"<<endl;
cin>>score;
 if (score < 4.5)
cout<<"ban la hoc sinh kem"<<endl;

 else if (score < 6.5)

 cout<<"ban la hoc sinh yeu"<<endl;
 else if (score < 8)

 cout<<"ban la hoc sinh trung binh"<<endl;
 else if (score <= 10)

 cout<<"ban la hoc sinh gioi"<<endl;
}
