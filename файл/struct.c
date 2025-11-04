#include <stdio.h>
#include <stdlib.h>

struct ajiltan {
	char ner[20];
	int nas;
	double tsalin;
};

int main() {
	struct ajiltan a[3];
	
	for(int i=0; i<3; i++){
		printf("\najiltan %d ner:", i+1);
		scanf("%s", a[i].ner);
		printf("ajiltan %d nas:", i+1);
		scanf("%d", &a[i].nas);
		printf("ajiltan %d tsalin:", i+1);
		scanf("%lf", &a[i].tsalin);
	}
	
	FILE *file;
	file = fopen("ajiltan.dat", "w");
	
	if(file == NULL) {
		printf("Bichih file oldsongui!");
		return 1;
	}
	
	for(int i=0; i<3; i++) {
		fprintf(file, "%s %d %lf\n", a[i].ner, a[i].nas, a[i].tsalin);
	}
	fclose(file);
	
	file = fopen("ajiltan.dat", "r");	
	if(file == NULL) {
		printf("Bichih file oldsongui!");
		return 1;
	}
		
	for(int i=0; i<3; i++) {
		fscanf(file, "%s %d %lf", a[i].ner, &a[i].nas, &a[i].tsalin);
		printf("==========%s %d %lf", a[i].ner, a[i].nas, a[i].tsalin);
	}
	fclose(file);
	system("pause");
	return 0;
}
