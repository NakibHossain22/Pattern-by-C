#include<stdio.h>
int main()
{
  int n,r,col;
  scanf("%d",&n);
  for(r=1; r<=n; r++)
  {
    for(col=1; col<=r; col++)
    {
      printf("%d ",col);
    }
    printf("\n");
  }

  return 0;
}