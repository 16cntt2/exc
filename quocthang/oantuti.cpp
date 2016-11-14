#include<iostream>
using namespace std;
main()
{
    char input1,input2;
    cout <<"Cho Keo=K, Bua=B và Bao=O"<<endl;
    cout<< "Nguoi choi 1"<<endl;
    cin >>input1;
    cout<<"Nguoi choi 2"<<endl;
    cin >>input2;


    if (input1==input2)
    cout<<"Ket qua hue";
    else if (input1=='K'&&input2=='O')
            cout<<"Nguoi choi 1 thang"<<endl;
         else  (input1=='O'&&input2=='K');
            cout<<"Nguoi choi 2 thang"<<endl;
         if (input1=='K' && input2=='B' )
            cout<<"Nguoi choi 2 thang"<<endl;
         if (input1=='B' && input2=='K')
         cout<<"Nguoi choi 1 thang"<<endl;
    else if (input1 == 'O'&& input2=='B')
            cout<<"Nguoi choi 1 thang";



}
