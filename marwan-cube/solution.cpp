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
    string s;
    set<string> st;
    char opposite[255];
    opposite['W'] = 'Y';
    opposite['Y'] = 'W';
    opposite['R'] = 'O';
    opposite['O'] = 'R';
    opposite['G'] = 'B';
    opposite['B'] = 'G';
    cin >> n;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        st.insert(s);
        if (!(s.size() == 1 ||
              (s.size() == 2 && opposite[s[0]] != s[1] && s[0] != s[1]) ||
              (s.size() == 3 &&
               (s[0] != s[1] && s[0] != s[2] && s[1] != s[2]) &&
               (opposite[s[0]] != s[1] && opposite[s[0]] != s[2]) &&
               (opposite[s[1]] != s[0] && opposite[s[1]] != s[2]) &&
               (opposite[s[2]] != s[1] && opposite[s[2]] != s[0]))))
        {
            ans = false;
        }
    }
    cout << (ans && st.size() == n ? "Yes" : "No");
}