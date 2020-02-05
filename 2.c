#include<stdio.h>
#include<time.h>
double m;
clock_t t1,t2;
void main()
{
t1=clock();
int i,n,s,found=0,a[100];
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the elements one by one");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("enter the search element");
 scanf("%d",&s);
for(i=0;i<n;i++)
 {
  if(a[i]==s)
   {
    found=1;
    printf("succesful search\n");
    break;
   }
 }
if(found==0)
  printf("unsuccesful search\n");
t2=clock();
m=((t2-t1)/(double) CLOCKS_PER_SEC);
printf("time taketn=%f",m);
FILE *fp;
fp=fopen("linear.dat","a");
fprintf(fp,"%d\t",n);
fprintf(fp,"%f\n",m);
fclose(fp);
}
  
