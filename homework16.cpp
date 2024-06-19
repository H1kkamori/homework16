#include <iostream>
#include <ctime>

int main() 
{
     const int N = 5;
    int array[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = i + j;
        }
    }

      std::cout << "Array:" << std::endl;
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

      time_t t = time(nullptr);
    struct tm buf;
    localtime_s(&buf, &t);

    int day = buf.tm_mday;

    int rowIndex = day % N;

    int sum = 0;

    for (int j = 0; j < N; ++j)
    {
        sum += array[rowIndex][j];
    }

    std::cout << "Today " << day << "th." << std::endl;
    std::cout << "Sum of elements in the row at index " << rowIndex << ": " << sum << std::endl;

    return 0;
}
