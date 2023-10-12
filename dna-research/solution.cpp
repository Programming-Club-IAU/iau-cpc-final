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
    string s;
    cin >> s;

    map<string, int> subStrings;

    for (int i = 0; i < s.length() - 3; ++i)
    {
        string temp = s.substr(i, 4);
        if (subStrings.find(temp) != subStrings.end())
        {
            subStrings[temp] += 1;
        }
        else
        {
            subStrings[temp] = 1;
        }
    }

    int ans = 0;
    for (const auto& subString : subStrings)
    {
        if (subString.second >= 3)
        {
            ans += 1;
        }
    }

    cout << ans << endl;
}