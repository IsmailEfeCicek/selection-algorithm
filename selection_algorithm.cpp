#include<conio.h>
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(0,"Turkish");
int a[10];
int i,j,yd;
for (i=0; i<=9; i++)
{
printf("%d . elemanýn deðerini girin: ",i+1);scanf("%d",&a[i]);
}
for (i=0; i<=8; i++){
    for (j=i+1;j<=9;j++)
      if(a[i]>a[j])
       {yd=a[i];a[i]=a[j];a[j]=yd;}}
    for (i=0; i<=9; i++)
    {printf("%d . elemanýn deðeri = %d\n", i+1, a[i]);}
getch();
}
