#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
main()
{   srand(time(0));
    int n,a,c;
    const int max_= 10;

        cout<<"Moi ban nhap an so hack nao~"<<endl;
        cin>>a;
        c=0;
        do
       {
        n = 1 + rand() % (100-1+1);

        if (a==n)
        {
            cout<<"May da chon so: "<<n<<endl;
            cout<<"Chuc mung may' da may man dung"<<endl;
        }
        else
        {
            cout<<"May da chon so: "<<n<<endl;
            cout<<"Rat tiec may` ngu qua, hay chon lai"<<endl;
            cout<<"Enter de tiep tuc cho may chon"<<endl;
            system("pause");
            system("cls");

        }

        c++;
        }
        while(c<=max_);


}
