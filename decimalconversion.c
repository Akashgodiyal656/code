#include<stdio.h>
#include<math.h>
void
dectobin (int n)
{
  int i, choice, t, d = 1, bn = 0, on, decimal = 0;
  int temp = 1;
  while (n != 0)
    {
      d = n % 2;
      n = n / 2;
      bn = bn + d * temp;
      temp = temp * 10;
    }
  printf ("%d", bn);

}

void
newf ()
{
  int n, i, choice, t, d = 1, bn = 0, on, decimal = 0;
    int temp = 1;
  i = 0;
  printf ("enter octal number ");
  scanf ("%d", &n);
  while (n != 0)
    {
      decimal = decimal + (n % 10) * pow (8, i);
      i++;
      n = n / 10;
    }
  i = 1;
  while (decimal != 0)
    {
      bn += ((decimal % 2) * i);
      decimal = decimal / 2;
      i = i * 10;
    }
  printf ("The Binay Value = %d\n", bn);
}

void
main ()
{
  int n, i, choice, t, d = 1, bn = 0, on, decimal = 0;
  int temp = 1;
  printf
    ("hello, user please enter 1 to input decimal value, 2 for input of octal values");
  scanf ("%d", &choice);
  switch (choice)
    {
    case 1:
      printf ("enter the decimal number we will tell its binary");
      scanf ("%d", &n);
      dectobin (n);
      break;
    case 2:
      newf ();
      break;
    default:
      printf ("you have only 2 options 1 or 2");

    }
}