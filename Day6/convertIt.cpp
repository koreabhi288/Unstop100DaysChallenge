#include<iostream>
#include<vector>
using namespace std;
vector<int> modify_array(int n, vector<int> arr) 
{
  int max = 0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>max)
    {
      max = arr[i];
    }
    arr[i] = arr[i]+max;
    
  }
  return arr;
  

}
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];

  }
  vector<int> modified_arr = modify_array(n,arr);
  for(int i=0;i<modified_arr.size();i++)
  {
    cout << modified_arr[i] << " ";
  }


}