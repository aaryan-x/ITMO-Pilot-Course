#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++) cin >> a[i];

    ll minLen = LLONG_MAX;
    ll left = 0, sum = 0;
    for (int right = 0; right < n; right++) {
        sum += a[right];
        while (sum - a[left] >= s) {
            sum -= a[left];
            left++;
        }
        if (sum >= s)  minLen = min(minLen, right - left + 1);
    }
  
    if (minLen > n)  minLen = -1;
    cout << minLen << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
