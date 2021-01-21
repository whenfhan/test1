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
		cout << "没有choice.txt文件,请创建一个choice.txt" << endl;
		cout << "按任意键退出" << endl;
		system("pause");
		return 0;
	}
	vector<string> choices;
	char buf[256];
	while (input_file.getline(buf, sizeof(buf))) 
		choices.push_back(buf);
	input_file.close();

	if (choices.empty()) {
		cout << "choice.txt为空" << endl;
		cout << "按任意键退出" << endl;
		system("pause");
		return 0;
	}
		

	srand(time(NULL));
	int size = choices.size();
	cout << "按任意键即可停止，3秒后开始" << endl;
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
	cout << endl << "好家伙，你选到了你选到了" << choices[rand() % size] << endl;
	system("pause");
	return 0;
}