#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
        float a,b,c;
        cout<<"Nhap vào so canh a : "<<endl;
        cin>>a;
        cout<<"Nhap vào so (thcc) b : "<<endl;
        cin>>b;
        cout<<"Nhap vào so (thcc) c : "<<endl;
        cin>>c;
        if ((a+b>c)&&(a+c>b)&&(b+c>a))
        {
            cout<<"Day la tam giac ";


        }
        else
		{
			cout<<"Day khong phai 3 canh tam giac";
            goto stop;
		}
        if ((a==b)&&(b==c)) cout<< " deu ";
            else
            {
                if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
                {
                    cout<<" vuong ";
                }
                if ((a==b)||(b==c)||(c==a))
                {
                    cout<<" can";
                }
            }
    stop:;
}
