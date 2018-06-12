#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<math.h>
#include<Windows.h>

void main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);
	int n = 0;
start:
	printf("Введите номер задания: ");
	scanf("%d", &n);

	if (n == 2) {
		printf("2.	Дано целое число от 1 до 365. Определить, какой день недели выпадает на это число, если 1 января – понедельник. \n");

		int a = 0;

		printf("Введите число от 1 до 365: \t");
		scanf("%d", &a);

		switch (a % 7)
		{
		case 0:
			printf("Воскресенье \n");
			break;
		case 1:
			printf("Понедельник \n");
			break;
		case 2:
			printf("Вторник \n");
			break;
		case 3:
			printf("Среда \n");
			break;
		case 4:
			printf("Четверг \n");
			break;
		case 5:
			printf("Пятница \n");
			break;
		case 6:
			printf("Суббота \n");
			break;
		}
	}
	else if (n == 3) {
		printf("3.	Дано трехзначное число. Определить: a.является ли сумма его цифр двухзначным числом; \nb.является ли произведение его цифр трехзначным числом \n");

		int a = 0, a1=0, a2=0, a3=0;
		
		printf("Введите трехзначное число: \t");
		scanf("%d", &a);
		
		if (a >= 100 && a < 1000) 
		{
			a1 = a % 10;
			a2 = (a % 100) /10;
			a3 = a / 100;

			printf("a1=%d, a2=%d, a3=%d \n", a1, a2, a3);

			int sum = a1 + a2 + a3;
			int sum2 = a1* a2* a3;

			if (sum >= 10 && sum < 100)
			{
				printf("Да, сумма чисел является двухзначным числом \n");
			}
			else if (sum2 >= 100 && sum2 < 1000)
			{
				printf("Да, произведение чисел является трехзначным числом \n");
			}
			else
			{
				printf("Нет \n");
			}
		}
	}
	else if (n == 4) {
		printf("4.	Рейтинг бакалавра заочного отделения при поступлении в магистратуру определяется средним баллом по диплому, умноженным на коэффициент стажа работы по специальности, который равен: нет стажа – 1, меньше 2 лет – 13, от 2 до 5 лет – 16. Составить программу расчета рейтинга при заданном среднем балле диплома (от 3 до 5) и вывести сообщение о приеме в магистратуру при проходном балле 45 \n");

		float average = 0, rating=0;
		int pass = 45, exp = 0;

		printf("Введите средний балл: \t");
		scanf("%d", &average);

		if (average >= 3 && average <= 5)
		{

			printf("Введите стаж работы: \t");
			scanf("%d", &exp);

			if (exp == 0)
				rating = average * 1;
			else if (exp < 2)
				rating = average * 13;
			else if (exp >= 2 && exp <= 5);
			rating = average * 16;

			printf("rating = %d\n", rating);

			if (rating >= pass)
				printf("Accept \n");
			else
				printf("No \n");
		}
		else
			printf("Средний балл должен быть от 3 до 5 \n");
	}
	else if (n == 6) {
		printf("6.	Ввести число от 1 до 31. Определить ближайшую (следующую) дату полнолуния или новолуния (лунных месяц содержит 28 дней), если последнее полнолуние было 27 август \n");

		int a = 0, x=0, x1=0;

		printf("Введите число от 1 до 31: \t");
		scanf("%d", &a);

		if (a >= 1 && a <= 31)
		{
			x = 31 - 27;
			x1 = 28 - x;

			printf("%d\n", x1);

			if (a >= x1)
				printf("Полнолуние \n");
			else if (a < (x1 / 2))
				printf("Новолуние \n");
			else
				printf("Нет \n");
		}
	}
	else if (n == 7) {
		printf("1.	Написать программу, которая по коду города и длительности переговоров вычисляет их стоимость и результат выводит на экран: Алматы-код 7272, 25тенге; Шымкент-код 7252, 18тенге; Астана-код 7172 13тенге; Актау-код 7292, 11тенге. \n");

		float time = 0, total=0;
		int code = 0;

		printf("Введите длительность переговоров: ");
		scanf("%f", &time);

		printf("Введите код города: ");
		scanf("%d", &code);

		switch (code)
		{
		case 7272:
			total = time * 25;
			break;
		case 7252:
			total = time * 18;
			break;
		case 7172:
			total = time * 13;
			break;
		case 7292:
			total = time * 11;
			break;
		default:
			total = time * 120;
		}
		printf("Ваша стоимость переговоров составляет: %f\n", total);
	}
	else if (n == 8) {
		printf("2.	Написать программу, которая в зависимости от характера ветра выдает сообщение о его скорости от 1до 4 м/с - слабый (1); от 5-10 м/c умеренный (2); от 9-18 м/c - сильный (3); больше 19 м/c - ураганный (4). \n");

		float wind = 0;

		wind = (float) (1 + rand() % 100) / (1 + rand() % 10);

		printf("Wind power = %f\n", wind);

		if (wind >= 1 && wind <= 4)
			printf("Weak wind \n");
		else if (wind >= 5 && wind < 10)
			printf("Middle wind \n");
		else if (wind >= 9 && wind <= 18)
			printf("Strong wind \n");
		else if (wind >= 19)
			printf("Hurricane! \n");
	}
	else if (n == 9) {
		printf("3.	Почтовый автомат предлагает поздравительные открытки на три темы (1Новогодние, 2 - С Днем Рождения, 3 - С Днем Защитника Отечества) в трех вариантах (a, b, c) по цене 2 тенге.  Ввести с клавиатуры номер темы, вариант, и купюру оплаты (5,10, 20 тенге). Выдать нужную открытку (сообщение, например: «Новогодние, вариант с», а также сдачу (купюрами 1,2,5,10) с виде сообщения, например, «2тн+1тн». Предусмотреть обработку неправильного номера или варианта. \n");

		int theme = 0, price = 0;
		char var;

		printf("Какая тема открытки(от 1 до 3): ");
		scanf("%d", &theme);

		printf("Желаемый вариант (a-c): ");
		scanf("%c", &var);

		printf("Введите купюру оплаты(5,10,20 тенге): ");
		scanf("%d", &price);

		if (theme == 1)
			printf("Новогодние, вариант %c ", var);

			if (price == 5)
				printf("сдача 2тн+1тн \n");
			else if (price == 10)
				printf("сдача 5тн+2тн+1тн \n");
			else if (price == 20)
				printf("сдача 10тн+5тн+2тн+1тн \n");
	}
	else if (n == 10) {
		printf("3.	Необходимо написать программу, которая проверяет пользователя на знание таблицы умножения. Пользователь сам вводит два целых однозначных числа. Программа задаёт вопрос: результат умножения первого числа на второе. Пользователь должен ввести ответ и увидеть на экране правильно он ответил или нет. Если нет – показать еще и правильный результат. \n");

		int a = 0, b = 0;
		int countTrue = 0, countFalse = 0, numExam = 1;
		int result = 0;
	start2:
		a = 1 + rand() % 9;
		b = 1 + rand() % 9;

		printf("%d)%d * %d = ", numExam, a, b);
		scanf("%d", &result);

		int mresult = a*b;

		if (result == mresult)
			countTrue++;
		else
			countFalse++;

		numExam++;
		if (numExam <= 10)
			goto start2;
		else
		{
			printf("--------------------------------\n");

			printf("Итого правильных  ");
			SetConsoleTextAttribute(hConsole, 4);
			printf("%d", countTrue);
			SetConsoleTextAttribute(hConsole, 15);
			printf(", неправильных ");
			SetConsoleTextAttribute(hConsole, 2);
			printf("%d\n", countFalse);
			SetConsoleTextAttribute(hConsole, 15);
		}
	}
	else if (n == 11) {
		printf("4.	Написать программу , которая по дате рождения (день d месяц n) определяет знак Зодиака: с 22 марта по 21 апреля - Овен (4); с 22 апреля по 21 мая - Телец (5); с 22 мая по 21 июня - Близнецы (6); с 22 июня по 21 июля - Рак (7); с 22 июля по 21 августа - Лев (8); с 22 августа по 21 сентября - Дева (9); 22 сентября по 21 октября - Весы (10); с 22 октября по 21 ноября - Скорпион (11); с 22 ноября по 21 декабря - Стрелец (12); с 22 декабря по 21 января - Козерог (1); 22 января по 21 февраля - Водолей (2); с 22 февраля по 21 марта - Рыбы (3). \n");

		int d = 0, n = 0, znak;

		printf("Введите день: ");
		scanf("%d", &d);

		printf("Введите месяц (от 1 до 12): ");
		scanf("%d", &n);

		
		switch (n)
		{
		case 4:
			if ((n==3 && d >= 22) || (n==4 && d <= 21))
				printf("Овен \n");
		break;
		case 5:
			if ((n==4 && d >= 22) || (n==5 && d <= 21))
				printf("Телец \n");
		break;
		case 6:
			if ((n==5 && d >= 22) ||(n==6 && d <= 21))
				printf("Близнецы \n");
		break;
		case 7:
			if ((n == 6 && d >= 22) || (n == 7 && d <= 21))
				printf("Рак \n");
		break;
		case 8:
			if ((n == 7 && d >= 22) || (n == 8 && d <= 21))
				printf("Лев \n");
		break;
		case 9:
			if ((n == 8 && d >= 22) || (n == 9 && d <= 21))
				printf("Дева \n");
		break;
		case 10:
			if ((n == 9 && d >= 22) || (n == 10 && d <= 21))
				printf("Весы \n");
		break;
		case 11: 
			if ((n == 10 && d >= 22) || (n == 11 && d <= 21))
				printf("Скорпион \n");
			break;
		case 12:
			if ((n == 11 && d >= 22) || (n == 12 && d <= 21))
				printf("Стрелец \n");
			break;
		case 1:
			if ((n == 12 && d >= 22) || (n == 1 && d <= 21))
				printf("Козерог \n");
			break;
		case 2:
			if ((n == 1 && d >= 22) || (n == 2 && d <= 21))
				printf("Водолей \n");
			break;
		case 3:
			if ((n == 2 && d >= 22) || (n == 3 && d <= 21))
				printf("Рыбы \n");
			break;
		}
	}
		goto start;
}
	