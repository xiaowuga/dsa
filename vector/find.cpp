//
// Created by 小乌嘎 on 2020/8/22.
//

template <typename T> //无序向量的区间顺序查找，返回最后一个元素e的位置，失败时，返回-1
int Vector<T>::find(T const& e, int l, int r) const {
    while(l < r) {
       if(e == _elem[--r]) {
           return r;
       }
    }
    return -1;
}
