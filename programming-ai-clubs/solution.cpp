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

    int n, m;
    cin >> n >> m;

    int p_scores[n];
    int ai_scores[m];

    for (int i = 0; i < n; i++)
        cin >> p_scores[i];

    for (int i = 0; i < m; i++)
        cin >> ai_scores[i];

    pair<int, int> points = make_pair(-1, -1);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {

            int current_diff = abs(p_scores[i] - ai_scores[j]);
            if ((points.first == -1 || points.second == -1) || current_diff < abs(p_scores[points.first] - ai_scores[points.second]))
                points = make_pair(i, j);
        }

    cout << points.first << " " << points.second << endl;
}