
#include "TotalInclude.h"
#include "MainApp.h"

MainApp::MainApp()
	:m_bCheckUpdate(true)
{
}

_uint MainApp::UpdateApp()
{
	_int iCheck = 0;
	while (m_bCheckUpdate)
	{
		iCheck = 0;

		iCheck = PrintMenu();


		if (iCheck == -2)
		{

			return 1;
		}
	}
	return _uint(0);
}

MainApp * MainApp::InitApp()
{
	using namespace std;
	MainApp* ptr = nullptr;
	ptr = new MainApp;
	if (!ptr)
	{
		delete ptr;
		ptr = nullptr;
		Print_Log("Boot Fail!\n");
		return nullptr;
	}
	
	Print_Log("Boot Success!\n MainApp instance Success!");
	Sleep(1000);
	Print_Log(".");
	Sleep(500);
	Print_Log("..");
	Sleep(500);
	return ptr;
}
void MainApp::Free()
{



	Print_Log("Shutdown!\n");
	delete this;
};

_int MainApp::PrintMenu()
{
	using namespace std;
	system("cls");
	_int iSelectMenu = -1;

	PRINT_MESSAGE("1. Calculator1");
	PRINT_MESSAGE("2. Calculator2");
	PRINT_MESSAGE("3. PrgramShutdown");
	cout << "Input : ";

	cin >> iSelectMenu;
	//scanf_s("%d", &iSelectMenu);

	switch (iSelectMenu)
	{
	case 1:
		Print_Log("select 1");

		system("pause");
		break;
	case 2:	
		Print_Log("select 2");

		system("pause");
		break;
	case 3:
		m_bCheckUpdate = false;
		break;
	default:
	{
		if (iSelectMenu == 0)
		{
			Print_Log("select 0");
			system("pause");
		}
		else
		{
			Print_Log("Error");
			system("pause");
			if (cin.fail())
			{
				cin.clear();
			}
			//cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin.ignore();
			return -2;
		}
	}
		break;
	}
	return iSelectMenu;
}
