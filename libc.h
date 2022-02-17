char *vidptr = (char*)0xb8000

unsigned int i = 0;

unsigned int j = 0;

void writeline(const char *str) 
{
    while(str[j] != '\0') {
		/* ascii displaying */
		vidptr[i] = str[j];
		vidptr[i+1] = 0x07;
		++j;
		i = i + 2;
	}
    return;
}

void clearscreen()
{
    while(j < 80 * 25 * 2) {
		/* пустой символ */
		vidptr[j] = ' ';
		/* байт атрибутов */
		vidptr[j+1] = 0x07; 		
		j = j + 2;
	}

	j = 0;
    return;
}