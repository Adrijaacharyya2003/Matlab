#include<stdio.h>
int main(){
  int r,c,i,j,s=0,index=0,max=0;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d",&r,&c);

  //Taking the array from user
  int arr[r][c];
  printf("Enter the matrix:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("Enter arr[%d][%d]=",i,j);
      scanf("%d",&arr[i][j]);
    }
  }

  //Printing the array
  printf("The matrix is:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  //calculating the sum
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    s=s+arr[i][j];
    }
    if(s>max){
      max=s;
      index=i+1;
    }
    s=0;
  }
  printf("Row %d have the maximum sum",index); 
  return 0;
}

