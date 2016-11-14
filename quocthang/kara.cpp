#include<iostream>
using namespace std;
main()
{
    int giobd,giokt,thoigian,tien;
    cout<<"Nhap vao thoi gian bat dau"<<endl;
    cin>>giobd;
    cout<<"Nhap vao thoi gian ket thuc"<<endl;
    cin>>giokt;
    if (giobd>=8 && giokt<=24)
        thoigian=giokt-giobd;
    else
    {
        cout <<"Gio bat dau phai <=8 va >= 24"<<endl;
        return 0;
    }
    cout<<"Thoi gian hat Kara la: "<<thoigian<<endl;
    if (thoigian>3)
        tien=3*30000+(thoigian-3)*30000*0.7;
    else
        tien=thoigian*30000;
    if (giokt<=17)
        tien*=0.9;
    cout<< "Tinh tien: "<<tien<<endl;
}
