#include <iostream>
#include <cstdlib>
#include <time.h>

///Написать программу, которая генерирует три последовательности из 10 случайных
///чисел (в диапазоне от 1 до N). Для каждой последовательности программа должна
///вычислить среднее арифметическое. N - натуральное и вводиться пользователем.

int main() {
    int randNum;
    int amount = 10;
    int startInterval = 1;
    int endInterval = 100;
    double sum = 0;
    double average;

    srand(time(NULL));

    for (int times = 1; times <= 3 ; times ++) {
        std::cout << times << " subsequence:\n";
        for (int counter = 1; counter < amount; counter++) {
            randNum = rand() % endInterval + startInterval;
            std::cout << randNum << std::endl;
            sum += randNum;
        }

        average = sum / amount;
        std::cout << "Average: " << average << "\n" << std::endl;
    }
    return 0;
}

