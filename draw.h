#ifndef DRAW_INCLUDED
#define DRAW_INCLUDED

void print_triangle(int startCol, int size);
void print_square(int startCol, int size);
void print_arrow(int aleftCol, int asize, int sheight, int swidth);
void print_char_5x7(char c);
void print_char_11x16(char c);

extern const unsigned short font_11x16[][11];
extern const unsigned char font_5x7[][5];

#endif

