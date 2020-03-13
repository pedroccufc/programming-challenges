#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	// Número de casos de teste:
	int t;
	cin >> t;

	// Qtd de linhas: 6 <= n
	int n;

	// Qtd de colunas: m <= 10000
	int m;

	while(t--){
		cin >> n >> m;
		cout << (n/3) * (m/3) << endl;
	}

	return 0;
}