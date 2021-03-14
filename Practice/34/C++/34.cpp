#include <cstdio>
#include <iostream>
using namespace std;

void create(int** arr, int len, int start = 0, int inc = 0)
{
    if (len <= 0)
    {
        cout << "Ќевозможно создать arr такой длины.\n" << len;
        return;
    }
    *arr = new int[len];
    if (!arr)
    {
        cout << "Ќе удалось создать массив такой длины.\n" << len;
        return;
    }
    for (int i = 0; i < len; ++i)
    {
        (*arr)[i] = start;
        start += inc;
    }
}

int* sort(int* arr, int z)
{
    if (z <= 0)
    {
        cout << "Ќе удаетс€ отсортировать массив такой длины.\n" << z;
        return arr;
    }
    if (!arr)
    {
        cout << "Ќе удаетс€ отсортировать массив nullptr.\n";
        return arr;
    }

    int a, b;
    for (int c = 1; c < z; ++c)
    {
        a = arr[c];
        b = c - 1;
        while (b >= 0 && arr[b] > a)
        {
            arr[b + 1] = arr[b];
            --b;
        }
        arr[b + 1] = a;
    }
    return arr;
}

int* print(int* arr, int l)
{
    if (l == 0)
    {
        cout << "[]\n";
        return arr;
    }
    if (l < 0)
    {
        cout << "Ќевозможно вывести массив такой длины.\n" << l;
        return arr;
    }
    if (!arr)
    {
        cout << "Ќе удаетс€ отсортировать массив nullptr.\n";
        return arr;
    }
    cout << "[" << *arr;
    for (int i = 1; i < l; ++i)
        cout << ", " << arr[i];
    cout << "]\n";
    return arr;
}

void destroy(int** arr)
{
    if (!*arr)
    {
        delete[] * arr;
        *arr = nullptr;
    }
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "ru");
    int l, s, i;
    int* arr;
    cin >> l >> s >> i;
    create(&arr, l, s, i);
    arr = sort(arr, l);
    print(arr, l);
    destroy(&arr);
    return 0;
}