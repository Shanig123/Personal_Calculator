#pragma once
#ifndef __CBASIC_COMPOUND_INTEREST_H__
#define __CBASIC_COMPOUND_INTEREST_H__

#include "TotalInclude.h"

class CBasic_CompoundInterest
{
private:
	explicit CBasic_CompoundInterest();
	virtual ~CBasic_CompoundInterest();
public:
	static CBasic_CompoundInterest* Instance();
	void Free();
};


#endif // !__CBASIC_COMPOUND_INTEREST_H__


//void ChoiseMenu(void);
//{
//	NotNormalCalculate();
//
//}
//void NormalCalculate(void)
//{
//
//}
//void NotNormalCalculate(void)
//{
//	double value1 = 0;
//	double per1 = 0;
//	double per2 = 0;
//	double value2 = 0;
//	double result = 0;
//	double temp = 0;
//	int j = 0;
//	int k = 0;
//
//	printf("\n���� �Է�(���� ����): ");
//	scanf("%lf", &value1);
//	printf("\n ���� = %lf \n", value1);
//
//	printf("\n���� �Է�: ?%% \n");
//	scanf("%lf", &per1);
//	per1 = per1 / 100;
//	printf("\n ���� = %g%% \n", per1 * 100);
//
//	printf("\n�߰����� �Է�: ");
//	scanf("%lf", &value2);
//	printf("\n �߰����� = %lf \n", value2);
//
//	printf("\n����� �⵵ �Է�: ");
//	scanf("%d", &j);
//	printf("\n �� = %d�� \n", j);
//
//	printf("\n�� �� �ڱ��� ���Ͻðڽ��ϱ�?\n");
//	scanf("%d", &k);
//	printf("\n �� = %d�� \n", k);
//
//	for (int i = 0; i < j; i++)
//	{
//		if (i == 0)
//		{
//			printf("\n%d��°\n", i + 1);
//			temp = value1 + value1 * per1;
//			temp = (int)(temp * 10);
//			result = temp / 10;
//			printf("���� = %g����\n", value1);
//			printf("result = %g����\n", result);
//			temp = ((result - value1) / value1) * 100;
//			per2 = (int)(temp * 10);
//			per2 = per2 / 10;
//			printf("���ͷ� = %g%%\n", per2);
//		}
//		else if (i > k - 1)
//		{
//			printf("\n%d��° (����)\n", i + 1);
//			value1 = result;
//			temp = value1 + value1 * per1;
//			temp = (int)(temp * 10);
//			result = temp / 10;
//			printf("���� = %g����\n", value1);
//			printf("result = %g����\n", result);
//			temp = ((result - value1) / value1) * 100;
//			per2 = (int)(temp * 10);
//			per2 = per2 / 10;
//			printf("���ͷ� = %g%%\n", per2);
//		}
//
//		else
//		{
//			printf("\n%d��°\n", i + 1);
//			value1 = result;
//			temp = value1 * per1 + value2 + value1;
//			temp = (int)(temp * 10);
//			result = temp / 10;
//			printf("���� = %g����\n", value1);
//			printf("result = %g���� \n", result);
//			temp = ((result - value1) / value1) * 100;
//			per2 = (int)(temp * 10);
//			per2 = per2 / 10;
//			printf("���ͷ� = %g%%\n", per2);
//		}
//	};
//
//}