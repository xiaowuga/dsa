//
// Created by 小乌嘎 on 2020/8/9.
//


template <typename T>int List<T>::clear() {
    int oldSize = _size;
    while(0 < _size) {
        remove(header->succ);
    }
    return oldSize;
}