#include <stdio.h>

typedef struct tagCalculate
{

}DATA_VALUE;

void NormalCalculate(void);
void NotNormalCalculate(void);
void ChoiseMenu(void);

int main(void)
{
	printf("hello world \n");
	
	ChoiseMenu();
	
	return 0;
}

void ChoiseMenu(void);
{
	NotNormalCalculate();
	
}
void NormalCalculate(void)
{
	
}
void NotNormalCalculate(void)
{
	double value1=0;
	double per1=0;
	double per2=0;
	double value2=0;
	double result=0;
	double temp=0;
	int j=0;
	int k=0;

	printf("\n원금 입력(만원 단위): ");
	scanf("%lf", &value1);
	printf("\n 원금 = %lf \n", value1);
	
	printf("\n이율 입력: ?%% \n");
	scanf("%lf", &per1);
	per1 = per1/100;
	printf("\n 이율 = %g%% \n", per1*100);
	
	printf("\n추가원금 입력: ");
	scanf("%lf", &value2);
	printf("\n 추가원금 = %lf \n", value2);
	
	printf("\n계산할 년도 입력: ");
	scanf("%d", &j);
	printf("\n 년 = %d년 \n", j);
	
	printf("\n몇 년 뒤까지 일하시겠습니까?\n");
	scanf("%d", &k);
	printf("\n 년 = %d년 \n", k);
	
	for(int i=0 ; i<j; i++)
	{
		if(i==0)
		{
			printf("\n%d년째\n", i+1);
			temp = value1 + value1*per1;
			temp= (int)(temp*10);
			result= temp/10;
			printf("원금 = %g만원\n", value1);		
			printf("result = %g만원\n", result);
			temp=((result-value1)/value1)*100;
			per2=(int)(temp*10);
			per2= per2/10;
			printf("이익률 = %g%%\n", per2);
		}
		else if(i>k-1)
		{
			printf("\n%d년째 (퇴직)\n", i+1);
			value1=result;
			temp = value1 + value1*per1;
			temp= (int)(temp*10);
			result= temp/10;
			printf("원금 = %g만원\n", value1);		
			printf("result = %g만원\n", result);
			temp=((result-value1)/value1)*100;
			per2=(int)(temp*10);
			per2= per2/10;
			printf("이익률 = %g%%\n", per2);
		}
		
		else
		{
			printf("\n%d년째\n", i+1);
			value1=result;
			temp= value1*per1+value2+value1;
			temp= (int)(temp*10);
			result= temp/10;
			printf("원금 = %g만원\n", value1);		
			printf("result = %g만원 \n", result);
			temp=((result-value1)/value1)*100;
			per2=(int)(temp*10);
			per2= per2/10;
			printf("이익률 = %g%%\n", per2);
		}
	};
	
}		



