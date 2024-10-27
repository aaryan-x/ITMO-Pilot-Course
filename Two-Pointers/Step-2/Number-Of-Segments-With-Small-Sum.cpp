#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++) cin >> a[i];

    ll left = 0, sum = 0, count = 0;
    for (int right = 0; right < n; right++) {
        sum += a[right];
        while (sum > s) {
            sum -= a[left];
            left++;
        }
        count += (right - left + 1);
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
