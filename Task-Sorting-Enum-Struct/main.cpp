#include <iostream>

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i){
        for (int j = 0; j < size - i - 1; ++j){
            if (arr[j] > arr[j + 1]){
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i){
        int minIndex = i;
        for (int j = i + 1; j < size; ++j){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]); 
    } 
}

enum class SortingStrategy
{
    BubbleSort,
    SelectionSort
};

struct SortingOption
{
private:
    SortingStrategy m_Strategy;
    void (*sortFunction)(int arr[], int size);

public:
    SortingOption(const SortingStrategy strategy) : m_Strategy(strategy)
    {
        switch (strategy)
        {
            case SortingStrategy:: BubbleSort:
                sortFunction = BubbleSort;
                break;
            
            case SortingStrategy::SelectionSort:
                sortFunction = SelectionSort;
        }
    }

public:
    void Sort(int arr[], int size)
    {
        sortFunction(arr, size);
    }
};

int main()
{
    const int size = 5;
    int arr[5] = {34, 63, 32, 11, 76};

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    
    } 
    std::cout << std::endl;
    //Bubble Sort
    SortingOption bubbleSortOption(SortingStrategy::BubbleSort);
    bubbleSortOption.Sort(arr, size);

    std::cout << "\nUsing Bubble Sort: " << std::endl;

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    //Selection Sort
    SortingOption selectionSort(SortingStrategy::SelectionSort);
    selectionSort.Sort(arr, size);
    
    std::cout << "\nUsing Selection Sort:" << std::endl;

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}


