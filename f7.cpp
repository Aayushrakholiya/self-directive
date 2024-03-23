#include <stdio.h>

const unsigned short KBinaryData[11] = { 26946, 24942, 31090, 25632, 29793, 8289, 28518, 8306, 28537, 33141, 39308 };

#pragma warning (disable : 4996) // Disabling warning for fopen) in Visual Studio

int main() {
	// Creating and writing to text file
	FILE* textFile = fopen("myTextFile.txt", "w");
	if (textFile == NULL) {
		printf("Error opening text file for writing.\n");
		return 1;
	}
	fprintf(textFile, "This is line 1.\nThis is line 2.\n");
	fclose(textFile);
