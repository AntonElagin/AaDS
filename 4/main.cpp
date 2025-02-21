#include <iostream>

/*
 *    4_4. Скользящий максимум.
 *    Дан массив натуральных чисел A[0..n), n не превосходит 10^8.
 *    Так же задан размер некоторого окна (последовательно расположенных
 *    элементов массива) в этом массиве k, k<=n. Требуется для каждого
 *    положения окна (от 0 и до n-k) вывести значение максимума в окне.
 *
 *      Требования: Скорость работы O(n log n), память O(n).
 *
 *    Формат входных данных. Вначале вводится n - количество элементов массива.
 *    Затем вводится n строк со значением каждого элемента. Затем вводится k  - размер окна.
 *    Формат выходных данных. Разделенные пробелом значения максимумов для каждого положения окна.
 */
template <class T>
class Heap {
public:
  addElem();
  getMax();
  Heap(int & _size);
  ~Heap();

private:
  int* buffer;
  int  size;
  int  cardinality;
};



int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}

template <class T>
Heap::Heap(int & _size) : size(_size) { }