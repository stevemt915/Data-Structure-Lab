#include<stdio.h>
void main()
{
int lim,i;
printf("Enter the terms of the polynomial\n");
scanf("%d",&lim);
struct polynomial{
int coeff;
int exp;
}s2[lim];


for(int i=0;i<lim;i++){
printf("Enter the coefficient and exponent of the polynomial\n");
   scanf("%d%d",&s2[i].coeff,&s2[i].exp);
   }
   for(int i=0;i<lim;i++){
     if(i<lim-1){
        printf("%dX^%d + ",s2[i].coeff,s2[i].exp);
        }
        else{
        printf("%dX^%d\n",s2[i].coeff,s2[i].exp);
        }
     }
  }      
   
  
   
   
   

