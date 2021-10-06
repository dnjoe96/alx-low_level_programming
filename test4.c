#include <stdio.h>

int print_d(int a)
{
	unsigned int num_abs, aux_Num, count_Zero;

	if (a < 0)
	{
		a = a * -1; // trial
		putchar(45); // trial
	}
	
	
	aux_Num = a; // trial
	count_Zero = 1;
	//printf("First while\n");
	while (aux_Num > 9)
	{
		aux_Num /= 10;
		count_Zero *= 10;
		
		//printf("auxNum = %d, count_Zero = %d\n", aux_Num, count_Zero);
	}

	printf("Second while\n");
	while (count_Zero >= 1)
	{
		putchar(((a / count_Zero) % 10) + '0'); // trialS
		count_Zero /= 10;
		//printf("Inside: %d, count_Zero = %d\n", (a / count_Zero) % 10, count_Zero);
	}
	return (0);
}

int main(void)
{
    int num = 233533443;
    print_d(num);
    
    return 0;
}
