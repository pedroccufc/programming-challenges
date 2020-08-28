#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Número de casos de teste. (1 <= T <= 10)
	int T;
	cin >> T;

	for(int i = 1; i <= T; i++) {
		// Número de juízes. (1 <= N <= 10^4)
		int N;
		cin >> N;

		std::vector<int> A;
		A.resize(N);

		// ler todos os valores
		for (int j = 0; j < N; j++) {
			cin >> A[j];
		}

		std::vector<int> X;
		X.resize(N);

		X[0] = A[0];
		X[1] = max(X[0], A[1]);

		int max_sum = X[1];
		for (int j = 2; j < N; j++) {
			X[j] = max(X[j-2]+A[j], X[j-1]);
			if (X[j] > max_sum) {
				max_sum = X[j];
			}
		}

		cout << "Case " << i << ": " << max_sum << endl;
	}

	return 0;
}