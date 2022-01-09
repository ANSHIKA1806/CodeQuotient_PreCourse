#include <stdio.h>
int power(int num, int pow){
  int result=1;
  if(pow<0)
  {
    for(int i=1;i<=pow;i++)
      {
    	result= result*num;
      }
    return (-result);
  }
  else{
    for(int i=1;i<=pow;i++)
  {
    result= result*num;   
  }
  return result;
  }
}
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d",power(a,b));
  return 0;
}
