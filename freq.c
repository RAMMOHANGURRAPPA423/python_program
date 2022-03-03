
#include<stdio.h>
int  main()
{
char a[20],ch;
int i,count=0;
printf("enter a string:\n");
scanf("%s",a);
printf("enter the character to determine the frequency:\n"); //l
scanf(" %c",&ch);
for(i=0;a[i]!='\0';i++) // h e l l o
{  
if(a[i]==ch)
count++;
}
printf("frequency of %s %d",a,count);
}
