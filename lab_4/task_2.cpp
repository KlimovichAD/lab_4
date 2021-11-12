//Написать функцию которая вычисляет сумму ряда 1 + 1/2 + 1/4 ... + 1/(2^n) с заданной точностью
#include <iostream>

int main()
{
    int n;
    std::cout << "Enter, with what accuracy, do you want to get sum:";
    std::cin >> n;

    int n_st = n;
    double result = 1;
    double num = 1;
    if(n>0){
        while (n != 1) {
            --n;
            num /= 2;
            result += num;
        }
        std::cout << "The sum of the series with precision " << n_st << " is " << result << std::endl;
    }
    else std::cout << "Error. Uncorrected input.";

    return 0;
}