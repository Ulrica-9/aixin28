#include <stdio.h>
//���3��ѧ����ѧ�ƣ�������ƽ���֣������N��ѧ���ɼ�
//void avg_my(int *p,int n)
//{
//	int* p_end = p +n - 1;
//	int sum = 0;
//	/*int m = 0;
//	int i = 0;*/
//	float avg=0.0;
//	for (;p<=p_end;p++)
//	{
//		
//		sum = sum + *p;
//		/*i = i + 1;
//		if ((p_end-p)%4==0)
//		{
//			m = m + 1;
//			printf("��%d��ѧ��ƽ����Ϊ:",m );
//			avg = (float)sum / (float)4;
//			printf("average is %.2f", avg);
//			printf("\n");
//			sum=0;
//		}*/
//		
//	
//	}
//	printf("\n");
//	printf("��ƽ����Ϊ:");
//	avg = (float)sum / (float)n;
//	printf("average is %.2f", avg);
//
//
//}
////���ѧ���ĳɼ�
void student_grade(int(*p)[4])
{
	int i = 0;
	int j = 0;

	for (;i<=2;i++)
	{
		printf("��%d��ѧ���ĳɼ�Ϊ:", i + 1);
		for (j = 0; j <= 3; j++)
		{
			
			printf("%d\t", *(*(p + i) + j));
		}
		printf("\n");

	}
}
void student_loser(int(* p)[4])
{
	int i = 0;
	int j = 0;
	int floag=0;
	
	for (i=0; i <= 2; i++)
	{
		floag = 0;
		for (j = 0; j <= 3; j++)
		{
			if (*(*(p + i) + j)<60)
			{
				floag = 1;
			}
		}
		if (1 == floag)
		{
			printf("������ͬѧ�ĳɼ�Ϊ:");
			for (j = 0; j <= 3; j++)
			{

				printf("%d\t", *(*(p + i) + j));
			}
			printf("\n");
		}
	}
}
int main(void)
{
	int num[3][4] = { {55,77,88,99} ,{88,90,87,78}, {93,79,82,82} };
	//���ƽ��ֵ
	//avg_my(*num,12);
	//printf("\n");
	////�������ѧ���ĳɼ�
	student_grade(num);
	//���������ͬѧ�����гɼ�����������ڵ����
	student_loser(num);

	return 0;
}