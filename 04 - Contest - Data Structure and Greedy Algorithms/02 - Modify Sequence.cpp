#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 1e4;

ll A[MAXN];

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	int reduce = 0;

	// Número de inteiros não negativos
	ll N;
	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> A[i];
		reduce = A[i] - reduce;
		if (reduce < 0) break;
	}

	string txt = reduce == 0 ? "YES" : "NO";
	
	cout << txt << endl;

	return 0;
}