#include "sum.h"

int sum(int n)
{
	int result=0;
	int i;
	for (i=1;i<=n;i++)
		result+=i;
	return result;
}

