#pragma once
#ifndef __TOTAL_INCLUDE_H__
#define __TOTAL_INCLUDE_H__

#include <iostream>

#include "windows.h"

#ifdef _DEBUG

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#ifndef DBG_NEW 

#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ ) 
#define new DBG_NEW 

#endif

#endif // _DEBUG


#include "Typedef.h"
#include "Function.h"
#include "Define.h"
#include "Extern.h"


#endif // !__TOTAL_INCLUDE_H__
