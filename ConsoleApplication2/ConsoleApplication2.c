#include "Resh.h"
int main()
#define A 10
#define B 5
#define N(a) (a*a)
{
	system("chcp 1251>nul");
	int atoi(const char* str);
	N(5);

		printf("Сумма = %d \n", Summ(A, B));
		

		printf("Разность = %d \n", Razno(A, B));	
	
		
		printf("Произведение = %d \n", Ymno(A, B));

	
		printf("Частное = %f\n", Delen(A, B));

		
		printf("Объединение строк\n");
		char* a = "Добрый день, ";
		char* b = "пора на пары";
		printf("%s\n", associations(a, b));

		
		char* Str = "652.23brrt"; //Строка для преобразования
		int Num = 0;                //Переменная для записи результата

		//Преобразование строки в число типа int
		Num = atoi(Str);

		//Вывод результата преобразования
		printf("%d\n", Num);

		//Завершение работы программы
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
