#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>

// 75, 77
int main() {
	int a[10] = { 0, }, b=0, c, temp;

	for (int i = 0; i < 10;i++) a[i] = i;

	while (1) {
		system("cls");
		for (int i = 0; i < 10; i++) printf("%d ", a[i]);
		c = _getch();
		if (c == 75 && b < 9) {
			a[b] = a[b + 1];
			a[b + 1] = 0;
			b++;
		}
		else if (c == 77 && b > 0) {
			a[b] = a[b - 1];
			a[b - 1] = 0;
			b--;
		}

	}
	
	
	scanf_s("%d", &b);
	return 0;
}