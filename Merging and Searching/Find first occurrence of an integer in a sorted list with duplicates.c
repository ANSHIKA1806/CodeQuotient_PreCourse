#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int T,N,K,A[1000],count;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
       count=0;
       printf("\n");
       scanf("%d %d",&N,&K);
       for(int j=0;j<N;j++)
       {
          scanf("%d",&A[j]);
       }
       for(int j=0;j<N;j++)
       {
          if(A[j]==K)
          {
            count=0;
            printf("%d",j);
            break;
          }
          else{
            count=1;
          }
       }
       if(count==1)
       {
         printf("-1");
       }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
