#include <iostream>
using namespace std;
// вывод программой всех множетелей числа, которые ввел пользователь


int main()
{
	system("chcp 1251>nul");
	int N, del,ost;
	cout << "от какого числа будем искать множетили?   "<< endl;
	cin >> N; 
	
	int delt = 2;
	do 
	{
		
		ost = N %  delt; /// проверка числа на остаток
		
		
		switch (ost)
		{
		case 0: // выполняется когда остаток равен 0
			cout <<"множетель  " << delt<< endl;
			N = N / delt;
			break;
		
		default: //выполняется во всех остальных случаях
			++delt;
			break;
		}

		
	} while (N > 2); 
	

	
system("pause>nul");
}

/*
введеное число проверяется на остаток
в случае если остаток ноль, выполняется вывод делителя в консоль
след шаг получение  частное от деления числа введенного пользователем
снова проверяется на остаток.
цикл повторяется до тех пор пока частное будет рано меньше 2.
*/
