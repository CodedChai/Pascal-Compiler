#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[]){
	//argc and argv ae for command line usage. Can go ahead and remove those.
	FILE * test;

	test_read = fopen("C:Users/...", "r");
	int count = 0;

	while(fgetc(test_read)!=EOF){
		count++;
	}

	char buffer;
	buffer = (char *)malloc(count);

	rewind(test_read);

	for (int i = 0; i < count; ++i)
	{
		// get character, move forward one
		buffer[i] = fgetc(test_read);
		// buffer will consist of numbers that represent the ascii number
	}

	fclose(test_read);
	free(buffer);

	return 0;
}