#include<iostream>
#include<vector>
using namespace std;
void find_flower_index(int n,int t,vector<int> arr, int result[2])
{
   int i=0;
   int j= n-1;
   while(j>i)
   {
     if(arr[i]+arr[j] == t)
     {
      result[0] = i;
      result[1] = j;
      return;
     }
     else if(arr[i]+arr[j]>t)
      {
        j--;
      }
     else
      {
        i++;
      }
     }
     return;
   }

using namespace std;
int main()
{
  int n;
  int t;
  cin>>n;
  cin>>t;
  vector<int> arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];

  }
  int result[2];
  find_flower_index(n,t,arr,result);
  cout<<result[0]<<" "<<result[1];

}