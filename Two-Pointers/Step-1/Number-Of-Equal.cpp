#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);

    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < m; i++) cin >> b[i];

    ll i = 0, j = 0, count = 0;

    while (i < n && j < m) {
        if (a[i] < b[j])  i++;
        else if (a[i] > b[j])  j++;
        else {
            ll countA = 0, countB = 0, temp = a[i];
            while (i < n && a[i] == temp) {
                countA++;
                i++;
            }
            while (j < m && b[j] == temp) {
                countB++;
                j++;
            }
            count += (countA * countB);
        }
    }
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
