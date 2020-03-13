#include <iostream>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	// Número de casos de teste: T < 30
	int T;
	cin >> T;

	// Número de paredes: 0 < N < 50
	int N;

	// Indica a altura da parede: h <= 10
	int h;

	int c = 1;
	while(T--){
		cin >> N;
		
		int count_high = 0;
		int count_low = 0;
		int last_wall = 0;
		
		cin >> h;
		last_wall = h;

		for(int i = 0; i < N-1; i++){
			cin >> h;
			if(h > last_wall){
				count_high++;
			}else if(h < last_wall){
				count_low++;
			}
			last_wall = h;
		}

		cout << "Case " << c << ": " << count_high << " " << count_low << endl;
		c++;
	}

	return 0;
}