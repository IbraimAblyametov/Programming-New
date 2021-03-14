#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Header.h"
using namespace std;

void create(IntArray& arr, int size)
{
    if (size <= 0)
    {
        cout << "Невозможно создать arr такой длины!\n" << size;
        return;
    }
    arr.data = new int[size];
    if (!arr.data)
    {
        cout << "Не удалось создать массив такой длины!\n" << size;
        return;
    }
    arr.size = size;
}
void create(IntArray* arr, int size)
{
    create(*arr, size);
}

int get(IntArray& arr, int index)
{
    if (index < 0 || index >= arr.size)
    {
        cout << "Индекс вне допустимого диапазона! Size, index.\n" << arr.size << index;
        exit(1);
    }
    return arr.data[index];
}
int get(IntArray* arr, int index)
{
    return get(*arr, index);
}

void set(IntArray& arr, int index, int value)
{
    if (index < 0 || index >= arr.size)
    {
        cout << "Индекс вне допустимого диапазона! Size, index.\n" << arr.size << index;
        exit(1);
    }
    arr.data[index] = value;
}
void set(IntArray* arr, int index, int value)
{
    set(*arr, index, value);
}

void resize(IntArray& arr, int newSize)
{
    if (newSize <= 0)
    {
        return;
    }

    if (newSize == arr.size)
    {

        return;
    }
    else if (newSize > arr.size)
    {

        int* newArray = new int[newSize];
        if (!newArray)
        {
            cout << "Невозможно создать arr такой длины!\n" << newSize;
            return;
        }
        memcpy(newArray, arr.data, sizeof(int) * arr.size);


        for (int i = arr.size; i < newSize; ++i)
            newArray[i] = 0;


        delete[] arr.data;
        arr.data = newArray;
        arr.size = newSize;
    }
    else
    {

        int* newArray = new int[newSize];
        if (!newArray)
        {
            cout << "Не удалось создать массив такой длины!\n" << newSize;
            return;
        }
        memcpy(newArray, arr.data, sizeof(int) * newSize);


        delete[] arr.data;
        arr.data = newArray;
        arr.size = newSize;
    }
}
void resize(IntArray* arr, int newSize)
{
    resize(*arr, newSize);
}

void destroy(IntArray& arr)
{
    if (!arr.data)
    {
        delete[] arr.data;
        arr.data = nullptr;
    }
    arr.size = 0;
}
void destroy(IntArray* arr)
{
    destroy(*arr);
}

void print(IntArray& arr)
{
    if (arr.size == 0)
    {
        puts("[]");
        return;
    }
    if (arr.size < 0)
    {
        return;
    }
    cout << "[" << get(arr, 0);
    for (int i = 1; i < arr.size; ++i)
        cout << ", " << get(arr, i);
    cout << "]\n";
}
void print(IntArray* arr)
{
    print(*arr);
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "ru");
    int size = 30;
    IntArray arr;

    create(arr, size);
    for (int i = 0; i < size; ++i)
        set(arr, i, i + 1);
    print(arr);

    resize(arr, 50);
    print(arr);

    resize(arr, 10);
    print(arr);

    destroy(arr);
}