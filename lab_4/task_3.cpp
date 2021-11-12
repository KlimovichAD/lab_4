#include <iostream>

///Написать функцию которая печатает значения функции y = kx + b,
/// для промежутка [c,d] c шагом s (k,b,c,d,s - задаются пользователем)
int main()
{
    std::cout << "Enter the required data to execute the function: y=kx+b.\n";

    double c;
    std::cout << "Enter the start of the range:";
    std::cin >> c;

    double d;
    std::cout << "Enter the end of the range:";
    std::cin >> d;

    double k;
    std::cout << "Enter coefficient k:";
    std::cin >> k;

    double b;
    std::cout << "Enter the term b:";
    std::cin >> b;

    double s;
    std::cout << "Enter step s:";
    std::cin >> s;
    double y;

    if(c>d){
        std::swap(c,d);
    }

    std::cout<< "The value of the function y with a step " << s << " is: ";
     for (; c < d; c+=s){
         double x = c;
         y = k*x +b;
         std::cout << y << std::endl;
     }


    return 0;
}