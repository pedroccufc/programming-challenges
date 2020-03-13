#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

int main(){

	// Cadeia de entrada contendo 0s e 1s
	char s[1000111];

	// Número de consultas para cada caso
	int n;

	// Indíces para consulta
	int i, j;

	int low, high;
	bool iguais = false;

	// Casos
	int c = 1;

	while(scanf(" %s ", s) != EOF){
		cin >> n;
		cout << "Case " << c << ":" << endl;
		for(int k = 0; k < n; k++){
			cin >> i >> j;
			low = min(i, j);
			high = max(i, j);
			if(low == high){
				iguais = true;
			}else{
				for(int p = low; p < high; p++){
					if(s[p] == s[p+1]){
						iguais = true;
					}else{
						iguais = false;
						break;
					}
				}
			}
			if(iguais){
				cout << "Yes" << endl;
			}else{
				cout << "No" << endl;
			}
		}
		c++;
	}


	return 0;
}