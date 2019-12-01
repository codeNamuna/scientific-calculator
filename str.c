#include<stdio.h>
void main()
{
    char str[50];
    int cap,small,d,sp,spp,i;
    cap=small=d=sp=spp=0;

    printf("enter the string");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
    if(str[i]>='A'&&str[i]<='Z')
    cap++;

    else if(str[i]>='a'&&str[i]<='z')
    small++;

    else if(str[i]>='0'&&str[i]<='9')
    d++;

    else if(str[i]=' ')
    sp++;

    else
    spp++;
    }

    printf("upper case %d",cap);
    printf("lower case %d",small);
    printf("digits %d",d);
    printf("spaces %d",sp);
    printf("special characters %d ",spp);
}
