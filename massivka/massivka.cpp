#include <iostream>
#include <windows.h>
#include <cstdlib>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	
	int all{};
	int arr[10];
	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < 10; i++);
	{
		arr[all] = rand();
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[all] > max)
		{
			max = arr[all];
		}
		if (arr[all] < min)
		{
			min = arr[all];
		}
	}
	std::cout << "Max " << max << " Min " << min;
	
	
	int arr [10];
	std::cout << "введите диапозон";
	int n, sum = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 15;
	}
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << "\t";
	}
	std::cout << "\n";
	int x, y;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "y = ";
	std::cin >> y;
	for (int i = 0; i < n; i++) {
		if (arr[i] < x) sum += arr[i];
		if (arr[i] > y) sum += arr[i];
	}
	std::cout << sum;
	

	int r1, r2;
	const int size = 12;
	int arr[size];
	int max = arr[0]; min = arr[0];
	for (int i = 0; i < size; i++)
	{
		std::cout << "¬ведите доход\n";
		std::cin >> arr[i];
	}
	std::cout << "¬ведите диапозон\n";
	std::cin >> r1 >> r2;
	for (int j = 0; j >= r1, j < r2; j++)
	{
		if (min > arr[j])
			min = arr[j];
		if (max < arr[j])
			max = arr[j];
	}
	std::cout << "Minimum: " << min << std::endl;
	std::cout << "Maximum: " << max;

	
	return 0;
}