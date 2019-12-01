#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
 clrscr();
 ofstream fout("rooti.dat");
 int i,j;
 float ch;
 for(i=0;i<=100;i++)
 {
  j=i*i;
  fout<<j<<" "<<i<<" ";
  }

 fout.close();
 ifstream fin("rooti.dat");
 cout<<"Enter the value to search: ";
 cin>>ch;
 clrscr();
 int flag=0;
 int t=0;
 while(!fin.eof())
 {
  t=fin.tellg();
  fin>>i;
  fin>>j;
  if(i==ch)
  {
   cout<<i<<" : "<<j;
   flag=1;
  }
  }
 if(flag==0)
 cout<<"not found!";
 fin.close();
 getch();
	   }