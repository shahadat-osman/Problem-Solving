// Shahadat Osman
// Date: 08-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        int i = 0, j, circulr = 0, sqr = 0, sz = sandwiches.size();
        queue<int> q;
        for (int v : students)
        {
            q.push(v);
            if (v == 0)
                circulr++;
            else
                sqr++;
        }
        j = 0;
        while (true)
        {
            if (j >= sz)
                break;
            if (sandwiches[j] == 0 && circulr == 0)
                break;
            if (sandwiches[j] == 1 && sqr == 0)
                break;

            if (q.front() != sandwiches[j])
            {
                q.push(q.front());
                q.pop();
            }
            else if (q.front() == sandwiches[j])
            {
                if (q.front() == 0)
                    circulr--;
                else
                    sqr--;

                q.pop();
                j++;
            }
        }
        if (q.empty())
            return 0;
        else
        {
            int cnt = 0;
            while (!q.empty())
            {
                cnt++;
                q.pop();
            }
            return cnt;
        }
    }
};