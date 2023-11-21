#include<stdio.h>
  void main(){
  int lim,ar[50],pos;
       printf("Enter the limit : \n");
       scanf("%d",&lim);
       printf("Enter the Elements :\n");
       for(int i=1;i<=lim;i++){
            scanf("%d",&ar[i]);
       }
       printf("Enter the position :\n");
       scanf("%d",&pos);
       int parent=pos/2;        //formula for parent node
       if(parent<1){
            printf("No Parent  \n");
       }
       else{
            printf("parent :%d \n",ar[parent]);
       }
       int lc=2*pos;           //formula for L.C 
      //Checking process of left child(L.c)//
       if(lc>lim){
               printf("There is no left child present :\n");
       }
       else{
               printf("Left Child :%d\n",ar[lc]);
       }
       int rc=(2*pos)+1;       //formula for R.C
       //Checkiing process of Right child(R.c)//
       if(rc>lim){
               printf("There is no right child present:\n");
       }
       else{
               printf("Right Child :%d\n",ar[rc]);
           }
      }
                      
       
          
       
       
  
  


