#include <iostream>
#include <conio.h>
#include "windows.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	char sym;
	bool f = false;
	int timer = 0;

	while (!f) {
		if (_kbhit()) { // Keyboard hit - клавиатура нажата
			sym = _getch();
			//cout << sym << endl;
			switch (sym) {
			case 'w':case 'W':cout << "UP\n"; break;
			case 'a':case 'A':cout << "LEFT\n"; break;
			case 's':case 'S':cout << "DOWN\n"; break;
			case 'd':case 'D':cout << "RIGHT\n"; break;
			case 'q':case 'Q': f = true;
			}
		}
		Sleep(100);
		timer += 100;
		if (timer % 1000 == 0) {
			cout << ".\n";
			timer = 0;
		}
	}
	 

	return 0;
}