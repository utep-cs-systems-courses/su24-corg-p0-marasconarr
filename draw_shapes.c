#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

//print an arrow

void print_arrow(int aleftCol, int asize, int sheight, int swidth){
  for (int row = 0;row <= asize; row++){
      int minCol = aleftCol + asize - row, maxCol = aleftCol + asize +row;
      int col;
      for (col = 0 ; col < minCol; col++)putchar (' ');
      for (     ; col <= maxCol; col++) putchar('*');
      putchar('\n');
   }
    
  for (int row = 0; row < sheight;row++ ){
    int col;
    for(col=0;col < aleftCol + asize; col++)putchar(' ');
    for(    ; col < aleftCol +asize + swidth; col++)putchar('*');
    putchar('\n');
    
   }
}
