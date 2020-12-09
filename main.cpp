#include <iostream>
using namespace std;


int main() {
    int** a = new int*[10];
    int res = 0;
    for (int i = 0; i < 10; i++)
    {
        a[i] = new int[10];
    }

// Saimon's code
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            a[j][i]++;
//        }
//    }

//My code
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j]++;
        }
    }
    return 0;
}
