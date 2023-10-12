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
    int f, k, x, y, op;
    cin >> f >> k >> x >> y >> op;

    int oldFollowers = f;

    for (int i = 0; i < op; i++)
    {
        if (f < k)
            f += x;
        else if (f >= k)
            f = max(0, f - y);
    }

    cout << f - oldFollowers << endl;
}