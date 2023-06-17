#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> occur(N, 0);
    for (int i = 0; i < 3 * N; ++i)
    {
        int A;
        cin >> A;
        occur[A - 1]++;
    }
    return 0;
}