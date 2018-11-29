#include <stdio.h>
#include <stdlib.h>
int is_whitespace(char c) {
	if (c == ' '||
		c == '\t' ||
		c == '\n' ||
		c == '\r' ||
		c == '(' ||
		c == ')')
		return 1; //공백글자 
	return 0; //유의미한 글자  
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fget_word(FILE* fp, char* word)
{
	char c;
	int cnt;
}

while ((c=getc(fp)) != EOF) {
		if (is_whitespace(c)==0)
			break; // 무의미한 문자가 아니면 멈춤  
	}
	if (c == EOF) // 파일 끝으로 간 경우는 0 반 환  
		return 0;
	
	cnt=0; // 유의미한 글자 저 장  
	word[cnt++] = c; //아까 읽은 첫글자 입력  
	word[cnt] = '\0';
	
	while ((word[cnt]=fetc(fp)) != EOF) { // 무의미한 글자가 나올 때까지 저장 반복  
		if (is_whitespace(word[cnt]) == 1) //공백 문자면 받은 거 취소하고 나감  
		{
			word[cnt]= '\0'; //문자열 끝  
			break; //무의미한 문자면 멈 춤  
		}
		cnt++;
	}
	
	return cnt; //읽은 글자 수 반환  
	
	while (fget_word(fp, word) != 0)
	{
		printf("%s\n", word); //word processing, test code
	}
	return 0;
}
