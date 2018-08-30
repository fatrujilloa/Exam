void ft_putchar(char c);

void print_alphabet(void)
{
  int i;

  i = 0;
  while (i < 26)
	{
	  ft_putchar('a' + i);
	  i = i + 1;
	}
}
