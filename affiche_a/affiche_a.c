#include <unistd.h>

void affiche_a(void)
{
  write(1, "a", 1);
  write(1, "\n", 1);
}
