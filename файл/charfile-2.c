#include <stdio.h>
#include <stdlib.h>

int main() {
	char temdegt;
	
	FILE *file;
	file = fopen("charfile.txt", "w");
	
	if(file == NULL) {
		printf("Bichih file oldsongui!");
		return 1;
	}
	
	while(!feof(stdin)){
		scanf("%c", &temdegt);
		fputc(temdegt, file);
	}
	fclose(file);
	
	file = fopen("charfile.txt", "r");
	
	if(file == NULL) {
		printf("Unshih file oldsongui!");
		return 1;
	}
	
	while(!feof(file)){
		char c = fgetc(file);
		printf("%c", c);
	}
	fclose(file);
	return 0;
}
