#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAXN = 1e7;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Número de casos de teste (1 <= T <= 10^4)
	int T;
	cin >> T;

	// Tamanho da string (1 <= N <= 10^6)
	int N;

	std::vector<char> S;
	std::vector<int> prefix;
	std::vector<int> suffix;

	while (T--) {
		cin >> N;

		S.resize(N);
		prefix.resize(N);
		suffix.resize(N);

		for (int i = 0; i < N; i++) {
			cin >> S[i];
		}

		prefix[0] = 0;
		suffix[N-1] = 0;
		for (int i = 1, j = N-2; i < N, j >= 0; i++, j--) {
			prefix[i] = S[i-1] == 'B' ? prefix[i-1] + 1 : prefix[i-1];
			suffix[j] = S[j+1] == 'A' ? suffix[j+1] + 1 : suffix[j+1];
		}

		ll minimo_trocas = MAXN;
		for (int i = 0; i < N; i++) {
			minimo_trocas = min(minimo_trocas, (ll)(prefix[i] + suffix[i]));
		}

		cout << minimo_trocas << endl;

	}

	return 0;
}