#include <bits/stdc++.h>
using namespace std;

#define ali                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ull unsigned long long

int main()
{
    ali;
    int n, k;
    cin >> n >> k;

    pair<int, int> v[n];

    for (int i = 0; i < n; i++)
    {
        int second, first;
        cin >> first >> second;
        v[i] = make_pair(first, second);
    }

    sort(v, v + n, greater<pair<int, int> >());

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int min_quantity = min(k, v[i].first);
        ans += min_quantity * v[i].second;
        k -= min_quantity;
    }

    cout << ans << endl;
}