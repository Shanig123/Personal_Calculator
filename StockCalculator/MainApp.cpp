#include "MainApp.h"

inline MainApp * MainApp::InitApp()
{
	using namespace std;
	MainApp* ptr = nullptr;
	ptr = new MainApp;
	if (!ptr)
	{
		delete ptr;
		ptr = nullptr;
		return nullptr;
	}
	Print_Log("Boot Success!\n");
	return ptr;
}
inline void MainApp::Free()
{

};

void MainApp::PrintMenu()
{
	using namespace std;


	cout << "" << endl;

}
