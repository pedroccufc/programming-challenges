#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	getline(cin, s);

	std::map<char, int> max_o;

	for (int i = 0; i < s.size(); i++) {
		max_o[s[i]]++;
	}

	int max_occ = 0;
	char max_char;

	map<char, int>::iterator it;

	for (it = max_o.begin(); it != max_o.end(); it++) {
		if  ((*it).second > max_occ) {
			max_occ = (*it).second;
			max_char = (*it).first;
		} else if ((*it).second == max_occ) {
			if (int((*it).first) < int(max_char)) {
				max_occ = (*it).second;
				max_char = (*it).first;
			}
		}
	}

	std::cout << max_char << " " << max_occ << endl;

	return 0;
}