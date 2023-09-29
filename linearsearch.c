//linear Search;
#include<stdio.h>
void main()
{
int a[30],check,lim,c=0,i,co=0;
co=co+2;
printf("Enter the limit:");
scanf("%d",&lim);co++;
printf("Enter the numbers:");
for(i=0;i<lim;i++)
{
co++;
scanf("%d",&a[i]);
co++;
}
//Searching Process;
printf("Enter the no to be searched:");
scanf("%d",&check);co++;
for(i=0;i<lim;i++)
{
co++;
if(a[i]==check)
{
co++;
printf("%d the no is present in the array:",check);
co++;
c=1;co++;
break;
}
co++;
}
co++;
if(c==0)
{
co++;
printf("%d is not present in the array:\n",check);
co++;
}
printf("Space Comp[lexity of the Program is=%d\n",5*4+4*lim);
co++;co++;
printf("Time Complexitiy of the Program is=%d\n",co);
}

 

