#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    vector<ll> c;

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c.push_back(a[i]);
            i++;
        } else {
            c.push_back(b[j]);
            j++;
        }
    }

    while (i < n) {
        c.push_back(a[i]);
        i++;
    }

    while (j < m) {
        c.push_back(b[j]);
        j++;
    }

    for (auto it : c) {
        cout << it << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
