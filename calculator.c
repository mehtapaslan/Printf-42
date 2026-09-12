
#include "ft_printf.h"
#include <stdio.h>

int	ft_specif(va_list lst, char format, int *result)
{
	if (format == '+')
		*result += va_arg(lst, int);
	else if (format == '-')
		*result -= va_arg(lst, int);
	else if (format == '*')
		*result *= va_arg(lst, int);
	else if (format == '/')
	{
		int divisor = va_arg(lst, int);
        if (divisor != 0)
            *result /= divisor;
	}
	return(*result);
}

int ft_issign(char c)
{
	if(c == '+' || c == '-' || c == '*' || c == '/')
		return(1);
	return(0);
}

int calculate(char *op, int count, ...)
{
	va_list lst;
	int result;
	
	va_start(lst, count);
	result = va_arg(lst,int);
	while(*op)
	{
		if(ft_issign(*op))
			ft_specif(lst, *op, &result);
		op++;
	}
	va_end(lst);
	return(result);
}

int main()
{
	int sum = calculate("+-/", 4, 4, 3, 2, 5);
	ft_printf("%d", sum);
}