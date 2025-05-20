#include <iostream>
#include <vector>
#include <sstream>
#include <cstdlib>

std::vector<int> vecto;

void FillArray(int ac, char **av)
{
    for (int i = 0; i < ac; i++)
    {
        std::stringstream ss(av[i]);
        int number;
        ss >> number;

        if (ss.fail())
        {
            std::cerr << "Invalid number: " << av[i] << std::endl;
            exit(1);
        }
        vecto.push_back(number);
    }
}

// 🧠 Recursive Merge Sort Function
void mergeInsertSort(std::vector<int> &container, int left, int right)
{
    if (left >= right)
        return;
    std::cout << "DKHLT" << std::endl;
    int mid = (left + right) / 2;
    mergeInsertSort(container, left, mid);
    mergeInsertSort(container, mid + 1, right);

    std::vector<int> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right)
    {
        std::cout << "[i]: " << i << std::endl;
        std::cout << "[j]: " << j << std::endl;
        std::cout << "container[i]: " << container[i] << std::endl;
        std::cout << "container[j]: " << container[j] << std::endl;
        if (container[i] < container[j])
            temp.push_back(container[i++]);
        else
            temp.push_back(container[j++]);
    }

    while (i <= mid)
        temp.push_back(container[i++]);
    while (j <= right)
        temp.push_back(container[j++]);

    for (int k = left; k <= right; ++k)
        container[k] = temp[k - left];
}

void SortInMerge(std::vector<int> &vec)
{
    mergeInsertSort(vec, 0, vec.size() - 1);

    // Print the sorted array
    std::cout << "Sorted output: ";
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cerr << "Error: Please enter some numbers!" << std::endl;
        return 1;
    }

    FillArray(ac - 1, av + 1);
    SortInMerge(vecto);

    return 0;
}

