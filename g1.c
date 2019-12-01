#include<stdio.h>
int main()
{
char oper[100],ch=0;
float num[100];
int n,o,i,c;
n=o=0;
while(ch!='A')
{
 scanf("%f %c",&num[n],&ch);
 if(ch=='A')
 oper[o]='A';
 else
 oper[o++]=ch;
 n++;
}

i=0;
while(oper[i]!='A')
{
 ch=oper[i];
 if((ch=='*')||(ch=='/'))
 {
     if(ch=='*')
        num[i]*=num[i+1];
     else
        num[i]/=num[i+1];

     for(c=i+1;c<n;c++)
     num[c]=num[c+1];
     for(c=i;oper[c-1]!='A';c++)
     oper[c]=oper[c+1];

  n--;
 }
 else
 {
     i++;
 }
 }

i=0;

while(oper[i]!='A')
{
 ch=oper[i];
 if(ch=='+')
 num[i]+=num[i+1];
 else
 num[i]-=num[i+1];

 for(c=i+1;c<n;c++)
 num[c]=num[c+1];
 for(c=i;oper[c-1]!='A';c++)
 oper[c]=oper[c+1];
 n--;

}

for(c=0;c<n;c++)
printf("%f ",&num[c]);
getch();
return 0;

}
