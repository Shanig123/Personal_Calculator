#pragma once
#ifndef  __MAIN_APP_H__
#define __MAIN_APP_H__

class MainApp final
{
private:
	explicit  MainApp();
	explicit MainApp(const MainApp& _Copy) = default;
	virtual ~MainApp() = default;
public:
	_uint UpdateApp();

public:
	inline void StopUpdate() { m_bCheckUpdate = false; }

private:
	_bool m_bCheckUpdate;


private:
	_int PrintMenu();


public:
	static MainApp* InitApp(void);
	void Free(void);

	
};

#endif // ! __MAIN_APP_H__

