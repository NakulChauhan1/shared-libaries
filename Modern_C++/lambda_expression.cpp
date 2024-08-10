#include<iostream>
#include <algorithm>
#include <vector>

int main()
{
    auto lamda = [](int x)
    {
        std::cout<<" lamda expression executed "<<x<<std::endl;
    };

    lamda(100);

    std::vector<int> vec = { 1, 2, 3, 4, 5 };

    std::for_each(vec.begin(), vec.end(), [](int x) {
        if (x % 2 == 0) {
            std::cout << x << " ";
        }
    });

    return 0;
}