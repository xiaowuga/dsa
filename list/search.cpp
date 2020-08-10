//
// Created by 小乌嘎 on 2020/8/10.
//

//在有序列表内节点p（可能是trailer）的n个（真）前驱中，找到不大于e的最后者
template <typename T>
ListNodePosi(T) List<T>::search(const T &e, int n, ListNodePosi(T) p) const {
    do {
        p = p->pred;
        n--;
    }while((-1 < n) && (e < p->data));
    return p;
}//失败时，返回区间左边界的前驱（可能是header），调用者可通过valid判断成功与否
