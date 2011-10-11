// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>

#include "TutorialConfig.h"

double mySqrt(double value);

int main (int argc, char *argv[])
{
  if (argc < 2)
    {
      fprintf(stdout,"%s Version: %d.%d\r\n",
	      argv[0],
	      Tutorial_VERSION_MAJOR,
	      Tutorial_VERSION_MINOR);
      fprintf(stdout,"Usage: %s number\r\n",argv[0]);
      return 1;
    }
  double inputValue = atof(argv[1]);
  double outputValue = mySqrt(inputValue);
  fprintf(stdout,"The square root of %g is %g\r\n",
          inputValue, outputValue);
  return 0;
}
