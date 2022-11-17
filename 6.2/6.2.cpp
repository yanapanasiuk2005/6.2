#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
void Rand(int mas[], const int k, const int min, const int max);
int Max(int mas[], const int k);

int main()
{
    const int n = 20;
    int a[n];
    const int low = -20;
    const int high = 20;
    Rand(a, n, low, high);
    cout << "MaxNum = " << Max(a, n);

}

void Rand(int mas[], const int k, const int min, const int max)
{
    srand(time(NULL));
    cout << "a = " << "{ ";
    for (int i = 0; i < k; i++) {
        mas[i] = min + rand() % (max - min + 1);
        cout << mas[i] << "; ";
    }
    cout << "}" << endl;
    cout << endl;
}

int Max(int mas[], const int k)
{
    int maxn = 0;
    for (int i = 0; i < k; i++)
    {
        if (maxn < mas[i] && mas[i] % 2 == 0) {
            maxn = mas[i];
            maxn = i;
        }
    }
    return maxn;
}