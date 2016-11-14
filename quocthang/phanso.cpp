#include <iostream>
#include<stdlib.h>
using namespace std;
main(){
    double a, b, c, d;
    do{
        cout << "Nhap phan so a/b: "<<endl;
        cout<<"Khong duoc nhap mau(b) =0"<<endl;
        cin >> a >> b;
    }while (b == 0);
    do{
        cout << "Nhap phan so c/d: "<<endl;
        cout<<"Khong duoc nhap mau(d) = 0"<<endl;
        cin >> c >> d;
    }while (d == 0);
    cout << "Tong 2 phan so la: " << (a/b + c/d) << endl;
    cout << "Hieu 2 phan so la: " << (a/b - c/d) << endl;
    cout << "Tich 2 phan so la: " << (a/b * c/d) << endl;
    if(c != 0){
        cout << "Thuong 2 phan so la: " << ((a/b) / (c/d)) << endl;
    }else{
        cout << "Khong thuc thi duoc phep chia!" << endl;
    }

    return 0;
}
