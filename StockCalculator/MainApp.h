#pragma once
#ifndef  __MAIN_APP_H__
#define __MAIN_APP_H__

class MainApp final
{
private:
	explicit  MainApp();
	explicit MainApp(const MainApp& _Copy) = default;
	virtual ~MainApp() = default;
private:
	_Event SetUpMainApp();
public:
	_Event UpdateApp();

public:
	inline void StopUpdate() { m_bCheckUpdate = false; }

private:
	_bool m_bCheckUpdate;


private:
	_int PrintMenu();


public:
	static MainApp* InitApp(void);
	void Free(void);
private:

	
};

#endif // ! __MAIN_APP_H__

