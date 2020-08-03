#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	// Número de casos de teste
	ll T;
	cin >> T;

	// Tamanho dos dois arrays
	ll N;

	std::vector<ll> A;
	std::vector<ll> B;

	while (T--) {
		cin >> N;

		A.resize(N);
		for (ll i = 0LL; i < N; i++) {
			cin >> A[i];
		}

		B.resize(N);
		for (ll i = 0LL; i < N; i++) {
			cin >> B[i];
		}

		ll ans = 0;
		for (ll i = 0LL; i < N; i++) {
			ll l = 0LL;
			ll r = B.size() - 1LL;
			ll mid = (l + r) / 2LL;

			while (l <= r) {
				if (B[mid] >= A[i]) {
					l = mid + 1LL;
				} else {
					r = mid - 1LL;
				}
				mid = (l + r) / 2LL;
			}

			if ((r-i) > ans) {
				ans = r - i;
			}
		}
		cout << ans << endl;
	}


	return 0;
}