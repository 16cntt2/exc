#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()

{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    int a,b,c;
    float S;
    cout << "Day lon la: ";
    cin>>a;
    cout<<"Day nho la: ";
    cin>>b;
    cout<< "Chieu cao la: ";
    cin>>c;
     S =((a+b)*c)/2;
     cout<< " Dien tich hinh thang la: " << S;
    return 0;
}
