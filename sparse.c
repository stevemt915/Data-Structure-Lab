//Sparse Matrix
#include<stdio.h>
void main()
{
int i,j,ar[i][j],count=1,k=1,row,col;
struct sparse{
int row;
int col;
int value;
}st[10];
printf("Enter the no rows and columns:\n");
scanf("%d%d",&row,&col);
printf("Enter the Sparse matrix:\n");
for(i=0;i<row;i++){
   for(j=0;j<col;j++){
   scanf("%d",&ar[i][j]);
   }
 }
for(i=0;i<row;i++){
   for(j=0;j<col;j++){
   if(ar[i][j]!=0)
     {
     st[k].row=i;
     st[k].col=j;
     st[k].value=ar[i][j];
     k++;count++;
     }
  }
}
st[0].row=row;
st[0].col=col;
st[0].value=count;
printf("\nThe Tuple representation is:\n");
printf("\nRow     col     value  \n");

for(i=0;i<k;i++){
printf("%d        %d          %d\n",st[i].row,st[i].col,st[i].value);
}
}
