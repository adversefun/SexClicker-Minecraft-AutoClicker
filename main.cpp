#include <iostream>
#include <Windows.h>
using namespace std;

void menu()
{

	cout << "SexClicker\n";
	system("color 4");
	cout << "Press V for start and Z for stop! \n";
}

void engine()
{
	bool enginesystem = false;

	while (true)
	{
		if (GetAsyncKeyState('V')) 
		{
			enginesystem = true;
		}
		else if (GetAsyncKeyState('Z')) 
		{
			enginesystem = false;
		}
		if (enginesystem == true)
		{
			system("cls");
			menu();
			system("color 2");
			cout << "Enabled\n";
			system("pause");
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

		}
		else if (enginesystem == false)
		{
			system("cls");
			menu();
			system("color 4");
			cout << "Disabled\n";
			system("pause");

		}
	}
}

int main()
{
	menu();
	engine();

	return 0;
}
