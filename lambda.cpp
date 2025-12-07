#include <iostream>
#include <algorithm>

struct Compare
{
    bool operator()(int a, int b)
    {
        return a < b;
    }
};

struct CompareD
{
    bool operator()(int a, int b)
    {
        return a > b;
    }
};
int main()
{
    int numbers1[10] = {7, 2, 3, 4, 8, 1, 6, 9, 5, 10};

    std::sort(numbers1, numbers1 + 10);

    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers1[i] << " ";
    }
    std::cout << std::endl;

    int numbers2[10] = {7, 2, 3, 4, 8, 1, 6, 9, 5, 10};

    std::sort(numbers2, numbers2 + 10, std::greater<int>());

    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers2[i] << " ";
    }

    std::cout << std::endl;

    int numbers3[10] = {7, 2, 3, 4, 8, 1, 6, 9, 5, 10};

    std::sort(numbers3, numbers3 + 10, std::less<int>());

    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers3[i] << " ";
    }

    std::cout << std::endl;

    int numbers4[10] = {7, 2, 3, 4, 8, 1, 6, 9, 5, 10};

    std::sort(numbers4, numbers4 + 10, [](int a, int b)
              { return a > b; });

    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers4[i] << " ";
    }

    std::cout << std::endl;

    int numbers5[10] = {7, 2, 3, 4, 8, 1, 6, 9, 5, 10};

    std::sort(numbers5, numbers5 + 10, [](int a, int b)
              { return a < b; });

    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers5[i] << " ";
    }

    std::cout << std::endl;

    int numbers6[10] = {7, 2, 3, 4, 8, 1, 6, 9, 5, 10};

    std::sort(numbers6, numbers6 + 10, Compare());

    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers6[i] << " ";
    }

    std::cout << std::endl;

    int numbers7[10] = {7, 2, 3, 4, 8, 1, 6, 9, 5, 10};

    std::sort(numbers7, numbers7 + 10, CompareD());

    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers7[i] << " ";
    }
}