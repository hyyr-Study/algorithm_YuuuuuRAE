#include <iostream>

using namespace std;

int main() {

	//버퍼제거
	ios::sync_with_stdio(false); //iostream / stdio 동기화 제거
	cin.tie(NULL); //묶음 해제
	cout.tie(NULL); //묶음 해제

	int N, M;

	cin >> N >> M;

	int sum[100001] = {};

	for (int i = 1; i <= N; i++) {
		int temp;
		cin >> temp;
		sum[i] = sum[i - 1] + temp;

	}

	for (int i = 0; i < M; i++) {
		int start = 0, fin = 0;
		cin >> start >> fin;
		
		cout << sum[fin] - sum[start-1] << "\n";

	}
	

	return 0;
}