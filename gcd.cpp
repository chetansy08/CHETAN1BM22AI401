// cpp program to calculate gcd using recursion
#include <iostream>

class gcd
{
public:
    int num1,num2;
    void getdata();
    int calculate(int,int);
};

void gcd::getdata()
{
    std::cout << "Enter num1 : ";
    std::cin >> num1;
    std::cout << "Enter num2 : ";
    std::cin >> num2;
}

int gcd::calculate(int num1,int num2)
{
    if (num2!=0)
    {
        return calculate(num2,num1%num2);
    }
    else
    {
        return num1;
    }
}

int main()
{
    gcd cal_gcd;
    cal_gcd.getdata();
    std::cout<<"GCD of "<<cal_gcd.num1<<" "<<cal_gcd.num2<<" is "<<cal_gcd.calculate(cal_gcd.num1,cal_gcd.num2);
}
