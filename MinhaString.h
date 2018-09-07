

#ifndef MINHASTRING_H_
#define MINHASTRING_H_

int equals(char a[], char b[]);
int equalsIgnoreCase(char a[], char b[]);
int length(char *string);

void substring(char str1[], char sub[], int posicao_ini, int tamanho);
void toUpperCase(char string[]);
void toLowerCase(char string[]);
void replace(char str[], char velhos, char novos);
void lastIndexOf(char string[], char ch);
void firstIndexOf(char string[], char ch);

struct{
	int (*equals)(char*, char*);
	int (*equalsIgnoreCase)(char*, char*);
	void (*substring)(char*, char*, int, int);
	void (*toUpperCase)(char*);
	void (*toLowerCase)(char*);
	void (*replace)(char*, char*, char*);
	void (*lastIndexOf)(char*, char*);
	void (*firstIndexOf)(char*, char*);
}String = {.equals = equals, .equalsIgnoreCase = equalsIgnoreCase, .length = length,
		.substring = substring, .toUpperCase = toUpperCase, .toLowerCase = toLowerCase,
		.replace = replace, .lastIndexOf = lastIndexOf, .firstIndexOf = firstIndexOf};

//teste

#endif /* MINHASTRING_H_ */
