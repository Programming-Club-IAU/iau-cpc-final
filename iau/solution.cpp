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
        string word;
        cin >> word;
        if (word == "iau" || word == "iua" || word == "aiu" || word == "uai"){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}