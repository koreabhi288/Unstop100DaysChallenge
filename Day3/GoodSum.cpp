#include<iostream>
using namespace std;
int main()
{
  int arr[] = {4,2,2,3,-6};
  int size = sizeof(arr)/sizeof(arr[0]);
  int sum = 0;
  for(int i=0;i<size-1;i++)
  {
    if(arr[i]>arr[i+1])
    {
      sum += arr[i];
    }
  }
}