#include <stdio.h>
int sum(int arr[], int n)
{
 int sum = 0; 
 for (int i = 0; i < n; i++)
 sum += arr[i];

 return sum;
}

int main()
{
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 11, 12, 13, 14, 15};
 int n = sizeof(arr) / sizeof(arr[0]);
 printf("Sum of given array is %d", sum(arr, n));
 return 0;
}