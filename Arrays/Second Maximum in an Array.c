#include <limits.h>
#include <stdio.h>
void printlargest(int arr[], int arr_size)
{
	int i, first, second;
	if (arr_size < 2) {
		printf(" Invalid Input ");
		return;
	}
	first = second = INT_MIN;
	for (i = 0; i < arr_size; i++) {
		if (arr[i] > first) {
			second = first;
			first = arr[i];
		}
      else if (arr[i] > second && arr[i] != first)
			second = arr[i];
	}
	if (second == INT_MIN)
		printf("0");
	else
		printf("%d",second);
}
int main()
{
  	int i;
	int arr[5];
  	for(i=0;i<=5;i++){
      scanf("%d",&arr[i]);
    }
	int n = sizeof(arr) / sizeof(arr[0]);
	printlargest(arr, n);
	return 0;
}
