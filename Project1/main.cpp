#include <iostream>
#include <fstream>
#include <vector>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
	ifstream input_file("choice.txt");
	if (!input_file.is_open()) {
		cout << "û��choice.txt�ļ�,�봴��һ��choice.txt" << endl;
		cout << "��������˳�" << endl;
		system("pause");
		return 0;
	}
	vector<string> choices;
	char buf[256];
	while (input_file.getline(buf, sizeof(buf))) 
		choices.push_back(buf);
	input_file.close();

	if (choices.empty()) {
		cout << "choice.txtΪ��" << endl;
		cout << "��������˳�" << endl;
		system("pause");
		return 0;
	}
		

	srand(time(NULL));
	int size = choices.size();
	cout << "�����������ֹͣ��3���ʼ" << endl;
	cout << "3" << endl;
	Sleep(1000);
	cout << "2" << endl;
	Sleep(1000);
	cout << "1" << endl;
	Sleep(1000);
	while (!_kbhit()) {
		cout << choices[rand() % size] << endl;
		Sleep(100);
	}
	cout << endl << "�üһ��ѡ������ѡ����" << choices[rand() % size] << endl;
	system("pause");
	return 0;
}