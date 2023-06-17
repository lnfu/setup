#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> occur(N, 0);
    vector<int> ans(N, 0);
    for (int i = 0; i < 3 * N; ++i)
    {
        int A;
        cin >> A;
        if (occur[A - 1] == 1)
            ans[A - 1] = i + 1;
        occur[A - 1]++;
    }
    return 0;
}