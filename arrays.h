//practie for CS251 exam -- Arrays
// by Elizabeth Tigner

#include <stdlib.h>
#include <stdio.h>

class Array {
public:
    Arrays(int maxEnt);
    ~Arrays();
    bool empty();
    void add(int num);
    void remove(int num);
    Array selectionSort(Array a);
    Array insertionSort(Array a);
    Array quickSort(Array a);
    Array heapSort(Array a);
    Array mergeSort(Array a);
    Array bubbleSort(Array a);

private:
    int maxEnt;
    int numEnt;

}
