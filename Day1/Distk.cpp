#include<iostream>
using namespace std;
int main()
{
  int size;
  cin>>size;
  int n=0;
  char *arr = new char[size];
  char *c = new char[26];
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  int k;
  cin>>k;
  int count[26] = {0};
  for(int i=0;i<size;i++)
  {
    count[arr[i]-'a']++;
  }
  for(int i=0;i<26;i++)
  {
    if(count[i] == 1)
    {
      c[n] = i + 'a';
      n++;

    }
  }
  cout<<c[k-1];
}