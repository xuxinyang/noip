#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll k, n, d, e;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> k;
    while (k--)
    {
        cin >> n >> d >> e;
        ll m = n - e * d + 2;
        ll delta = m * m - 4 * n;   // b^2-4ac
        if (delta < 0)
        {
            cout << "NO\n";         // Δ < 0，无解
            continue;
        }
        ll a = sqrt(delta);
        if (a * a != delta)         // 不是完全平方数
        {
            cout << "NO\n";
            continue;
        }
        if ((m - a) & 1)            // 不是偶数
        {
            cout << "NO\n";
            continue;
        }
        ll p = (m - a) / 2, q = m - p;
        cout << p << " " << q << "\n";
    }
    return 0;
}