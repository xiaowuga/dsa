//
// Created by 小乌嘎 on 2020/8/10.
//
template <typename T>
List<T>::List(const List<T> &L) {
   copyNodes(L.begin(), L._size);
}

template <typename T>
List<T>::List(ListNodePosi(T)p, int n) {
    //复制列表中自位置p起的n项（assert：p位合法位置，且至少有n-1个后续节点)
    copyNodes(p, n);
}

template <typename T>
List<T>::List(const List<T> &L, int r, int n) {
    //复制L中自第r项起的n项（assert：r + n <= L.size())
    ListNodePosi(T) p = L.begin();
    while(0 < r--) {
        p = p->succ;
    }
    copyNodes(p, n);
}
