/*
1. Create a vector with the following values { 1, 2, 4, 5, 6 }.
2. Erase the first value.
3. Add 5 at the end.
4. Create 12 in the vector at the beginning (emplace).
5. Print vector size and max_size.
6. Print the vector.
7. Clear the vector.
8. Print a size.
*/

#include <iostream>
#include <vector>
#include <algorithm>

void showVector(std::vector<int> v);

int main()
{
    std::vector<int> vector1 {1, 2, 4, 5, 6};

    vector1.erase(vector1.begin());
    vector1.emplace_back(5);
    vector1.emplace(vector1.begin(), 12);

    std::cout << "Vector size: " << vector1.size() << std::endl;
    std::cout << "Vector max_size: " << vector1.max_size() << std::endl;

    showVector(vector1);
    vector1.clear();
    std::cout << "Vector size: " << vector1.size() << std::endl;

    return 0;
}

void showVector(std::vector<int> v)
{
    for (auto const &i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}