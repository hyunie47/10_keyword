#include <stdio.h>
#include <stdlib.h>
int is_whitespace(char c) {
	if (c == ' '||
		c == '\t' ||
		c == '\n' ||
		c == '\r' ||
		c == '(' ||
		c == ')')
		return 1; //������� 
	return 0; //���ǹ��� ����  
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fget_word(FILE* fp, char* word)
{
	char c;
	int cnt;
}

while ((c=getc(fp)) != EOF) {
		if (is_whitespace(c)==0)
			break; // ���ǹ��� ���ڰ� �ƴϸ� ����  
	}
	if (c == EOF) // ���� ������ �� ���� 0 �� ȯ  
		return 0;
	
	cnt=0; // ���ǹ��� ���� �� ��  
	word[cnt++] = c; //�Ʊ� ���� ù���� �Է�  
	word[cnt] = '\0';
	
	while ((word[cnt]=fetc(fp)) != EOF) { // ���ǹ��� ���ڰ� ���� ������ ���� �ݺ�  
		if (is_whitespace(word[cnt]) == 1) //���� ���ڸ� ���� �� ����ϰ� ����  
		{
			word[cnt]= '\0'; //���ڿ� ��  
			break; //���ǹ��� ���ڸ� �� ��  
		}
		cnt++;
	}
	
	return cnt; //���� ���� �� ��ȯ  
	
	while (fget_word(fp, word) != 0)
	{
		printf("%s\n", word); //word processing, test code
	}
	return 0;
}
