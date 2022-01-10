#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<string>> Anagrams(vector<string> &string_list)
  {
    //code here
    unordered_map<string, vector<string>> mp;
    vector<vector<string>> vec;

    for (string i : string_list)
    {
      string txt = i;
      sort(txt.begin(), txt.end());

      mp[txt].push_back(i);
    }

    for (auto i : mp)
    {
      vec.push_back(i.second);
    }

    return vec;
  }
};