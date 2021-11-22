/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
const int N = 2e5 + 5;


void solve(){
    int n,m;
    cin >> n >> m;
    int d[20] = {0};
    for(int i = 0; i < n * m; i++){
        int x;
        cin >> x;
        d[x]++;
    }
    for(int i = 0; i < 10; i++){
        // cout << "i = " << i << " : " << d[i] << "\n";
        cout << d[i] << " ";
    }
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    return 0;
}

// Code By Bao Trung