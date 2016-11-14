#include <iostream>
using namespace std;

bool so_nguyen_to(int N);
 main()
{
    int N, i;

    do
    {
       cout<<" Nhap vao so N = ";
        cin>>N;
    }
    while(N <= 1);
    cout<<" Cac so nguyen to nho hon  :"<< N<<endl;
    for(i = 2; i <= N; i++)
    {
        if(so_nguyen_to(i))
            cout<<" "<<i;
    }

}

bool so_nguyen_to(int N)
{
    int i;

        for( i = 2; i < N; i++)
        {
            if(N % i == 0)
                return 0;
        }
        return 1;

}
