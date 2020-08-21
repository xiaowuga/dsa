//
// Created by 小乌嘎 on 2020/8/21.
//
template <typename T>
void Vector<T>::copyFrom(T const* A, int l , int r) {
    _capacity = 2 * (r - l);
    _elem = new T[_capacity];
    _size = 0;
    while(l < r) {
        _elem[_size++] = A[l++];
    }
}
