// cpp program to generate n fibonacci numbers
#include <iostream>

class fibonacci
{
public:
    int num;
    void getdata();
    int calculate(int);
};

void fibonacci::getdata()
{
    std::cout << "Enter a number : ";
    std::cin >> num;
}

int fibonacci::calculate(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return calculate(num - 2) + calculate(num - 1);
    }
}

int main()
{
    fibonacci fib;
    fib.getdata();
    fib.calculate(fib.num);

    for (int i = 0; i < fib.num; i++)
    {
        std::cout << fib.calculate(i) << "\t";
    }
}
