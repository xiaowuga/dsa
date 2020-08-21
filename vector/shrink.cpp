//
// Created by 小乌嘎 on 2020/8/21.
//

template <typename T>
void Vector<T>::shrink() { //装填因子过小时压缩向量所占空间
    if(_capacity < DEFAULT_CAPACITY << 1) return; //不致收缩到DEFAULT_CAPACITY以下
    if(_size << 2 > _capacity) return; //以25为界
    T* oldElem = _elem;
    _elem = new T[_capacity >> 1]; // 容量减半
    for(int i =0; i < _size; i++) {
        _elem[i] = oldElem[i];
    }
    delete [] oldElem;
}

