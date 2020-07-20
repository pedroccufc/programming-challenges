#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXA = 1e6;

ll A[MAXA];

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;

	ll N, K;

	// Número de casos de testes (1 <= T <= 5)
	cin >> T;

	while(T--){
		// Número de elementos da matriz A (1 <= N <= 10^5)
		cin >> N;

		// Elemento a ser comparado (1 <= K <= 10^6)
		cin >> K;

		ll MAXV = 0LL;

		for(int i = 0; i < N; i++){
			cin >> A[i];
			if (A[i] < K) {
				MAXV = max(MAXV, (K - A[i]));
			}
		}

		cout << MAXV << endl;

	}


	return 0;
}