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

    while(n--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if(y1 == y2){
            cout << "Very Happy" << endl;
        }else if(x1 == x2){
            cout << "Happy" << endl;
        }else{
            cout << "Sad" << endl;
        }
    }
}