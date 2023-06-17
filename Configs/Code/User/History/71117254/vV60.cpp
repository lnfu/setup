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
        if (status == false && X == 0)
        {
            interval.push_back(Y);
        }
        else if (status == false && X == 1)
        {
            pq.push(Y);
            status = true;
        }
        else if (status == true && X == 1)
        {
            pq.push(Y);
        }
        else if (status == true && X == 0)
        {
            interval.push_back(pq.top());
            interval.push_back(Y);
            pq = priority_queue<int>(); // reset it
            status = false;
        }
    }
    if (!pq.empty())
        interval.push_back(pq.top());

    int last = 0;
    int ans = 0;
    for (int i = 0; i < interval.size(); ++i)
    {
        // cout << interval[i] << '\n';
        last = max(0, last) + interval[i];
        ans = max(ans, last);
    }
    cout << ans;
    return 0;
}