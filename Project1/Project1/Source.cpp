#include<iostream>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");



	/*int a;
	cout << "1.Red\n" << "2.Yellow\n" "3.Green\n" << endl;
	cin >> a;
	if (a == 1) {
	cout << "Stop" << endl;
	}

	else if (a == 2) {
	cout << "Wait" << endl;
	}

	else if (a == 3) {
	cout << "Go" << endl;
	}

	else
	{
	cout << "Error" << endl;
	}*/



	/*int Color;
	cout << "1.Red\n" << "2.Yellow\n" "3.Green\n" << endl;
	cin >> Color;

	switch (Color)
	{
	case 1:
	cout << "Stop" << endl;
	break;
	case 2:
	cout << "Wait" << endl;
	break;
	case 3:
	cout << "Go" << endl;
	break;
	default:
	cout << "Wrong color" << endl;
	break;
	}*/
	

	//int a;
	//cout << "Введiть число ";
	//cin >> a;
	////a = a % 2 == 0;

	//switch (a%2)
	//{
	//case 0:

	//cout << "Парне"  << endl;
	//break;
	//default :
	//cout << "Не парне" << endl;
	//break;
	//}



	/*int a;
	cout << "Введiть номер мiсяця : ";
	cin >> a;

	switch (a)
	{
	case 1 : case 2 : case 12:
		cout << "Зима" << endl;
		break;
	case 3: case 4: case 5:
		cout << "Весна" << endl;
		break;
	case 6: case 7: case 8:
		cout << "Лiто" << endl;
		break;
	case 9: case 10: case 11:
		cout << "Осiнь" << endl;
		break;
	default:
		cout << "Не правильно" << endl;
		break;
	}*/


	/*int d;

	cout << "Введiте день тижня (1-7): ";
	cin >> d;

	switch (d)
	{
	case 1:
		cout << "Понедiлок: \n8:00 Навчання \n18:00 Шаг \n";
		break;
	case 2:
		cout << "Вiвторок: \n8:00 Навчання \n18:00 Шаг \n";
		break;
	case 3:
		cout << "Середа: \n8:00 Навчання \n19:00 Шаг \n";
		break;
	case 4:
		cout << "Четвер: \n8:00 Навчання \n19:00 Тренування \n";
		break;
	case 5:
		cout << "П'ятниця: \n8:00 Навчання \n17:00 Тренування \n";
		break;
	case 6:
		cout << "Субота: \nФутбол \n";
		break;
	case 7:
		cout << "Недiля: \nВiдпочинок \n";
		break;
	default:
		cout << "Немає такого дня в тижнi " << endl;

	}*/



	/*int  a;
	float dt , dov;
	cout << "Введiте довжину в сантиметрах = " << endl;
	cin >>dov;

	cout << "Перевести довжину в " << "\n1.Метри" << "\n2.Дециметри" << "\n3.Мiлiметри" << endl;
	cin >> a;


	switch (a)
	{
	case 1:
		cout << dov << " в метрах = " << dov / 100 << endl;
		break;
	case 2:
		cout << dov << " в дециметрах = " << dov / 10 << endl;
		break;
	case 3:
		cout << dov << " в мiлiметрах = " << dov * 10 << endl;
		break;
	default:
	break;
	}*/
	

	/*double fchislo, schislo , res;
	char operation;

	cout << "Введiть перше число : " << endl;
	cin >> fchislo;

	cout << "Виберiть операцiю " << "\n + " << "\n - " << "\n / " << "\n * \n" << endl;
	cin >> operation;

	cout << "Введiть друге число : " << endl;
	cin >> schislo;



	switch (operation)
	{
	case '+':
	res = fchislo + schislo;
	cout << fchislo << " + " << schislo << " = " << res << endl;
	break;
	case '-':
	res = fchislo - schislo;
	cout << fchislo << " - " << schislo << " = " << res << endl;
	break;
	case '/':
	res = fchislo / schislo;
	if (schislo == 0)
	{
	cout << "На 0 дiлити не можна " << endl;
	}
	else
	{
	cout << fchislo << " / " << schislo << " = " << res << endl;
	}

	break;
	case '*':
	res = fchislo * schislo;
	cout << fchislo << " * " << schislo << " = " << res << endl;
	break;
	default:
	cout << "Помилка" << endl;
	break;
	}*/



	/*char symvol;
	cout << "Введiть символ" << "\n + " << "\n - " << "\n / " << "\n * " << "\n , " << "\n . " << "\n : " << "\n ; \n" << endl;
	cin >> symvol;

	switch (symvol)
	{
	case '+': case '-': case '/': case '*':
		cout << "Знак арифметичної операцiї " << endl;
		break;
	case ',': case '.': case ':': case ';':
		cout << "Є роздiловим знаком " << endl;
		break;
	default:
		cout << "Помилка " << endl;
		break;
	}*/
	
	
	/*char symbol, symvol;
	cout << "N –пiвнiч, S - пiвдень, E – схiд, W – захiд " << endl;
	cout << "Введiть напрям: " << endl;
	cin >> symbol;
	
	

	switch (symbol)
	{
	case 'N':
		cout << "Напрям на пiвнiч" << endl;
		break;
	
	case 'S':
		cout << "Напрям на пiвдень" << endl;
		break;

	case 'E': 
		cout << "Напрям на схiд" << endl;
		break;

	case 'W':
		cout << "Напрям на захiд" << endl;
		break;
		

	default:
		cout << "Errr " << endl;
		break;
	}


	cout << "Введiть команду: 1-вперед,2-направо,3-назад,4-налiво" << endl;
	cin >> symvol;

	switch (symvol)
	{
	case '1':
		cout << "Новий курс прямо " << endl;
		break;

	case '2':
		cout << "Новий курс  направо" << endl;
		break;

	case '3':
		cout << "Новий курс назад " << endl;
		break;

	case '4':
		cout << "Новий курс налiво " << endl;
		break;


	default:
		cout << "Errr " << endl;
		break;
	}*/
	




	/*enum Operator { Kyivstar = 1, МТС, Lifecell, Intertelecom, TriMob };
	int c_operat;
	float t;
	cout << "Введiть кiльскiсть хвилин " << endl;
	cin >>t;
	cout << "Виберiть оператора (1-Kyivstar, 2-МТС, 3-Lifecell, 4-Intertelecom, 5-TriMob ): " << endl;
	cin >> c_operat;

	switch (c_operat)
	{
		
	case Kyivstar:
		cout << "Вартiсть " << t << " хвилин = " << t * 3.50 << " грн. ";
		break;
	case МТС:
		cout << "Вартiсть: " << t << " хвилин = " << t * 2.50 << " грн. ";
		break;
	case Lifecell:
		cout << "Вартiсть: " << t << " хвилин = " << t * 3 << " грн. ";		break;
	case Intertelecom:
		cout << "Вартiсть: " << t << " хвилин = " << t * 4 << " грн. ";		break;
	case TriMob:
		cout << "Вартiсть: " << t << " хвилин = " << t * 4.50 << " грн. ";		break;
	default:
		cout << "Wrong operation\n";
		break;
	}
*/

	/*enum Operator { Orange = 1, Red, Brown, Green, Blue, Pink, Black, Gray, White, Beige, Light_gray, Creamy};
	int color;

	cout << "Назва кольору" << "    Номер кольору" << endl;
	cout << " Orange \t   1\n Red \t\t   2\n Brown \t\t   3\n Green \t\t   4\n Blue \t\t   5\n Pink \t\t   6\n Black \t\t   7\n Gray \t\t   8\n White \t\t   9\n Beige \t\t   10\n Light_gray \t   11\n Creamy \t   12\n  " << endl;

	cout << "Введiть номер кольору " << endl;
	cin >> color;

	switch (color)
	{
	case Orange: case Red: case Brown: case Green:
		cout << "Теплий колiр" << endl;
		break;
	
	case Blue: case Pink: case Black: case Gray:
		cout << "Холодний колiр" << endl;
		break;

	case White: case Beige: case Light_gray: case Creamy:
		cout << "Нейтральний колiр" << endl;
		break;
	

	default:
		cout << "Невірний номер" << endl;
		break;
	}*/



	system("pause");
	return 0;
}