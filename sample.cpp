#include <iostream>

int sum(int, int);
int multiple(int ,int);

int main()
{
    std::cout << "This is master" << std::endl;
    std::cout << "Git Training" << std::endl;
    int a = 5;
    int b = 3;
    std::cout << sum(a, b) << std::endl;
    std::cout << multiple(a, b) << std::endl;
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int multiple(int a, int b){
    return a * b;
}