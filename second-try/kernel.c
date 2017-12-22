void kmain(void)
{
	const char *str = "nicolas cage is feeling caaaaagetastic!";
	char *vidptr = (char*)0xb8000;	//pointer to the address at the start of video memory
	unsigned int i = 0;
	unsigned int j = 0;

	//clears screen
	while(j < 80 * 25 * 2) {
		//blank char
		vidptr[j] = ' ';
		vidptr[j+1] = 0x05;
		j = j + 2;
	}

	j = 0;

	//writes the string to video memory
	while(str[j] != '\0') {
		vidptr[i] = str[j];
		vidptr[i+1] = 0x05;
		++j;
		i = i + 2;
	}
	return;
}
