#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i, j, n, count, max_count;
    while (cin >> i >> j)
    {
        count = 0;
        max_count = 0;

        if (1 > j)
            swap(i, j);

        for (int k = i; k <= j; k++)
        {
            count = 1;
            int n = k;

            while (n != 1)
            {
                count++;
                if (n % 2 == 0)
                {
                    n = n / 2;
                }
                else
                {
                    n = (3 * n) + 1;
                }
            }
            if (count > max_count)
                max_count = count;
        }

        printf("%d %d %d\n", i, j, max_count);
    }
    return 0;
}