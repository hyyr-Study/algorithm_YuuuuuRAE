/*
N���� ���ڰ� ���� ���� ���� �ִ�. �� ���ڸ� ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int num_Count = 0; //������ ����
	string numbers = " "; //���� ���� ����
	int sum = 0;

	cin >> num_Count;
	cin >> numbers;

	for (int i = 0; i < numbers.length(); i++) {
		sum += numbers[i] - '0';
	}

	cout << sum;

	return 0;
}