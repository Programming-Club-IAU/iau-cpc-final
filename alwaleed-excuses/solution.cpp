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
    int strengths[n];
    for (int i = 0; i < n; i++)
        cin >> strengths[i];
    
    sort(strengths, strengths + n);

    int ans = 0;
    int totalStrength = 0;
    for (int i = 0; i < n; i++)
    {
        if (strengths[i] + totalStrength <= k)
        {
            totalStrength += strengths[i];
            ans++;
        }
        else
            break;
    }

    cout << ans << endl;
}