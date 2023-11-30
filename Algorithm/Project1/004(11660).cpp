#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int size, ques_num;

	cin >> size >> ques_num;

	int** num_arr = new int* [size + 1]{};
	for (int i = 0; i < size + 1; i++) num_arr[i] = new int[size + 1]{};

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			cin >> num_arr[i][j];
		}
	}	

	int** sum_arr = new int* [size + 1]{};
	for (int i = 0; i < size + 1; i++) sum_arr[i] = new int[size + 1]{};

	//구간 합 배열 초기화
	for (int i = 1;	 i <= size; i++) {
		sum_arr[1][i] = num_arr[1][i];
		if (i > 1) sum_arr[1][i] += sum_arr[1][i - 1];

		sum_arr[i][1] = num_arr[i][1];
		if (i > 1) sum_arr[i][1] += sum_arr[i - 1][1];
	}

	//구간 합 배열
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			if (i > 1 && j > 1) {
				sum_arr[i][j] = sum_arr[i][j - 1] + sum_arr[i - 1][j] - sum_arr[i - 1][j - 1] + num_arr[i][j];
			}
		}
	}

	
	for (int k = 0; k < ques_num; k++) {

		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		cout << sum_arr[x2][y2] - sum_arr[x1 - 1][y2] - sum_arr[x2][y1 - 1] + sum_arr[x1 - 1][y1 - 1] << endl;
	}
	


	return 0;
}