#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findPosition(int n, int m, int k)
  {
    // code here
    if (m <= n - k + 1)
      return m + k - 1;
    m = m - (n - k + 1);
    return (m % n == 0) ? n : (m % n);
  }
};