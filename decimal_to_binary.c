#include <stdio.h>
void decimalToBinary(int n)
{
  int binaryNum[32];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i++] = n % 2;
        n = n / 2;
    }
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int n;
        scanf("%d", &n);
        
        decimalToBinary(n);
        printf("\n");
    }
    
    return 0;
}
