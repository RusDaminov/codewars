int enough(int cap, int on, int wait)
{
	int res;
  
	res = on + wait - cap;
	if (res = 0)
		return 0;
	else if (res > 0)
		return res;
	//Your code goes here
}