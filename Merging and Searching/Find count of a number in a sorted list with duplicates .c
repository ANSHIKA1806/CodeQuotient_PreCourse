#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int T,N,K,A[1000],count=0;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
       printf("\n");
       count=0;
       scanf("%d %d",&N,&K);
       for(int j=0;j<N;j++)
       {
          scanf("%d",&A[j]);
       }
       for(int j=0;j<N;j++)
       {
          if(A[j]==K)
          {
            count=count+1;
          }
       }
       printf("%d",count);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
