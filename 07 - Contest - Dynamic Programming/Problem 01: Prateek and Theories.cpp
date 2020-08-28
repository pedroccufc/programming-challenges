#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;

ll MAXT = 1e9 + 1;
 
int main(){
 
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	// Número de caso de teste (1 <= T <= 10)
	int T;
	cin >> T;
 
	// Número de teorias (1 <= N <= 10^4)
	int N;
 
	// Momento em que uma teoria é proposta (1 <= T1 <= 10^9)
	std::vector<ll> T1;
 
	// Momento em que uma teoria se torna inválida (1 <= T2 <= 10^9)
	std::vector<ll> T2;
 
	while (T--) {
		cin >> N;
 
		// Restrição: T1 < T2
		T1.resize(N);
		T2.resize(N);

		ll max_teorias = 0;
		map<ll, int> mapa;

		for (int i = 0; i < N; i++) {
			cin >> T1[i] >> T2[i];

			mapa[T1[i]]++;
			mapa[T2[i]]--;
		}

		ll soma = 0;
		map<ll, int>::iterator it;
		for (it = mapa.begin(); it != mapa.end(); it++) {
			soma += (*it).second;
			max_teorias = max(max_teorias, soma);
		}

		cout << max_teorias << endl;
	}
 
 
	return 0;
}