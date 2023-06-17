#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    bool status = false; // 0
    vector<int> interval;
    priority_queue<int> pq;
    for (int i = 0; i < N; ++i)
    {
        int X, Y;
        cin >> X >> Y;
        if (status == 0 && X == 0)
        {
            interval.push_back(Y);
        }
        else if (status == 0 && X == 1)
        {
            pq.push(Y);
            status = true;
        }
        else if (status == 1 && X == 1)
        {
            pq.push(Y);
        }
        else
        {
            interval.push_back(pq.top());
            pq = priority_queue<int>(); // reset it
        }
    }
    int last = 0;
    int ans = 0;
    for (int i = 0; i < interval.size(); ++i)
    {
        last = max(0, last) + interval[i];
        ans = max(ans, last);
    }
    cout << ans;
    return 0;
}