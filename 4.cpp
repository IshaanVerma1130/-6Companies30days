#include <bits/stdc++.h>
using namespace std;

string encode(string src)
{
  //Your code here
  int srcSize = src.size();
  string ans = "";
  int i = 0;
  int count = 1;

  while (i < srcSize - 1)
  {
    if (src[i] == src[i + 1])
      count++;
    else
    {
      ans += src[i] + to_string(count);
      count = 1;
    }
    i++;
  }

  ans += src[i] + to_string(count);
  return ans;
}