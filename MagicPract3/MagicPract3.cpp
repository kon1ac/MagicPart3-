#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(0, "Russian");
    const int rows = 3;
    const int cols = 5;
    float array[rows][cols];

    // Ввод элементов массива с клавиатуры
    for (int i = 0; i < rows; i++) {
        std::cout << "Введите элементы " << i + 1 << "-й строки:";
        for (int j = 0; j < cols; j++) {
            std::cin >> array[i][j];
        }
    }

    // Вычисление и вывод среднего арифметического для каждой строки
    for (int i = 0; i < rows; i++) {
        float sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += array[i][j];
        }
        float average = sum / cols;
        std::cout << "Среднее арифметическое элементов " << i + 1 << "-й строки: " << average << std::endl;
    }

    return 0;
}

