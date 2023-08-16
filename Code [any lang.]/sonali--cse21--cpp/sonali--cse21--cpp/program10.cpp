#include <stdio.h>
int main()
 {
  int a[10][10],transpose[10][10],i,j, r, c;
  printf("Enter number of rows and columns respectively: ");
  scanf("%d %d", &r, &c);

  printf("\nEnter matrix elements:\n");
  for (i = 0; i < r; i++)
  {
  for (j = 0; j < c; j++) 
  {
    scanf("%d", &a[i][j]);
  }


  }
  printf("\ngiven matrix: \n");
  for ( i = 0; i < r; ++i)
  {
  for  (j = 0; j < c; ++j) {
    printf("%d\t", a[i][j]);
  }
    printf("\n");}

  printf("\nTranspose:\n");
  for ( i = 0; i < r; ++i)

  for  (j = 0; j < c; ++j) 
  {
    transpose[j][i] = a[i][j];
  }
  for (i = 0; i < c; ++i){
  for (j = 0; j < r; ++j) {
    printf("%d\t", transpose[i][j]);}
    printf("\n");
  }
  return 0;
}