#include <bits/stdc++.h>
#define int unsigned long long

using namespace std;

int32_t main()
{
    int N = 1;
    int ans = 0;
    for (int i = 0; i < 64; ++i)
    {
        int A;
        cin >> A;
        ans += (A * N);
        N <<= 1;
    }
    cout << ans;
    return 0;
}