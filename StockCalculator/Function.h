#pragma once

#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#define PRINT_LOG(message) cout<<message<<endl

inline void Print_Log(const _char* cMessage)
{
	using namespace std;
	cout << cMessage << endl;
}

#endif // !__FUNCTION_H__

