#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++) cin >> a[i];

    ll maxLen = INT_MIN;
    ll left = 0, sum = 0;
    for (int right = 0; right < n; right++) {
        sum += a[right];
        while (sum > s && left <= right) {
            sum -= a[left];
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
  
    cout << maxLen << endl;
}

int main() {
    fast();
    solve();
    return 0;
}
