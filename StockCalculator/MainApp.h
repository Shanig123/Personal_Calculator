#pragma once
#ifndef  __MAIN_APP_H__
#define __MAIN_APP_H__

#include "TotalInclude.h"


class MainApp final
{
private:
	explicit  MainApp() {};
	explicit MainApp(const MainApp& _Copy) = default;
	virtual ~MainApp() = default;
public:
	inline MainApp* InitApp();
	inline void Free();
public:
	void PrintMenu();

private:


	
};

#endif // ! __MAIN_APP_H__

