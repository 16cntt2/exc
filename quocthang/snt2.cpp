#include <stdio.h>

#include <conio.h>

 main()

{


    int i,j,n,dem;

    // Nhap n //

    printf("n = ");

    scanf("%d",&n);

    for(i=2;i<=n;i++)

    {

        dem = 0; // bạn chưa khởi tạo biến dem ở đầu vòng for

        for(j=1;j<=i;j++)

            if (i%j==0)

                dem++;

        if(dem==2)

            printf("%3d",i);

    }

}
