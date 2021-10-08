#include "CBasic_CompoundInterest.h"

CBasic_CompoundInterest::CBasic_CompoundInterest()
{
}

CBasic_CompoundInterest::~CBasic_CompoundInterest()
{
}

CBasic_CompoundInterest * CBasic_CompoundInterest::Instance()
{
	CBasic_CompoundInterest* pInstance = nullptr;
	pInstance = new CBasic_CompoundInterest;

	if (!pInstance)
	{

		delete pInstance;
		pInstance = nullptr;
		Print_Log("Instance Calculator Fail!\n");
		return nullptr;
	}

	return pInstance;
}

void CBasic_CompoundInterest::Free()
{
}
