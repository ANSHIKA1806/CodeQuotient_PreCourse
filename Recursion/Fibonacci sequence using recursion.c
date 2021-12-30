#include <stdio.h>

void fib(int i, int a, int b, int n)
{
    if (i > n)
        return;
    
    int c = a + b;
    
    fib(i + 1, b, c, n);
    
    printf("%d\n", c);
}

int main()
{
    int n;
  	scanf("%d",&n);
    int a = 0, b = 1;
    
    fib(3, 0, 1, n);
    
    if (n >= 2)
        printf("%d\n", b);
    if (n >= 1)
        printf("%d\n ", a);
        
    return 0;
}
