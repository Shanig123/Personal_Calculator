
#include "TotalInclude.h"
#include "MainApp.h"

#define DEFAULT_VAL (-1)

MainApp::MainApp()
	:m_bCheckUpdate(true)
{
}

_Event MainApp::SetUpMainApp()
{
	return _Event();
}

_Event MainApp::UpdateApp()
{
	_Event iCheck = NO_EVENT;
	while (m_bCheckUpdate)
	{
		iCheck = NO_EVENT;

		iCheck = PrintMenu();


		if (iCheck == OUT_OF_RANGE)
		{

			return OUT_OF_RANGE;
		}
	}
	return _Event(NO_EVENT);
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
	_int iSelectMenu = DEFAULT_VAL;
	PRINT_MESSAGE("===================");
	PRINT_MESSAGE("1. Calculator1");
	PRINT_MESSAGE("2. Calculator2");
	PRINT_MESSAGE("3. ProgramShutdown");
	PRINT_MESSAGE("===================");
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
		if (iSelectMenu == 0) // 0을 고름.
		{
			Print_Log("select 0");
			system("pause");
		}
		else //범위 밖의 숫자가 입력됨.
		{
			Print_Log("Error");
			system("pause");
			if (cin.fail())
			{
				cin.clear();
			}
			//cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin.ignore();
			return OUT_OF_RANGE;
		}
	}
		break;
	}
	return iSelectMenu;
}
