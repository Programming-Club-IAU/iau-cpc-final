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
    pair<int,int> v[n];

    for (int i = 0 ; i < n ; i++) cin >> v[i].second >> v[i].first;

    sort(v, v + n);

    ll ans = 0;

    for (int i = n - 1 ; i >= 0 ; i--) {
        ans += (ll) min(k, v[i].second) * v[i].first;
        k -= min(k, v[i].second);
    }
    cout << ans;
}