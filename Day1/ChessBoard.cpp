#include<iostream>
using namespace std;
const char* determine_color(const char* s)
{
  int x = s[0] - 'a' + 1;
  int y = s[1] - '0';
  if((x+y) % 2 == 0)
  {
    return "black";
  } 
  else
  {
    return "white";
  }
  return NULL;
}
int main()
{
  char s[256];
  scanf("%s",s);
  // const char* result = determine_color("a1");
  const char* result = determine_color("z4");
  cout<<result<<endl;
}
