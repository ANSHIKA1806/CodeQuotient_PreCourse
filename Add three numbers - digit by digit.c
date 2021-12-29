#include <stdio.h>
int addDigitByDigit(int a,int b,int c){
  int sum =a+b+c;
  return sum;
}
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int sum;
  sum=addDigitByDigit(a,b,c);
  printf("%d",sum);
  return 0;
}
