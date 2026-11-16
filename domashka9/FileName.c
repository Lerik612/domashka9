#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, ".UTF-8");
	int side;
	char sym;
	printf("=== Задание 1 ===\n");
	printf("Введите сторону: ");
		scanf("%d", &side);
		printf("Введите символ, которым будет выполнен контур: ");
		scanf(" %c", &sym);
		printf("\n Фигура: %dна%d\n", side, side);
		for (int i = 1; i <= side; i++) 
		{
			for (int j = 1; j <= side; j++)
			{
				printf(" %c", sym);
			}
			printf("\n");
		}


	return 0;
}