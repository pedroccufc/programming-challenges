#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	int T, N, K;
	cin >> T;

	while (T--) {
		cin >> N;

		std::map<ll, ll> cb;

		for (int i = 0; i < N; i++) {
			ll x;
			cin >> x;
			cb[x]++;
		}

		std::vector<ll> a;

		std::map<ll, ll>::iterator it;
		for (it = cb.begin(); it != cb.end(); it++) {
			a.push_back((*it).first);
		}

		cin >> K;

		ll cont = 0LL;

		for (int i = 0; i < a.size(); i++) {

			if (cb[a[i]] > 1) {
				if ((a[i] * 2) == K) {
					cont += (cb[a[i]]*(cb[a[i]]-1))/2;
				}
			}

			for (int j = i+1; j < a.size(); j++) {
				if ((a[i]+a[j]) == K){
					cont += (cb[a[i]] * cb[a[j]]);
				}
			}
		}

		cout << cont << endl;

	}

	return 0;
}