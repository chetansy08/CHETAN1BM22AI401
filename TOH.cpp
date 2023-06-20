//cpp to solve TOH using recursion
#include <iostream>

class TOH {
public:
    void solve(int n, char src, char dest, char aux);
};

void TOH::solve(int n, char src, char dest, char aux) {

        if (n == 1) {
         
            std::cout << "Move disk 1 from " << src << " to " << dest << std::endl;
            return;
        }
        solve(n - 1, src, aux, dest);
        std::cout << "Move disk " << n << " from " << src << " to " << dest << std::endl;
        solve(n - 1, aux, dest, src);

}

int main() {
    int numDisks;
    std::cout << "Enter the number of disks: ";
    std::cin >> numDisks;

    TOH cal_toh;
    cal_toh.solve(numDisks, 'A', 'C', 'B');

    return 0;
}
