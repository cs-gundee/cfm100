#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *wfile;
	wfile = fopen("hello.txt", "w");
	if(wfile == NULL) {
		printf("Bichih file oldoogui!");
	} 
	else {
		fputc('a', wfile);
	}
	fclose(wfile);
	
	FILE *rfile;
	rfile = fopen("hello.txt", "r");
	if(rfile == NULL) {
		printf("Unshih file oldoogui!");
	} 
	else {
		printf("===%c===", fgetc(rfile));
	}
	fclose(rfile);
	system("pause");
	return 0;
}
