#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char col = 0; col < 5; col++) {
    for (char row = 0; row < 7; row++) {
      unsigned short rowBits = font_5x7[c][col];
      unsigned short colMask = 1 << (6-row); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}

void print_char_11x16(char c){
  c -= 0x20; //offset at 20
  for(char row = 0; row <11; row++){  //start row 0 to row 11 
    unsigned short rowBits = font_11x16[c][row]; //get rowbits from the short
    for(char col = 0; col <16; col++){ //from column 0 to column 15
      unsigned short colMask = 1 <<(15 - col); //mask 
      putchar (( rowBits & colMask ) ? '*' : ' '); //sected row/columns will print star or space 
     }
     putchar('\n');
   }
}
   
     
