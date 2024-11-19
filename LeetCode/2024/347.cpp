// Shahadat Osman
// Date: 19-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class myPair
{
public:
    int element, count;
    myPair(int element, int count)
    {
        this->element = element;
        this->count = count;
    }
};
class cmp
{
public:
    bool operator()(myPair a, myPair b)
    {
        if (a.count < b.count)
            return true;
        else
            return false;
    }
};
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> mp;
        for (int val : nums)
            mp[val]++;

        priority_queue<myPair, vector<myPair>, cmp> pq;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            myPair obj(it->first, it->second);
            pq.push(obj);
        }

        vector<int> vct;
        while (k--)
        {
            vct.push_back(pq.top().element);
            pq.pop();
        }
        return vct;
    }
};