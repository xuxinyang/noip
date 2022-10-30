#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a, b, ans;
int main()
{
    // 正常解法
#if 0
    ans = 1;
    cin >> a >> b;
    if (a == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
        if (ans > 1e9)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
#else
    // 快速幂法
    ans = 1;
    cin >> a >> b;
    for (; b >>= 1; a *= a)
    {
        if (b & 1) ans *= a;
        if (ans > 1e9 || a > 1e9)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
#endif
    return 0;
}