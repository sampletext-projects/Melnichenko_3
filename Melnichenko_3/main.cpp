#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Выполнила Мельниченко Марина (УТН-111)" << endl;
	cout << "Программа для нахождения степеней числа" << endl;

	int k, n, t, i;
	cout << "Введите K: ";
	cin >> k;
	cout << "Введите N: ";
	cin >> n;
	t = k;
	i = 1;
	while(i <= n)
	{
		cout << k << "^" << i << " = " << t << endl;
		t *= k;
		i++;
	}

	system("pause");
	return 0;
}
