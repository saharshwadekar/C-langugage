#include <stdio.h>
// #include <conio.h>

int
main ()
{
  // clrscr();
  int c, x, y, d, de;
  int dist = 60;

  for (c = 1; c <= 20; c++)	//drawing the barrels
    {
//                 x, y
      gotoxy (c, 5);		// for the upper line of barrel
      printf ("=");
      gotoxy (c, 7);		// bottom line of barrel
      printf ("=");
    }
  for (x = 2; x <= dist; x++)	// for shooting the bullet
    {
      gotoxy (x, 6);
      printf (">");
      for (d = 1; d <= 32000; d++)	// delay outer loop
	{
	  for (de = 1; de <= 5; de++);	//delay inner loop
	}
      gotoxy (x, 6);		// to clear the previous bullet position
      printf (" ");

    }
//      getchar();
  return 0;

}

