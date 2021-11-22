/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
const int N = 2e5 + 5;


void solve(){
    int n,m,T;
    // cout << "Nhap so n: ";
    cin >> n;
    // cout << "Nhap so m: ";
    cin >> m;
    // cout << "Nhap T: ";
    cin >> T;
    // cout << "N8hap mang : ";
    int a[n + 5][m + 5] = {0};
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << (a[i][j] <= T ? 0 : 1) << " ";
        }
        cout << endl;
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