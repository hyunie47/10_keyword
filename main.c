#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME 30
#include <keywords.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()

struct keytab {
	int nums;
};

void count_word(char* word) {
	int i;
	for (i=0; i<NKEYS; i++)
	{
		if (strncmp(word, keywords[i].keyword, strlen(keywords[i].keyword)) == 0)
		{
			keywords[i].num++;
			break;
		}
	}
	printf("%s : %i\n", keywords[i].keyword, keywords[i].num;)
}

while (fget_word(fp, word) != 0)
{
	count_word(word); //word processing
}

void print_word(void)
printf("%s", keyword)

print_word();
