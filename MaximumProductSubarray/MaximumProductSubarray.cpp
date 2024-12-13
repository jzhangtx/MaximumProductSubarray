// MaximumProductSubarray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int Product(std::vector<int>& vec, size_t index)
{
    int product = vec.empty() ? INT_MIN : vec[index];
    int maxProduct = product;
    for (size_t i = index+1; i < vec.size(); ++i)
    {
        product *= vec[i];
        maxProduct = std::max(maxProduct, product);
    }

    return maxProduct;
}

int MaxProduct(std::vector<int>& A)
{
    int maxProduct = INT_MIN;
    for (size_t i = 0; i < A.size(); ++i)
    {
        maxProduct = std::max(maxProduct, Product(A, i));
    }

    return maxProduct;
}

int main()
{
    while (true)
    {
        std::cout << "Number of elements: ";
        int count = 0;
        std::cin >> count;
        if (count == 0)
            break;

        std::cout << "Please enter the array: ";
        std::vector<int> vec(count, 0);
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        std::cout << "The maximum product is " << MaxProduct(vec) << std::endl << std::endl;
    }
}
