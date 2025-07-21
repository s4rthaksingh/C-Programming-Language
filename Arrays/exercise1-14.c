#include <stdio.h>

void main(){
	int c;
	int charcount[26];	
	for(int i = 0; i < 26 ; i++) charcount[i] = 0;
	while((c = getchar()) != EOF)
		if(c >= 'a' && c <= 'z')
			++charcount[c-'a'];
	for(int i = 0; i < 26; i++)
	{
		if(i==0) putchar('\n');
		printf("%c : ", (char)(i+97));
		for(int j = 0; j < charcount[i]; j++)
			putchar('*');
		putchar('\n');
}
}
