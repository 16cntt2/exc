#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{

long i,a,b,BCNN;
char c;
rep:
cout<<"nhap vao so a:" <<endl;
cin>>a;
cout<<"nhap vao so b:" <<endl;
cin>>b;
for(i=b;i>=1;i--)
    {
   if(a%i==0)
        {
        if(b%i==0)
            {
                cout<<"UCLN cua 2 so a va b se la:"<<i<<endl;

                BCNN=(a*b)/i;
                cout<<"BCNN cua 2 so a va b la:"<<BCNN<<endl;

                break;
            }
        }
    }
                cout<< "NEU BAN MUN NHAP LAI NHAN 'y' CON KHONG NHAN PHIM BAT KY DE KET THUC"<<endl;
                cin>>c;
                if (c=='y')
                    {
                        system("cls");
                        goto rep;

                    }

}
