#include <iostream>
using namespace std;

static int numArray[45];

// Use Random - Device
//#include <random>
//int PopNumber()
//{
//	int temp = 0;
//	random_device rd;
//	mt19937_64 mt(rd());
//
//	uniform_int_distribution<int> range(1, 45);
//	temp = range(mt);
//
//	if (numArray[temp - 1] != NULL)
//	{
//		numArray[temp - 1] = NULL;
//		return temp;
//	}
//	else
//		return PopNumber();
//}

// Use Random - Time
#include <time.h>
int PopNumber()
{
	int temp = rand() % 45 + 1;

	if (numArray[temp - 1] != NULL)
	{
		numArray[temp - 1] = NULL;
		return temp;
	}
	else
		return PopNumber();

}

void MakeNumber()
{
	for (int i = 0; i < 45; i++)
		numArray[i] = i + 1;
}

void SwapFunc(int& num, int& sum)
{
	int temp;
	temp = num;
	num = sum;
	sum = temp;
}

void SelectSort(int* lotto)
{
	int min;

	for (int i = 0; i < 5; i++)
	{
		min = i;

		for (int j = i + 1; j < 6; j++)
			if (lotto[min] > lotto[j])
				min = j;

		SwapFunc(lotto[min], lotto[i]);
	}
}

int MatchNumber(int* lotto, int* number)
{
	int count = 0;

	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			if (number[i] == lotto[j])
				count++;

	return count;
}

void ShowNumber(int* lotto)
{
	for (int i = 0; i < 6; i++)
		printf("%d ", lotto[i]);

	printf("\n");
}

int main()
{
	int lotto[6];
	MakeNumber();

	for (int i = 0; i < 6; i++)
		lotto[i] = PopNumber();

	SelectSort(lotto);

	int choiceMode = 0;
	printf("----Lotto Game----\n");
	printf("-Select Game Menu-\n");
	printf("-1. Auto Number  -\n");
	printf("-2. Select Number-\n");
	printf("-3. View Number  -\n");
	printf("-> Choice Num : ");
	scanf_s("%d", &choiceMode);

	switch (choiceMode)
	{
	case 1:
		int autoLotto[6];
		MakeNumber();

		for (int i = 0; i < 6; i++)
			autoLotto[i] = PopNumber();

		SelectSort(autoLotto);

		printf("Match Count : %d \n", MatchNumber(lotto, autoLotto));
		printf("Auto Number : ");
		ShowNumber(autoLotto);
		break;
	case 2:
		int choiceLotto[6];

		for (int i = 0; i < 6; i)
		{
			int pressNum = 0;
			printf("Press 0 Up and 46 Under Number : ");
			scanf_s("%d", &pressNum);

			if (pressNum > 45 || pressNum < 1)
				printf("Error \n");
			else
				choiceLotto[i++] = pressNum;
		}

		SelectSort(choiceLotto);
		printf("Match Count : %d \n", MatchNumber(lotto, choiceLotto));
		printf("Choice Number : ");
		ShowNumber(choiceLotto);
		break;
	case 3:
		printf("Only Show Lotto Number \n");
		break;
	}

	printf("Lotto Number : ");
	ShowNumber(lotto);

	system("pause");

	return 0;
}