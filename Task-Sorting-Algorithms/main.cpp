#include <iostream>

typedef void (*SortAlgorithm)(int*, int);

void BubbleSort(int* arr, int size)
{
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void SelectionSort(int* arr, int size)
{
    for (int i = 0; i < size - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        std::swap(arr[i], arr[min_index]);
    }
}

int main()
{
    int size;
    do {
        std::cout << "Enter size: ";
        std::cin >> size;
    } while (size <= 0);

    int arr[20];

    std::cout << "Enter element " << std::endl;

    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Select Sorting Algorithm:\n";
    std::cout << "1. Bubble Sort\n";
    std::cout << "2. Selection Sort\n";

    int choice;
    std::cin >> choice;

    SortAlgorithm sortAlgorithm = nullptr;
    if (choice == 1) {
        sortAlgorithm = BubbleSort;
    } else if (choice == 2) {
        sortAlgorithm = SelectionSort;
    } else {
        std::cout << "Invalid choice. Exiting program.\n";
        return 1;
    }

    sortAlgorithm(arr, size);

    std::cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
