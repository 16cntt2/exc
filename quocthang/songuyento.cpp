#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
    int i,c;
    int data[100];
    fstream f,inp;
    inp.open("input.txt",ios::out|ios::app);
    f.open("output.txt",ios::in);
    int n;
    f>>n;
    for(  i=1;i<=n;i++)
       {
            c=0;
        for (int j=1;j<=i;j++)
        if (i%j==0)
        {
             c++;
        }
        if (c==2)
        {
            cout<<i<<" ";
            inp<<i<<endl;
        }
        }

    f.close();
}
