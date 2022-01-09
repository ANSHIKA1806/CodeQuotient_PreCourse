#include<iostream>
#include<cstdio>
#define ROWS 50
#define COLS 50
using namespace std;
void printSpiral(int a[ROWS][COLS], int r, int c)
{
  int i,j=0,k=0,m=r,n=c;
  while(j<m && k<n) {
    for(i=k;i<n;++i) {
      cout<<a[j][i]<<endl;
    }
    j++;
    for(i=j;i<m;++i) {
      cout<<a[i][n-1]<<endl;
    }
    n--;
    if(j<m) {
      for(i=n-1;i>=k;--i) {
        cout<<a[m-1][i]<<endl;
      }
      m--;
    }
    if(k<n) {
      for(i=m-1;i>=j;--i) {
        cout<<a[i][k]<<endl;
      }
      k++;
    }
  }
}

int main()
{
  int r, c;
  cin>>r>>c;
  int a[ROWS][COLS], i, j;
  for(i = 0; i < r; i++)
    for(j = 0; j < c; j++)
      cin>>a[i][j];
  printSpiral(a, r, c);
  return 0;
}
