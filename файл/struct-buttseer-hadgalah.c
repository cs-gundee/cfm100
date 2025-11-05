#include <stdio.h>
#include <stdlib.h>

struct s {
	int m;
	char n[10];
};

int main(){
	FILE *file;
	file = fopen("st.dat", "w");
	if(file == NULL) {
		return 1;
	}
	
	struct s ss[2];
	
	for(int i=0; i<2; i++){
		scanf("%d %s", &ss[i].m, ss[i].n);
	}
	
	for(int i=0; i<2; i++){
		fwrite(&ss[i], sizeof(struct s), 1, file);
	}
	fclose(file);
	
	
	file = fopen("st.dat", "r");
	if(file == NULL) {
		return 1;
	}
	
	for(int i=0; i<2; i++){
		fread(&ss[i], sizeof(struct s), 1, file);
	}
	
	for(int i=0; i<2; i++){
		printf("=== %d %s\n", ss[i].m, ss[i].n);
	}
	fclose(file);
	
	system("pause");
	return 0;
}
