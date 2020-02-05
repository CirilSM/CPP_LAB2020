#include<stdio.h>
#include<time.h>
double m;
void main()
{
int a[100],n,i,key,flag=0;
clock_t t1,t2;
printf("Enter The Number Of Elements: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter The Element To Be Searched: ");
scanf("%d",& key);
t1=clock();
for(i=0;i<n;i++)
{
 if(a[i]==key)
 {
  flag=1;
  break;
 }
}
if(flag==1)
{
printf("Element is found");
}
else
{
printf("Element not found");
}
t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;
printf("\nTime:%f",m);
}
