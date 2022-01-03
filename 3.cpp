#include <bits/stdc++.h>
using namespace std;

int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
{
  int i = 0;
  int j = 0;

  int count = 0;
  int prod = 1;

  while (j < n)
  {
    prod *= a[j];

    while (prod >= k && i < j)
    {
      prod /= a[i++];
    }

    if (prod < k)
      count += j - i + 1;

    j++;
  }

  return count;
}
