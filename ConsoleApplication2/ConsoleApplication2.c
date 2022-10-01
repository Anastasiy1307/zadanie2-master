#include "Resh.h"
int main()

{
	system("chcp 1251>nul");
	int atoi(const char* str);
	printf("Выберите вариант \n1. Cумма \n2.Разность \n3.Умножение \n4.Деление \n5. Объединение двух строк\n");
	int s;
	scanf_s("%d", &s);
	switch (s)
	{
	case 1: {
		system("cls");
		printf("Сумма\n");
		int a, b;
		printf("Введите число: ");
		scanf_s("%d", &a);
		printf("Введите число: ");
		scanf_s("%d", &b);
		printf("Сумма = %d \n", Summ(a, b));
		system("pause");
		system("cls");
	}
	case 2:{

		system("cls");
		printf("Разность\n");
		int a, b;
		printf("Введите число: ");
		scanf_s("%d", &a);
		printf("Введите число: ");
		scanf_s("%d", &b);
		printf("Разность = %d \n", Razno(a, b));
		system("pause");
		system("cls");
	}
	case 3:{

		system("cls");
		printf("Умножение\n");
		int a, b;
		printf("Введите число: ");
		scanf_s("%d", &a);
		printf("Введите число: ");
		scanf_s("%d", &b);
		printf("Произведение = %d \n", Ymno(a, b));
		system("pause");
		system("cls");
	}
	case 4:{

		system("cls");
		printf("Деление\n");
		int a, b;
		printf("Введите число: ");
		scanf_s("%d", &a);
		printf("Введите число: ");
		scanf_s("%d", &b);
		printf("Частное = %f\n", Delen(a, b));
		system("pause");
		system("cls");
	}
	case 5:{

		system("cls");
		printf("Объединение строк\n");

		char* a = "Добрый день, ";
		char* b = "пора на пары";
		printf("%s\n", associations(a, b));
		system("pause");
		system("cls");
	}
	case 6: {
		char* Str = "652.23brrt"; //Строка для преобразования
		int Num = 0;                //Переменная для записи результата

		//Преобразование строки в число типа int
		Num = atoi(Str);

		//Вывод результата преобразования
		printf("%d\n", Num);

		//Завершение работы программы
		return 0;
	}
    default:{
		printf("Завершение");
	}
	break;
	}

	return 0;
}
char* associations(char* a, char* b)
{
	int l1 = 0, l2 = 0;
	while (a[l1] != '\0')
	{
		l1++;
	}
	while (a[l2] != '\0')
	{
		l2++;
	}
	char* c = calloc(l1 + l2, sizeof(char));
	for (int i = 0; i < l1; i++) {
		c[i] = a[i];
	}
	for (int i = 0; i < l2; i++) {
		c[i + l1] = b[i];
	}
	c[l1 + l2] = '\0';
	return c;
}
