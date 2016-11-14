#include<iostream>
using namespace std;
main()
{   int TNCT;
    int canban=650000;
    float salary,hs;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(0);
    cout<<"Chuong trinh tinh luong cua nhan vien"<<endl;
    cout<<"Nhap vao so thang nhan vien do da lam`:";
    cin>>TNCT;
    if (TNCT < 12)
    hs=1.92;
    if (TNCT >=12 && TNCT<36 )
    hs=2.34;
    if (TNCT>=36 && TNCT <=60)
    hs=3;
    if (TNCT >60)
    hs=4.5;
    salary=hs*canban;
    cout<<"Luong cua nhan vien la  "<<salary<<endl;

}
