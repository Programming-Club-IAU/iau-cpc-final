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
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << a * b * c * d << endl;
    }
}