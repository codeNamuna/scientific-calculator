#include<stdio.h>
#define pi 3.142857
#define e 2.718035

float power(float x,int p)
{
 float c;

 if(p<0)
 x=1.0000/x;

 c=x;

 if(p==0)
 return 1.0000;

 else
 {
 for(int i=1;i<p;i++)
 c*=x;
 return c;
 }
 }

float fact(float num)
{
 float i;
 float fact=1.0000;
 if(num==0)
 return 1.000;
 else
 {
 for(i=1;i<=num;i++)
 fact*=i;
 return fact;
 }
 }

float modd(float x)
{
 if(x<0)
 x*=-1;
 return x;
 }

float decimalizer(float a)
{
 while(a>=1000)
 a-=1000;
 while(a>=100)
 a-=100;
 while(a>=1)
 a-=1;
 return a;
	 }

float expo(float x)
{
 int i;
 float sum;
 for(i=0;i<=50;i++)
 {
  sum+=power(x,i)/fact(i);
  }
 return sum;
 }

float ln(float x)
{
 float n=1;
 float sum=0;
 if(x<=0)
 {
  //************************************
  }
  else
  {
    for(n=1;n<=97;n+=2)
    {
     sum+=power(((x-1)/(x+1)),n)/n;
     }
    sum*=2;
   }
  return sum;
   }

float sqrut2(float x)
{
 int i,j,min,ptr,flag,dx,dbx;
 min=x;
 ptr=flag=0;
 for(i=0;i<=100;i++)
 {
  j=i*i;
  if(modd(x-j)<min)
  {
    min=modd(x-j);
    ptr=i;
   }
  if(x==j)
  {
   flag=1;
   ret=i;
   }
    }

 if(flag==0)
 {
  j=ptr;
  i=j*j;
  dx=x-i;
  dbx=1/(2*j);
  ret=dbx*dx;
  ret+=j;
    }
  return ret;
  }

/*float sqrut(float x)
{
 float i,j,flag,min,t,tm,dx,dbx;
 t=tm=0;
 flag=0;
 float ret;
 ifstream fin("rooti.dat");
 while(!fin.eof())
 {
  t=fin.tellg();
  fin>>i;
  fin>>j;
  if(t==0)
  {
   min=x-i;
   tm=t;
   }
  if(modd(x-i)<min)
  {
   min=modd(x-i);
   tm=t;
   }
  if(i==x)
  {
   flag=1;
   ret=j;
  }
 }
 fin.close();

 ifstream fin1("rooti.dat");

 if(flag==0)
 {
  fin1.seekg(tm);
  fin1>>i;
  fin1>>j;
  dx=x-i;
  dbx=1/(2*j);
  ret=dbx*dx;
  ret+=j;
		  }
 fin1.close();
 return ret;

}
*/
float sine(float x)
{
 float cur;
 int i,flag=0;
 cur=0.00;
 x*=pi/180.00;
 for(i=1;i<=15;i+=2,flag++)
 {
  cur+=power(-1,flag)*power(x,i)/fact(i);
  }
 return cur;
}

float cose(float x)
{
 float cur=0.00;
 int i,flag=0;
 x*=pi/180.00;
 for(i=0;i<=12;i+=2,flag++)
 {
  cur+=power(-1,flag)*power(x,i)/fact(i);
 }
 return cur;
}

float tane(float x)
{
 return (sine(x)/cose(x));
}

float invsine(float x)
{
 int t;
 float i,j,mult,addi;
 addi=0;
 if(x<=0.7)
 t=100;
 else
 t=2250;
 for(i=1;i<=t;i+=2)
 {
  mult=1;
  for(j=1;j<i;j+=2)
  {
   mult*=j/(j+1);
  }
  mult*=power(x,i)/i;
  addi+=mult;
   }
 addi*=180.00/pi;
 return addi;
}

float invcose(float x)
{
 float res;
 res=90.00-invsine(x);
 return res;
}

float invtane(float x)
{
 int mult,i,flag=0;
 float mod,sum=0.00;

 if(x<0)
  mod=x/(-1.0000);
 else
  mod=x;

 if(mod<1)
 {
  for(i=1;i<=9;i+=2,flag++)
   {
    if(flag%2==0)
    mult=1;
    else
    mult=-1;
    sum+=mult*power(x,i)/i;
    }
      }

 else
 {
  for(i=1;i<=9;i+=2,flag++)
  {
   if(flag%2==0)
   mult=-1;
   else
   mult=1;
   sum+=mult*power(x,-i)/i;
   }
  if(x>=1)
  sum+=pi/2;
  else
  sum-=pi/2;
  }

 sum*=180.00/pi;
 return sum;

}

float hsine(float x)
{
 float cur;
 int i;
 cur=0.00;
 for(i=1;i<=15;i+=2)
 {
  cur+=power(x,i)/fact(i);
  }
 return cur;
}

float hcose(float x)
{
 float cur=0.00;
 int i;
 for(i=0;i<=12;i+=2)
 {
  cur+=power(x,i)/fact(i);
 }
 return cur;
}

float htane(float x)
{
 return (hsine(x)/hcose(x));
}

float npr(float n, float r)
{
  float calc=1;
  if(((decimalizer(n)!=0.0)&&(decimalizer(r)!=0.0))||(n<r))
  {
   //**********************************************************
    }

  else
  {
   calc=fact(n)/fact(n-r);
   }
  return calc;
  }

float ncr(float n, float r)
{
  float calc=1;
  if(((decimalizer(n)!=0.0)&&(decimalizer(r)!=0.0))||(n<r))
  {
   //**********************************************************
    }

  else
  {
   calc=fact(n)/(fact(r)*fact(n-r));
   }
  return calc;
  }

int main()
{
 printf("%f",sqrut2(4));
 getch();
 return 0;
	  }

