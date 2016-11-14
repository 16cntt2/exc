#include<iostream>
#include<string>
using namespace std;
void xuat(float d);
float diemtb(float t, float v);
main()
{   float kq;

    float t;
    float v;
    cout<<"Nhap ho ten"<<endl;
    string ht;
    getline(cin,ht);
    cout<<"Nhap diem toan"<<endl;
    cin>>t;
    cout<<"Nhap diem van"<<endl;
    cin>>v;
    cout<<"===================================="<<endl;
    cout<<"Sinh vien:"<<ht<<endl;
    cout<<"Diem toan la:"<<t<<endl;
    cout<<"Diem van la:"<<v<<endl;
    xuat( kq=diemtb(t,v));
    return 0;
}
float diemtb(float t, float v)
{
    float dtb;
    dtb=(t+v)/2;
    return(dtb);
}
void xuat(float d)
{
    cout<<"==> Diem trung binh la: "<<d;
}
