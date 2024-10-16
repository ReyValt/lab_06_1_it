#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* b, const int size, const int min, const int max)
{
    for (int i = 0; i < size; i++)
        b[i] = rand() % (max - min + 1) + min;
}

void Print(int* b, const int size)
{
    cout << "b = {";
    for (int i = 0; i < size; i++)
        cout << setw(4) << b[i];
    cout << " }" << endl;
}

int SumOfElements(int* b, const int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (b[i] % 2 == 0 && b[i] < 0)
            sum += b[i];
    }
    return sum;
}

int CountOfElements(int* b, const int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (b[i] % 2 == 0 && b[i] < 0)
            count++;
    }
    return count;
}

void ReplaceWithZeros(int* b, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (b[i] % 2 == 0 && b[i] < 0)
            b[i] = 0;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 24;
    const int min = -15;
    const int max = 75;
    int b[n];

    Create(b, n, min, max);
    Print(b, n);

    int sum = SumOfElements(b, n);
    int count = CountOfElements(b, n);

    ReplaceWithZeros(b, n);

    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;

    Print(b, n);

    return 0;
}
