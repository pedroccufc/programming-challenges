#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	std::vector<int> A;
	A.resize(N);

	ll diff = 0, soma = 0;
	map<int, int> mapa;

	mapa[0]++;

	for (int i = 0; i < N; i++) {
		cin >> A[i];

		if (A[i]%2 == 1) {
			diff--;
		} else {
			diff++;
		}

		soma += mapa[diff];
		mapa[diff]++;
	}

	cout << soma << endl;

	return 0;
}
