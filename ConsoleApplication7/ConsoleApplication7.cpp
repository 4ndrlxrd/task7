#include <stdio.h>
#include <iostream>

int main()
{
	int i = 1;
	int sum = 0;
	for (; i < 100; i = i + 1)
	{
		sum = sum + i;
		//std::cout << (sum) << std::endl;
		printf("%i+", i);
	}
	sum = sum + i;
	printf("%i=%i", i,sum);
	return 0;
}
//https://github.com/4ndrlxrd/task6.3
