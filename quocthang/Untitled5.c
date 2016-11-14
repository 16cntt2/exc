#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("\nNhap vao mot so nguyen duong:");
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2;i<=n;i++)
    {
                     while(n%i==0)
                     {
                                  if(n==i)
                                  printf("%d",i);
                                  else printf("%d*",i);
                                  n=n/i;

                      }

     }
     getch();
}

