#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    bool status = false; // 0
    vector<int> interval;
    for (int i = 0; i < N; ++i)
    {
        int X, Y;
        cin >> X >> Y;
        if (status == 0 && X == 0)
        {
            interval.push_back(Y);
        }
        else // X == 1
        {
            ;
        }
    }
    return 0;
}