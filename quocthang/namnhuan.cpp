#include<iostream>
using namespace std;
main()
{
    int th,n;

    do
    {
        cout<<"Nhap vao thang va nam can kiem tra"<<endl;
        cout<<"Phai nhap th be hon 12"<<endl;
        cin>>th>>n;

    }
    while(th>12);
    switch(th)
    {
    case 1:
        cout<<"Thang nay` co'31 ngay`";
        break;
    case 3:
        cout<<"Thang nay` co'31 ngay`";
        break;
    case 5:
        cout<<"Thang nay` co'31 ngay`";
        break;
    case 7:
        cout<<"Thang nay` co'31 ngay`";
        break;
    case 8:
        cout<<"Thang nay` co'31 ngay`";
        break;
    case 10:
        cout<<"Thang nay` co'31 ngay`";
        break;
    case 12:
        cout<<"Thang nay` co'31 ngay`";
        break;
    case 2:
        if ((n%4==0 && n%100!=0)||n%400==0)
        cout<<"Thang co'29 ngay";
        else
            cout<<"Thang co'28 ngay";
    default:
        cout<<"30 ngay";
        break;
    }
}
