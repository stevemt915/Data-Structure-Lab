//Name: Steve M Thomas
//Description:Insertionsort
#include<stdio.h>
void main(){
       int i,j,temp,lim;
       printf("----------------------------\n");
       printf("Enter the Number of terms :\n");
       scanf("%d",&lim);
       int ar[100];
       printf("Enter the Elements :\n");
       for(i=0;i<lim;i++){
              scanf("%d",&ar[i]);
              }
           i=1;
       while(i<lim){
              j=i; 
             
       while(ar[j]<ar[j-1]){
       
              temp=ar[j];
              ar[j]=ar[j-1];
              ar[j-1]=temp;       
              j--;
              }
           i++;
        }
        printf("------------------------------\n");
        
       printf("The sorted array : \n");
       for(j=0;j<lim;j++){
              printf("%d\t",ar[j]);
              }
              printf("\n");
       } 
