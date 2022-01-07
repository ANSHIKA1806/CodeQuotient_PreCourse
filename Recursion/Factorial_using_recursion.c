#include <stdio.h>
int factorial(int n){
  int i, ans = 1;
    for (i = 1; i <= n; i++)
        ans = ans * i;
    return ans;
  // Write your code here
}
