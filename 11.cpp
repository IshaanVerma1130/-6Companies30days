#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int *findTwoElement(int *arr, int n)
  {
    static int res[2] = {-1, -1};
    for (int i = 0; i < n; i++)
      arr[arr[i] % (n + 1) - 1] += (n + 1);
    for (int i = 0; i < n; i++)
    {
      if (arr[i] < (n + 1))
        res[1] = i + 1;
      if (arr[i] > 2 * (n + 1))
        res[0] = i + 1;
    }
    return res;
  }
};