
int equals(char *a, char *b){
	//se chegar ao final das duas strings, as duas são iguais
	while(*a == *b){
		//como uma já é igual a outra, confirmando pra retornar 1
		if(*a == '\0'){
			return 1;
		}
    //incrementa a posicaoo das duas strings
		a++;
		b++;
	}
	//se não for igual retorna 0
	return 0;
}

int equalsIgnoreCase(char a[], char b[]){

	int i;
	for (i = 0; a[i] && b[i]; ++i){
		//se as letras forem as mesmas, e fazendo um shift com XOR/bitwise ASCII
		if (a[i] == b[i] || (a[i]^32) == b[i] || (a[i]-32) == b[i]){
			continue;
		}else{
			//se tiver tamanho diferente ou não satisfazer a condição acima retorna 0
			return 0;
			break;
		}
	}
	//confirmando condição pra retornar true, sem filtro do shift ascii
	if (a[i] == b[i]){
		//se forem iguais
		return 1;
	}
	//se tiver tamanho diferente ou não satisfazer a condição acima retorna 0
	return 0;
}

void substring(char str1[], char sub[], int posicao_ini, int tamanho){
	int i = 0;
	//enquanto i for menor que o tamanho,
	while (i < tamanho - 1) {
		// a string na posição i recebe o caractere da posição do i
		sub[i] = str1[posicao_ini + i]; //percorrendo a posição da string digitada
		i++;
	}
	sub[i] = '\0'; //setando o fim da string
}

int length(char *string){
	int i = 0;
	while (*string != '\0') {
		i++;
		string++;
	}
	return i;
}

void toUpperCase(char string[]){
	int i;
	for (i = 0; string[i] != '\0'; i++){
		//filtro pra fazer o shift somente se forem caracteres minusculos
		if(string[i]>=97 && string[i]<=122){
			//string recebe ela mesma -32
			string[i] = string[i]-32;
		}
	}

}
void toLowerCase(char string[]){
	int i;
	//enquanto a string não chegar no final, percorre a string
	for (i = 0; string[i] != '\0'; i++){
		//filtro pra fazer o shift somente se forem caracteres maiusculos
		if(string[i]>=65 && string[i]<=90){
			//string recebe ela mesma +32
			//EXEMPLO: a(ASCII 65) + 32 = A = 97
			string[i] = string[i]+32;
		}
	}

}
void replace(char str[], char velhos, char novos){
	int i;
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == velhos){
			str[i] = novos;
		}
	}
}
int lastIndexOf(char string[], char ch){
	int i;
	//i = tamanho da string
	//condição: enquanto o tamanho for >= 0, decrementa, chegando do FIM ao INICIO da string
	for(i = length(string); i >= 0 ; i--){
		if(string[i] == ch){
			return i;

		}
	}
	return -1;
}
int firstIndexOf(char string[], char ch){
	int i;
	for(i = 0; string[i] != '\0'; i++){
		if(string[i] == ch){
			return i;
		}
	}
	return -1;
}

//MAIN ALOCANDO MEMORIA
int receberQuantidade() {
	int total;

	do {
		printf("\nDigite a quantidade de usuários que deseja cadastrar: ");
		fflush(stdin);
		scanf ("%d" , &total);

		if (total <= 0) {
			printf("\nQuantidade inválida");
		}

	} while (total <= 0);

	return total;
}

	setbuf(stdout , NULL);
	String *string;

	int quant = receberQuantidade();
	string = (String *) malloc (quant * sizeof(String));

