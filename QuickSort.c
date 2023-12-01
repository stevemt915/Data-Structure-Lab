//Name :steve M.Thomas
#include<stdio.h>
  void Quicksort(int ar[],int start,int end);
  void main(){
  
      int size;
      int ar[100];
      printf("Enter the size of the array  : \n");
      scanf("%d",&size);
      printf("Enter the elements of the array  :\n");
      for(int i=0;i<size;i++){
           scanf("%d",&ar[i]);
           }
      Quicksort(ar,0,size-1);
      
     //Printing the sorted Array
     printf("The sorted Array is  : \n");
     for(int i=0;i<size;i++){
          printf("%d\t",   ar[i] );
     }          
     printf("\n");
     }
     //Quick sort function
     void Quicksort(int ar[],int start,int end){
             int i,j,pivot,temp;
             if(start<end){
                i=start;
                pivot=start;
                j=end;
             while(i<j){
                 while(ar[i]<=ar[pivot]&&i<end){
                   i++;
                 }
                 while(ar[j]>ar[pivot]){
                   j--;
                 }
                 if(i<j){
                 temp=ar[i];
                 ar[i]=ar[j];
                 ar[j]=temp;
                 }
                 }
                 temp=ar[pivot];
                 ar[pivot]=ar[j];
                 ar[j]=temp;
                 Quicksort(ar,start,j-1);
                 Quicksort(ar,j+1,end);
                 }
                 }
