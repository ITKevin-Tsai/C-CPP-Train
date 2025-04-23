#include <iostream>
#include <iomanip> // Needed for std::setw


int main() 
{
    std::cout << "N" << std::setw(10) << "10*N" << std::setw(10) << "100*N" << std::setw(10) << "1000*N" << std::endl;
    int N = 1;
    while (N <= 5)
    {
        std::cout << N << std::setw(10) << 10 * N << std::setw(10) << 100 * N << std::setw(10) << 1000 * N << std::endl;
        N++;
    }
    N = 0;
    for (N = 1;N <= 5;N++)
        std::cout << N << std::setw(10) << 10 * N << std::setw(10) << 100 * N << std::setw(10) << 1000 * N << std::endl;
    return 0;
}
