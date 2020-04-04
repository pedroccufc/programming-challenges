#include <iostream>
#include <cstdlib>

using namespace std;

int compare (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

int main(){

	ios::sync_with_stdio(false);

	int n, number;

	while((cin >> n) && n != 0){
		int numbers[5001], cost[5001];

		for(int i = 0; i < n; i++){
			cin >> numbers[i];
		}

		int pos = 0, soma = 0, tam = n;

		while(true){
			if(tam == 2){
				cost[pos] = numbers[0] + numbers[1];
				pos++;
				break;
			}

			qsort(numbers, tam, sizeof(int), compare);

			soma = numbers[0] + numbers[1];

			cost[pos] = soma;
			pos++;

			numbers[tam] = soma;
			for(int i = 0; i < tam; i++){
				numbers[i] = numbers[i+2];
			}

			tam -= 1;
		}

		soma = 0;
		for(int i = 0; i < pos; i++){
			soma += cost[i];
		}

		cout << soma << endl;
	}


	return 0;
}