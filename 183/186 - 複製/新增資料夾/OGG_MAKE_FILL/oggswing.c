#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "oggswing.h"

int main(int argc, char *argv[])
{
  FILE *in;
  FILE *out;
  char line[999999];

  if (argc != 3)
    error("�Ы��w��ӰѼơC");

  if (!(in = fopen(argv[1], "r")))
    error("���L�k���}�C");
  
  if (!(out = fopen(argv[2], "w")))
    error("���L�k���}�C");

  while (fscanf(in, "%99[^\n]\n", line) == 1) {
    fprintf(out, "%s\n", line);
  }
  fprintf(out, "make tool\n");
  
  return (0);
}

void error(char *s)
{
  fprintf(stderr, "%s\n", s);
  exit (1);
}
