void ft_putchar(char c);

void print_capital_alphabet(void)
{
  int i;

  i = 0;
  while (i < 26)
	{
	  ft_putchar('A' + i);
	  i = i + 1;
	}
  ft_putchar('\n');
}
