void ft_putchar(char c);

void print_reverse_numbers(void)
{
  int i;

  i = 0;
  while (i < 10)
	{
	  ft_putchar('9' - i);
	  i = i + 1;
	}
  ft_putchar('\n');
}
