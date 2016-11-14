#include<iostream>
#include<stdlib.h>

using namespace std;

main()
{
  float n,dem=0,tong=0;
   while(n!=9999)
    {
    system("cls");
    cout<<"nhap n=";
    cin>>n;
    if (n==9999)
        break;
    dem=dem+1;
    tong=tong+n;
    }
    cout<<"trung binh cong= "<<(tong)/dem;
   return 0;

}
