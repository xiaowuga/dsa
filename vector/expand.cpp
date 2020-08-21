//
// Created by 小乌嘎 on 2020/8/21.
//

template <typename T>
void Vector<T>::expand() {
    if(_size < _capacity) return; //为满员不必扩容
    if(_capacity < DEFAULT_CAPACITY) { //容量不低于最小容量
        _capacity = DEFAULT_CAPACITY;
    }
    T* oldElem = _elem;
    _capacity <<= 1; //容量加倍
    _elem = new T[_capacity];
    for(int i = 0; i < _size; i++) {
        _elem[i] = oldElem[i]; //复制原向量内容（T为基本类型，或已经重载复制操作符号'='
    }
    delete [] oldElem; //释放原空间
}
