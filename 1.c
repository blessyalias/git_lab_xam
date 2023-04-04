#include<stdio.h>
int main()
{
int i,j,n,temp,a[50];
printf("enter no: of values\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if(a[j]<a[j+1])
{
a[j]=temp;
a[j+1]=a[j];
temp=a[j+1];
}
}
printf("sorted elements are:");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}


