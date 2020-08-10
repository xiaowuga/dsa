//
// Created by 小乌嘎 on 2020/8/10.
//

template <typename T>
T& List<T>::operator[](int r) const {
    ListNodePosi(T) p = begin();
    while(0 < r--) {
        p = p->succ;
    }
    return p->data;
}