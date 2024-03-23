/*
* FILE : f7.cpp
* PROJECT : SENG1000 - Focused Assignment #7
* PROGRAMMER : Ayushkumar Bhupatbhai Rakholiya
* FIRST VERSION : 2024-03-19
* DESCRIPTION :
*   This program give you practice at creating text and binary files.
*/

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
	//Creating and writing to binary file
	FILE* binaryFile = fopen("myEvenDatalist.data", "wb");
	if (binaryFile == NULL) {
		printf("Error opening binary file for writing.\n");
		return 1;

		// Loop through the array and write only even numbers
		for (int i = 0; 1 < sizeof(KBinaryData) / sizeof(KBinaryData[0]); i++) {
			if (KBinaryData[i] % 2 == 0) { // only fwrite (SkBinaryData[i],
				fwrite(&KBinaryData[i], sizeof(unsigned short), 1, binaryFile);
				printf("%p", &KBinaryData[i]);
			}
		}
		fclose(binaryFile);
		return 0;
	}
}