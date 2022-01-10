#include <bits/stdc++.h>
using namespace std;

int lastPosition(int n, int m, int k)
{
  if (m + k < n)
    return m + k - 1;

  int ans = ((m - n) + k - 1) % n;
  return ans == 0 ? n : ans;
}