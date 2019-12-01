#include<stdio.h>
void main()
{
int a[10],i,beg,last,mid,flag,x;
beg=0;
last=10;
flag=0;

printf("enter array elements");
for(i=0;i<10;i++)
scanf("%d",&a[i]);

printf("enter element to be found");
scanf("%d",&x);

while(beg<last)
    {
    mid=(beg+last)/2;
    if(x>a[mid])
    beg=mid+1;

    else if(x<a[mid])
    {
    last=mid-1;
    }

    else if(x==a[mid])
    {
    printf("%d",x);
    flag=1;
    break;
    }
    }

    if(flag==0)
    {
    printf("element not found");
    }
}
