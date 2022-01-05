#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool canPair(vector<int> nums, int k)
  {
    // Code here.
    if (nums.size() % 2 != 0)
      return false;
    vector<int> Map(k, 0);
    for (int i = 0; i < nums.size(); i++)
      Map[nums[i] % k] += 1;
    if (Map[0] % 2 != 0)
      return false;
    for (int i = 1; i <= k / 2; i++)
    {
      if (i != k - i && Map[i] != Map[k - i])
        return false;
      if (i == k - i && Map[i] % 2 != 0)
        return false;
    }
    return true;
  }
};