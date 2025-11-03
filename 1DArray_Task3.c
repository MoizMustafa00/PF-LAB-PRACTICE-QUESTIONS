#include<stdio.h>
int main()
{
	int marks[10];
	int pass[10];
	int fail[10];
	int i; 
	int sum_pass = 0, sum_fail = 0, count_pass = 0, count_fail = 0;
	float avg_pass = 0, avg_fail = 0;
	printf("Enter the Quiz Marks (-1 to Stop):\n");
	for(i=0; i<10; i++)
	{
		printf("Student %d = ", i+1);
		scanf("%d", &marks[i]);
		if(marks[i] == -1)
		{
			break;
		}
		else if(marks[i] >= 0 && marks[i] <= 4)
		{
			fail[count_fail] = marks[i];
			sum_fail += fail[count_fail];
			count_fail++;
		}
		else if(marks[i] >= 5 && marks[i] <= 10)
		{
			pass[count_pass] = marks[i];
			sum_pass += pass[count_pass];
			count_pass++;
		}
		else
		{
			printf("Invalid Marks Input!\n");
			break;
		}
	}
	if(count_pass > 0)
	avg_pass = (float)sum_pass / count_pass;
	if(count_fail > 0)
	avg_fail = (float)sum_fail / count_fail;
	printf("Pass Marks:\n");
	for(i=0; i<count_pass; i++)
	{
		printf("%d\n", pass[i]);
	}
	printf("Fail Marks:\n");
	for(i=0; i<count_fail; i++)
	{
		printf("%d\n", fail[i]);
	}
	printf("Pass Average: %.2f\n", avg_pass);
	printf("Fail Average: %.2f\n", avg_fail);
	return 0;
}
