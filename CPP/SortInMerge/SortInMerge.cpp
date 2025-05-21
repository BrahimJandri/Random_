#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
#include <deque>

// Utility print function


// Generate Jacobsthal sequence up to n elements
std::deque<int> generateJacobsthal(int n)
{
    std::deque<int> J(n);
    if (n > 0)
        J[0] = 0;
    if (n > 1)
        J[1] = 1;
    for (int i = 2; i < n; ++i)
    {
        J[i] = J[i - 1] + 2 * J[i - 2];
    }
    return J;
}

// Insert small elements into big vector at positions based on Jacobsthal sequence
void insertSmallIntoBig(std::deque<int> &big, const std::deque<int> &small)
{
    int n = small.size();
    if (n == 0)
        return;

    // Generate Jacobsthal indices (starting from 1)
    std::deque<int> jac = generateJacobsthal(n + 2);

    // Insert small elements into big in Jacobsthal order
    for (int i = 0; i < n; ++i)
    {
        int pos = jac[i + 1]; // skip J(0) = 0, start from J(1)
        if (pos > (int)big.size())
            pos = big.size();

        // Insert small[i] in sorted order in big (simulate insertion)
        // Since big is sorted, we can do binary insert, but for simplicity linear insert:
        std::deque<int>::iterator it = big.begin();
        while (it != big.end() && *it < small[i])
            ++it;
        big.insert(it, small[i]);
    }
}

// void mergeInsertSort(std::vector<int> &container)
// {
//     if (container.size() <= 1)
//         return;

//     std::vector<int> big;
//     std::vector<int> small;

//     // Pair up elements, split into big and small
//     for (size_t i = 0; i + 1 < container.size(); i += 2)
//     {
//         if (container[i] > container[i + 1])
//         {
//             big.push_back(container[i]);
//             small.push_back(container[i + 1]);
//         }
//         else
//         {
//             big.push_back(container[i + 1]);
//             small.push_back(container[i]);
//         }
//     }

//     // If odd number, last element goes to big (already sorted by default)
//     if (container.size() % 2 == 1)
//     {
//         big.push_back(container.back());
//     }

//     // Sort big recursively or iteratively (here simple std::sort for demo)
//     std::sort(big.begin(), big.end());

//     // Insert small elements into big using Jacobsthal order insertion
//     insertSmallIntoBig(big, small);

//     container = big;

//     print(big, small);
// }

void mergeInsertSort(std::deque<int> &container)
{
    if (container.size() <= 1)
        return;

    std::deque<int> big;
    std::deque<int> small;

    // Pair up elements, split into big and small
    for (size_t i = 0; i + 1 < container.size(); i += 2)
    {
        if (container[i] > container[i + 1])
        {
            big.push_back(container[i]);
            small.push_back(container[i + 1]);
        }
        else
        {
            big.push_back(container[i + 1]);
            small.push_back(container[i]);
        }
    }

    // If odd number, last element goes to big (already sorted by default)
    if (container.size() % 2 == 1)
    {
        big.push_back(container.back());
    }

    // Sort big recursively or iteratively (here simple std::sort for demo)
    std::sort(big.begin(), big.end());

    // Insert small elements into big using Jacobsthal order insertion
    insertSmallIntoBig(big, small);

    container = big;
}

