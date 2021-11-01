#include <stdio.h>
int enough(int cap, int on, int wait)
{
	int res;
  
	res = on + wait - cap;
	if (res == 0)
		return 0;
	else if (res > 0)
		return res;
	else if (res < 0)
		return res * -1;
}

int main()
{
	printf("%d", enough(20, 5, 5));
}