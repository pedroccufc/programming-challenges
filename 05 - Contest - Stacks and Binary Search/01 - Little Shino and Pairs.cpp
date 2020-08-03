#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Quantidade de números (1 <= N <= 10^5)
	int N;

	// Input
	cin >> N;

	// Sequência de números (1 <= A_i <= N)
	std::vector<int> A;
	A.resize(N+2);

	A[0] = 0;
	A[N+1] = 0;

	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	int count = 0, maior = 0, j = 0;

	for (int i = 1; i <= N; i++) {
		maior = 0, j = i-1;
		while (j >= 1 and A[i] > A[j]) {
			if (A[j] > maior) {
				count++;
				maior = A[j];
			}
			j--;
		}

		maior = 0, j = i+1;
		while (j <= N and A[i] > A[j]) {
			if (A[j] > maior) {
				count++;
				maior = A[j];
			}
			j++;
		}
	}
	cout << count << endl;

	return 0;
}