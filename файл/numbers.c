#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *file, *outfile;
	file = fopen("numbers.txt", "r");
	outfile = fopen("result.txt", "w");
	
	if(file == NULL || outfile == NULL) {
		printf("Unshih file oldsongui!");
		return 1;
	}
	
	int max, too;
	int count = 0;
	
	while(!feof(file)) {
		fscanf(file, "%d", &too);
		count = count + 1;

		if(max<too)
			max = too;
			
		if(count == 4) {
			fprintf(outfile, "%d ", max);
			count = 0;
		}
	}
	
	if(count > 0) 
		fprintf(outfile, "%d ", max);
	fclose(file);
	fclose(outfile);
	system("pause");
	return 0;
}
