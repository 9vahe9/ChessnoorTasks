#include <iostream>
#include <vector>
#include <format>

int minimumArr(const std::vector<int>& arr)
{
    int min = arr[0];
    for (int i = 1; i < arr.size(); ++i)
    {
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int maximumArr(const std::vector<int>& arr)
{
    int max =arr[0];
    for (int i = 1; i < arr.size(); ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

double averangeArr(std::vector<int>& arr)
{
    double sum = 0;
    for (int i = 1; i < arr.size(); ++i)
    {
        sum += arr[i];

    }
    return sum / arr.size();
}

int main()
{

    int n;
    std::cout << "n = ";
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        int number;
        std::cin >> number;
        arr[i] = number;
    }

    std::cout << std::format("Min Element of Arr {}\n", minimumArr(arr));
    std::cout << std::format("Max Element of Arr {}\n", maximumArr(arr));
    std::cout << std::format("Averange of Arr {}\n", averangeArr(arr));

    return 0;
}