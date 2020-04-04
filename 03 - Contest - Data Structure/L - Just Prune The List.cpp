#include <iostream>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	// Número total de casos de teste: T <= 100
	int T;
	cin >> T;

	// Número de elementos na primeira lista: 1 <= N <= 10000
	int N;

	// Número de elementos na segunda lista: 1 <= M <= 10000
	int M;

	while(T--){
		cin >> N >> M;

		int lista1[10001];
		for(int i = 0; i < N; i++){
			cin >> lista1[i];
		}

		int lista2[10001];
		for(int i = 0; i < M; i++){
			cin >> lista2[i];
		}

		int count = N + M;

		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				if(lista1[i] == lista2[j]){
					lista1[i] = 0;
					lista2[j] = 0;
					count -= 2;
					break;
				}
			}
		}

		cout << count << endl;
	}

	return 0;
}