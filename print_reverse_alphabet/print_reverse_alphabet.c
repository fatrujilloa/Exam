void ft_putchar(char c);

void print_reverse_alphabet(void)
{
  int i;

  i = 0;
  while (i < 26)
	{
	  ft_putchar('z' - i);
	  i = i + 1;
	}
}
