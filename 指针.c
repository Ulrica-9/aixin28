#include <stdio.h>
//输出3个学生各学科，计算总平均分，输出第N个学生成绩
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
//			printf("第%d个学生平均分为:",m );
//			avg = (float)sum / (float)4;
//			printf("average is %.2f", avg);
//			printf("\n");
//			sum=0;
//		}*/
//		
//	
//	}
//	printf("\n");
//	printf("总平均分为:");
//	avg = (float)sum / (float)n;
//	printf("average is %.2f", avg);
//
//
//}
////输出学生的成绩
void student_grade(int(*p)[4])
{
	int i = 0;
	int j = 0;

	for (;i<=2;i++)
	{
		printf("第%d个学生的成绩为:", i + 1);
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
			printf("不及格同学的成绩为:");
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
	//输出平均值
	//avg_my(*num,12);
	//printf("\n");
	////输出各个学生的成绩
	student_grade(num);
	//输出不及格同学的所有成绩并输出他所在的序号
	student_loser(num);

	return 0;
}