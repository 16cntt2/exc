#include<iostream>
using namespace std;
main()
{
    float n,sum;
    sum=0;
    for (n=2; n<=10; n++)
        sum=sum+1/n;

    cout<<"Result = "<<sum<<endl;
}
