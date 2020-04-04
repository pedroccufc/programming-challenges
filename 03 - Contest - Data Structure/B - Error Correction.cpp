#include <iostream>
#include <utility>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	int n;

	while((cin >> n) && n != 0){
		
		int matriz[100][100];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matriz[i][j];
			}
		}

		int sum = 0;

		int it = 0;
		int count_l = 0;
		int count_c = 0;

		int par_i[100];
		int par_j[100];

		bool corrupt = false;
		bool parity = true;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				sum += matriz[i][j];
			}
			if(sum%2 != 0){
				par_i[count_l] = i+1;
				count_l++;
				sum = 0;
			}else{
				sum = 0;
			}
		}

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				sum += matriz[j][i];
			}
			if(sum%2 != 0){
				par_j[count_c] = i+1;
				count_c++;
				sum = 0;				
			}else{
				sum = 0;
			}
		}

		if( (count_l > count_c) || (count_l < count_c) || (count_l > 1 && count_c > 1)){
			cout << "Corrupt" << endl;
		}else if(count_l == 1 && count_c == 1){
			cout << "Change bit (" << par_i[0] << "," << par_j[0] << ")" << endl;
		}else{
			cout << "OK" << endl;
		}

	}

	return 0;
}