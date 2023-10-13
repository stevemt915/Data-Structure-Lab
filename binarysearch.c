#include<stdio.h>
void main()
{
int lim,ar[20],co=0,c=0,i,j,temp=0,r,m,l,check;
co=co+2;
printf("Enter the limit:");
scanf("%d",&lim);
printf("enter the no of elements");
for(i=0;i<lim;i++)
{
co++;
scanf("%d",&ar[i]);
co++;
}
//sort The Array
for(i=0;i<lim;i++)
{
co++;
 for(j=0;j<lim;j++)
 {
 co++;
  if(ar[i]>ar[j])
  {
  temp=ar[i];co++;
  ar[i]=ar[j];co++;
  ar[j]=temp;co++;
  }
  }
  }
//Searching the Element

printf("Enter the no to be searched:\n");
scanf("%d",&check);
 {
 for(i=0;i<lim;i++)
  {
  co++;
  if(ar[m]==check)
   {
   co++;
   printf("%d is present in the array:\n",check);
   co++;
   c=1;co++;
   break;
   }
   else if(check<ar[m])
   {
   r=m-1;co++;
   m=(l+r)/2;co++;
   }
   else if(check>ar[m])
   {
   l=m+1;co++;
   r=lim-1;co++;
   m=(l+r)/2;co++;
   }
   }
   if(c==0)
   {
   co++;
   printf("%d is not present in the array \n",check);
   co++;
   }
   printf("space complexity of the program is %d\n",5*4+4*lim);
   co++;co++;
   printf("Time complexityn of the program is %d\n",co); 
   }
   }
   

