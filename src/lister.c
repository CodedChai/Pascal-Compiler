#include <string.h>
#include <stdio.h>

static void create_listing();

int main(){
    create_listing();
	return 0;
}

static void create_listing(){
	FILE * source_file;
	FILE * listing_file;

	char buffer[72];

	source_file = fopen("..\\IO Files\\Pascal_Source.p", "r");
	listing_file = fopen("Pascal_Source_Listing.txt", "w");

	int line_num = 1;
	fgets(buffer, 72, (FILE*) source_file);

	while(!feof(source_file)){
		fprintf(listing_file, "%-4d", line_num++);
		fputs(buffer, listing_file);
		fgets(buffer, 72, (FILE*) source_file);
	}

	fclose(source_file);
	fclose(listing_file);
}
