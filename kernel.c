/*
*
*    kernel.c
*
*    dnablaOS / Rewrited
*        (c) atdelta, 2022
*
*/
#include "libc.h"

void kmain(void)
{
	const char *str = "dnablaOS - Started";
	char *vidptr = (char*)0xb8000; 	//VidMemory starts here
	unsigned int i = 0;
	unsigned int j = 0;

	/* this cycle clears screen */
	while(j < 80 * 25 * 2) {
		/* пустой символ */
		vidptr[j] = ' ';
		/* байт атрибутов */
		vidptr[j+1] = 0x07; 		
		j = j + 2;
	}

	j = 0;

	/* in this cycle string writing into VidMemory */
	while(str[j] != '\0') {
		/* ascii displaying */
		vidptr[i] = str[j];
		vidptr[i+1] = 0x07;
		++j;
		i = i + 2;
	}

	return;
}