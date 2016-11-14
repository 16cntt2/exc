#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
main()
{
    srand(time(0));
    int n,a,c;
    const int max_= 5;
        n = 1 + rand() % (10-1+1);

    cout<<"FunGame :v :v\nMay' da chon 1 so ngau nhien:)\nBan hay doan so ma` may' chon bang cach nhap tu ban phim.\nNhan Enter de bat dau."<<endl;
    system("pause");
    for (int i=max_;i>0;i--)
    {
		cout<<"\n So lan doan cua ban con: "<<i<<endl;
        cout<<"Moi ban doan so ma`may da~ chon: "<<endl;
        cin>>a;
        if (a==n)
        {
            cout<<"Ban da chon so: "<<a<<endl;
            cout<<"Chuc mung ban da may man dung"<<endl;
            break;
        }
        else
        {
            cout<<"Ban da chon so: "<<a<<endl;
            cout<<"Rat tiec ban da chon sai, hay chon lai"<<endl;
            cout<<"ENTER DE TIEP TUC NHAP LAI"<<endl;
            system("pause");
            system("cls");

        }


    }

}
