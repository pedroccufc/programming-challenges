#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

	string line;
	int i = 0;


	string texto = "";
	while(i < 4){
		getline(cin, line);
		texto += line;
		i++;
	}

	//cout << texto << endl;

	int count_a = 0, count_b = 0, count_c = 0, count_d = 0, count_e = 0;
	int count_f = 0, count_g = 0, count_h = 0, count_i = 0, count_j = 0;
	int count_k = 0, count_l = 0, count_m = 0, count_n = 0, count_o = 0;
	int count_p = 0, count_q = 0, count_r = 0, count_s = 0, count_t = 0;
	int count_u = 0, count_v = 0, count_w = 0, count_x = 0, count_y = 0;
	int count_z = 0;

	for(int i = 0; i < texto.length(); i++){
		if(texto[i] == 'A'){
			count_a++;
		}else if(texto[i] == 'B'){
			count_b++;
		}else if(texto[i] == 'C'){
			count_c++;
		}else if(texto[i] == 'D'){
			count_d++;
		}else if(texto[i] == 'E'){
			count_e++;
		}else if(texto[i] == 'F'){
			count_f++;
		}else if(texto[i] == 'G'){
			count_g++;
		}else if(texto[i] == 'H'){
			count_h++;
		}else if(texto[i] == 'I'){
			count_i++;
		}else if(texto[i] == 'J'){
			count_j++;
		}else if(texto[i] == 'K'){
			count_k++;
		}else if(texto[i] == 'L'){
			count_l++;
		}else if(texto[i] == 'M'){
			count_m++;
		}else if(texto[i] == 'N'){
			count_n++;
		}else if(texto[i] == 'O'){
			count_o++;
		}else if(texto[i] == 'P'){
			count_p++;
		}else if(texto[i] == 'Q'){
			count_q++;
		}else if(texto[i] == 'R'){
			count_r++;
		}else if(texto[i] == 'S'){
			count_s++;
		}else if(texto[i] == 'T'){
			count_t++;
		}else if(texto[i] == 'U'){
			count_u++;
		}else if(texto[i] == 'V'){
			count_v++;
		}else if(texto[i] == 'W'){
			count_w++;
		}else if(texto[i] == 'X'){
			count_x++;
		}else if(texto[i] == 'Y'){
			count_y++;
		}else if(texto[i] == 'Z'){
			count_z++;
		}
	}

	map<char, int> mapa;

	mapa.insert(pair<char, int>('A', count_a));
	mapa.insert(pair<char, int>('B', count_b));
	mapa.insert(pair<char, int>('C', count_c));
	mapa.insert(pair<char, int>('D', count_d));
	mapa.insert(pair<char, int>('E', count_e));
	mapa.insert(pair<char, int>('F', count_f));
	mapa.insert(pair<char, int>('G', count_g));
	mapa.insert(pair<char, int>('H', count_h));
	mapa.insert(pair<char, int>('I', count_i));
	mapa.insert(pair<char, int>('J', count_j));
	mapa.insert(pair<char, int>('K', count_k));
	mapa.insert(pair<char, int>('L', count_l));
	mapa.insert(pair<char, int>('M', count_m));
	mapa.insert(pair<char, int>('N', count_n));
	mapa.insert(pair<char, int>('O', count_o));
	mapa.insert(pair<char, int>('P', count_p));
	mapa.insert(pair<char, int>('Q', count_q));
	mapa.insert(pair<char, int>('R', count_r));
	mapa.insert(pair<char, int>('S', count_s));
	mapa.insert(pair<char, int>('T', count_t));
	mapa.insert(pair<char, int>('U', count_u));
	mapa.insert(pair<char, int>('V', count_v));
	mapa.insert(pair<char, int>('W', count_w));
	mapa.insert(pair<char, int>('X', count_x));
	mapa.insert(pair<char, int>('Y', count_y));
	mapa.insert(pair<char, int>('Z', count_z));
	
	int maior = max(count_a, max(count_b, max(count_c, max(count_d, max(count_e, max(count_f, max(count_g, max(count_h, max(count_i, max(count_j, max(count_j, max(count_k, max(count_l, max(count_m, max(count_n, max(count_o, max(count_p, max(count_q, max(count_r, max(count_s, max(count_t, max(count_u, max(count_v, max(count_w, max(count_x, max(count_y, count_z))))))))))))))))))))))))));

	//cout << maior << endl;

	char matriz[26][100];

	int j = 0;
	char alfabeto[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	for(map<char, int>::iterator it = mapa.begin(); it != mapa.end(); it++){
		if(it->second > 0){
			for(int k = 0; k < it->second; k++){
				matriz[j][k] = '*';
			}
			for(int k = it->second; k < maior; k++){
				matriz[j][k] = ' ';
			}
		}else{
			for(int k = 0; k < maior; k++){
				matriz[j][k] = ' ';
			}
		}
		j++;
	}

	for(int j = maior-1; j >= 0; j--){
		for(int i = 0; i < 26; i++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}

	for(int i = 0; i < 26; i++){
		cout << alfabeto[i] << " ";
	}
	cout << endl;

	return 0;
}