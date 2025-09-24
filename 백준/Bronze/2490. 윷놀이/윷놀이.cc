#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int map[12] = { 0 };

	for (int i = 0; i < 12; i++) {
		scanf("%d", &map[i]);
	}

	for (int i = 0; i < 12; i+=4) {
		int sum = 0;

		if (map[i] == 0) sum++;
		if (map[i+1] == 0) sum++;
		if (map[i+2] == 0) sum++;
		if (map[i+3] == 0) sum++;

		if (sum == 1) printf("A\n");
		else if (sum == 2) printf("B\n");
		else if (sum == 3) printf("C\n");
		else if (sum == 4) printf("D\n");
		else printf("E\n");
	}

	return 0;
}