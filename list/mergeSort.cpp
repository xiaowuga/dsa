//
// Created by 小乌嘎 on 2020/8/10.
//
template <typename T>
ListNodePosi(T) List<T>::mergeSort(ListNodePosi(T) p, int n) {
    if(n < 2) return p;
    int m = n >> 1;
    ListNodePosi(T) q = p;
    for(int i = 0; i < m; i++)  q = q->succ;
    p = mergeSort(p, m);
    q = mergeSort(q, n - m);
    p = merge(p, m, q, n - m);
    return p;
}
