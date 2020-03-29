/*
Worst complexity: n^2
Average complexity: n^2
Best complexity: n
Space complexity: 1
Stable: Yes
*/
#include <iostream>
#include <vector>

template<class T, template<class E, class R = std::allocator<T>> class cont>
void bubbleSort(cont<T>& vec, size_t beg, size_t end){
    bool contIsSorted{ };//This makes the algorithm detect if the array is sorted
    for (; !contIsSorted && end; end--) {
        contIsSorted = true;
        for(size_t i {beg}; i < end; ++i)
        {
            if(vec[i] > vec[i+1])
            {
                std::swap(vec[i], vec[i+1]);
                contIsSorted = false;
            }
        }
    }
}

int main()
{
    std::vector<double> vec{{-9.4, 5, 5, 6, 7, 6, -90, 0}};
    for(auto const& el:vec)
        std::cout << el << " ";
    std::cout << "\n\n\n";
    bubbleSort(vec, 0, vec.size()-1);
    for(auto const& el:vec)
        std::cout << el << " ";

}
