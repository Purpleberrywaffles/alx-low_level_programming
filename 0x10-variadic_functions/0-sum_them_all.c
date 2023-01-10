int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	int t = 0, sum = 0;

	for(t = 0; t < n; t++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	if(n != 0)
	{
		return sum;
	}
	else
	{
		return 0;
	}
}
