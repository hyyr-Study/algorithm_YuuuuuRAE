/*
��� ���ϱ�

���� ��� : ���� / M * 100
*/
#include <iostream>

using namespace std;

int main() {

	int subject_Count = 0; //������ ����
	int subject_Score[1000] = {0}; //������ ����

	int Max_Score; //�ְ� ����

	int Sum_Score = 0; //������ ��

	cin >> subject_Count;

	for (int i = 0; i < subject_Count; i++) {
		cin >> subject_Score[i];
		Sum_Score += subject_Score[i];
	}

	Max_Score = subject_Score[0];
	for (int j = 1; j < subject_Count; j++) {
		if (Max_Score < subject_Score[j])
			Max_Score = subject_Score[j];
	}

	double result = Sum_Score * 100.0 / Max_Score / subject_Count;
	cout << result;

	return 0;
}