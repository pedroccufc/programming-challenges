#include <bits/stdc++.h>

#define ALL(C) C.begin(), C.end()

using namespace std;

typedef long long ll;

int main(){

	// Número de voltas
	ll N;
	cin >> N;

	// Sequência de pedras adicionadas a cada turno
	std::vector<ll> A;
	A.resize(N+1);

	A[0] = 0;
	for (ll i = 1; i <= N; i++) {
		cin >> A[i];
		A[i] += A[i-1];
	}

	// Número de consultas
	ll Q, x;
	cin >> Q;

	for (ll i = 0; i < Q; i++) {
		cin >> x;
		
		int idx = A[N] - x + 1;
		idx = std::lower_bound(ALL(A), idx) - A.begin();

		if (idx & 1) {
			cout << "A" << endl;
		} else {
			cout << "B" << endl;
		}
	}

	return 0;
}