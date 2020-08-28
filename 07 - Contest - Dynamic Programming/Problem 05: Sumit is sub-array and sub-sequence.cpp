#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Número de casos de teste. (1 <= T <= 10)
	int T;
	cin >> T;

	// Quantidade de elementos de entrada. (1 <= N <= 10^5)
	int N;

	// Vetor de entrada. (-10^4 <= A[i] <= 10^4)
	std::vector<int> A;

	while (T--) {

		cin >> N;
		A.resize(N);

		int positive_sum = 0;
		int max_negative_value = -1e5;

		int current_sum = 0;
		int best_sum_contigous = 0;

		for (int i = 0; i < N; i++) {
			cin >> A[i];

			if (A[i] > 0)
				positive_sum += A[i];
			else
				max_negative_value = max(max_negative_value, A[i]);

			if (i == 0)
				best_sum_contigous = A[i];

			current_sum = max(A[i], A[i]+current_sum);
			best_sum_contigous = max(current_sum, best_sum_contigous);

		}

		int best_sum_not_contigous = (positive_sum == 0 ? max_negative_value : positive_sum);

		cout << best_sum_contigous << " " << best_sum_not_contigous << endl;

	}

	return 0;
}