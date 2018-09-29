#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	int tc = 0;
	scanf("%d", &tc);

	while(tc--) {
		char input[1000];
		int len = 0;
		int charlen = 0;
		int speciallen = 0;
		int digitlen = 0;

		// take input string
		scanf("%s", input);
		len = strlen(input);

		char chars[len];
		char special[len];
		char digits[len];

		int i = 0;
		for (i = 0; i < len; i++) {
			if(isalpha(input[i])) {
				chars[charlen++] = input[i];
			} else if (isdigit(input[i])) {
				digits[digitlen++] = input[i];
			} else {
				special[speciallen++]= input[i];
			}
		}
		chars[charlen] = '\0';
		digits[digitlen] = '\0';
		special[speciallen] = '\0';
		printf("%s\n%s\n%s\n", chars, digits, special);
	}
	return 0;
}