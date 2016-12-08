#include <stdio.h>

void HanoiTowerMode(int num, char from, char by, char to)
{
	if (num == 1)
	{
		printf("Circle1 moves from %c to %c \n ", from, to);
	}
	else
	{
		HanoiTowerMode(num - 1, from, to, by);
		printf("Circle%d moves from %c to %c \n", num, from, to);
		HanoiTowerMode(num - 1, by, from, to);
	}
}

int main()
{
	HanoiTowerMode(3, 'A', 'B', 'C');
	return 0;
}