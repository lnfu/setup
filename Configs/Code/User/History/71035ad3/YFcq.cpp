#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
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
    for (int i = 0; i < N; ++i)
        cout << ans[i] << ' ';
    return 0;
}