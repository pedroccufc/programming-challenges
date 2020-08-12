#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef pair<ll, ll> ii;

struct ComparePair
{
	bool operator()(const ii & p1, const ii & p2){
		if (p1.second != p2.second) {
			return p1.second < p2.second;
		} else {
			return p1.first < p2.first;
		}
	}
};

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Número de tópicos (1 <= N <= 10^6)
	ll N;
	cin >> N;

	// ID do tópico (1 <= ID <= 10^9)
	ll id_topic;

	// Pontuação Z atual (0 <= Z <= 10^9)
	ll score_current;

	// Postagens (0 <= P <= 10^9)
	ll post;

	// Gostos (0 <= L <= 10^9)
	ll like;

	// Comentários (0 <= C <= 10^9)
	ll comment;

	// Compartilhamentos (0 <= S <= 10^9)
	ll share;

	// Nova pontuação Z
	ll new_score;

	// Mudança em relação a pontuação antiga
	ll change;

	// Fila de prioridade máxima
	priority_queue<ll, vector<ii>, ComparePair> topics;

	// Tópicos atualizados
	map<ll, ll> update_topics;

	for (ll i = 0LL; i < N; i++) {
		cin >> id_topic;
		cin >> score_current;
		cin >> post;
		cin >> like;
		cin >> comment;
		cin >> share;

		new_score = (
			(50LL*post) +
			(5LL*like) +
			(10LL*comment) +
			(20LL*share)
		);

		change = new_score - score_current;

		topics.push(make_pair(id_topic, change));
		update_topics[id_topic] = new_score;

	}

	for (ll i = 0LL; i < 5LL; i++) {
		id_topic = topics.top().first;
		topics.pop();

		cout << id_topic << " " << update_topics[id_topic] << endl;
	}


	return 0;
}