#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    vector<int> res;
  
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j])
            i++;
        else {
            res.push_back(i);
            j++;
        }
    }

    while (j < m) {
        res.push_back(i);
        j++;
    }

    for (auto it : res) cout << it << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
