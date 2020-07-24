#include <bits/stdc++.h>

#define ALL(C) C.begin(), C.end()

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Número de casos de teste (1 <= T <= 10)
	int T;
	cin >> T;

	// Número de amigos (1 <= N <= 10^5)
	int N;

	// Lista de amigos (1 <= S <= 10^5)
	std::vector<int> S;

	// Número de amigos satisfeitos (1 <= K <= N)
	int K;

	while (T--) {
		cin >> N;

		S.resize(N);

		for (int i = 0; i < N; i++) {
			cin >> S[i];
		}

		cin >> K;

		sort(ALL(S));

		int presentes = S[0] * N;

		for (int i = 1; i < K; i++) {
			presentes += ((S[i] - S[i-1]) * (N - i));
		}

		cout << presentes << endl;

	}

	return 0;
}