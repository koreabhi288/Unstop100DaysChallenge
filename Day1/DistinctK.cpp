#include<iostream>
using namespace std;

char Distinckt_K(char *arr,int size,int k)
{
   int count[26] = {0};
   int cnt = 0;
   char ch[26]; 

   for(int i=0;i<size;i++)
   {
      count[arr[i]-'a']++;
   }

   for(int i=0;i<26;i++)
   {
     if(count[i] == 1)
     {
        ch[cnt] = 'a'+i;
        cnt++;
     }
   }

   if(k > cnt)
   {
      return '0';
   }
   else
   {
      return ch[k-1];
   }
}

int main()
{
  int size,k;

  cout<<"enter size of array :";
  cin>>size;
  scanf("%d",&size);

  char *arr = new char[size];

  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }

  cout<<"enter k :";
  cin>>k;
  scanf("%d",&k);

  char ch = Distinckt_K(arr,size,k);
  cout<<ch;

  delete[] arr;
}