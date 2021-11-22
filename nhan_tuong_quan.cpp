/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
const int N = 2e3 + 5;

int a[N][N];
 int mask[3][3];
int nhantuongquan(int x,int y){
    int res = 0;
    int tm[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tm[i][j] = a[x + i][y + j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            res += tm[i][j] * mask[i][j];
        }
    }
    return res;
}

void solve(){
    int n,m;
    printf("Nhap hang : ");
    cin >> n;
    printf("Nhap cot: ");
    cin >> m;
    printf("Nhap mang: \n");
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    printf("Nhap mat na (mask) \n");
   
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mask[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << nhantuongquan(i,j) << " \n"[j == m - 1];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    return 0;
}

// Code By Bao Trung