//
// Created by 小乌嘎 on 2020/8/22.
//

template <typename T>
int Vector<T>::insert(int r, const T &e) { //将e作为秩为r元素插入
    expand(); //若有必要，扩容
    for(int i = _size; i > r; i--) { //自后向前，后继元素顺次移一个单位
        _elem[i] = _elem[i - 1];
    }
    _elem[r] =e; //插入新元素
    _size++; //更新容量
    return r; //返回秩
}

