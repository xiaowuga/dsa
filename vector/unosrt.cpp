//
// Created by 小乌嘎 on 2020/8/21.
//

template <typename T>
void Vector<T>::unsort(int l, int r) {//等概率随机置乱区间[l,r)
    T* V = _elem + l;
    for(int i = r - l; i > 0; i--) {
        std::swap(V[i - 1], V[std::rand() % i]);
    }

}

