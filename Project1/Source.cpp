#include <iostream>
using namespace std;

//1.1 Передача аргументов по значению,работаем с копиями, кот записаны в локальные переменные формальных параметров
void PassingByValue(int a, int b)////////коли не має потреби змінювати значення оригіналів
{
	int temp = a;
	a = b;
	b = temp;

	
}/////////////////////локальні зміні  int a, int b  будть зруйновані

//1.2 Передача аргументов по указателю, работаем с оригиналом
void PassingByPointer(int*  a, int* b)/////swap()  PassingByPointer(&n1,&n2);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}///////////////локальні вказівники int* a, int* b будть зруйновані, але всі зміни з обьєктами будут залишатися в оригіналах обьєктів


//2.1 Передача аргументов по ссылке,работаем с оригиналом
void PassingByRef(int& a, int& b)//PassingByRef(n1, n2);
{
	int temp = a;
	a = b;
	b = temp;
}///////////////////////за посиланнями працюємо з оригіналами


int Grow1(int a)   /////копії  int age=20;  Grow1(age);  age=20;
{
	a += 3;
	return a;
}

void Grow2(int& a)  /////  int age=20;  Grow2(age);  age=23;
{
	a += 3;////   посилання змінює оригінал об'єкту
}

 void Grow3(int* a)   /////  int age=20;    Grow3(&age); age=23;
{
	*a += 3;
	
}


int main()
{
	////1.
	int n1 = 1, n2 = 2;

	PassingByValue(n1, n2);////// void PassingByValue(int a, int b)   PassingByValue(1, 2); не змінює значень оригіналів обьєкті


	cout << "n1=" << n1 << endl;

	cout << "n2=" << n2 << endl;

	cout << "______________________________" << endl;


	n1 = 1, n2 = 2;
	PassingByPointer(&n1,&n2);   ///// передаєм адреси

	cout << "n1=" << n1 << endl;

	cout << "n2=" << n2 << endl;



	cout << "______________________________" << endl;
	n1 = 1, n2 = 2;

	PassingByRef(n1, n2);

	cout << "n1=" << n1 << endl;

	cout << "n2=" << n2 << endl;

	////2.  


	////int aggg = 20;
	////int aggg2=Grow1(aggg);


	////Grow2(aggg);




	return 0;
}
