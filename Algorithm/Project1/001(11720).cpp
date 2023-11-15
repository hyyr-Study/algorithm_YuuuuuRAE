/*
N개의 숫자가 공백 없이 쓰여 있다. 이 숫자를 모두 합해 출력하는 프로그램을 작성하시오
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int num_Count = 0; //숫자의 갯수
	string numbers = " "; //공백 없는 숫자
	int sum = 0;

	cin >> num_Count;
	cin >> numbers;

	for (int i = 0; i < numbers.length(); i++) {
		sum += numbers[i] - '0';
	}

	cout << sum;

	return 0;
}