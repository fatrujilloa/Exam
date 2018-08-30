void ft_putchar(char c);

void print_numbers(void)
{
  int i;

  i = 0;
  while (i < 10)
	{
	  ft_putchar('0' + i);
	  i = i + 1;
	}
}
