#include <stdio.h>
int reverseNumber(int n)
{
    int res = 0;
    while (n > 0)
    {
        int rem = n % 10;
        res = res * 10 + rem;
        n = n / 10;
    }
    return res;
}
int main()
{
    int n;
  scanf("%d",&n);
    printf("%d", reverseNumber(n));
}
