//
// Created by 小乌嘎 on 2020/8/10.
//
// 有序列表的归并：当前列表中自p起的n个元素，与列表L中自q起的m个元素归并
template <typename T>
ListNodePosi(T) List<T>::merge(ListNodePosi(T) p, int n, ListNodePosi(T) q, int m) {
    ListNodePosi(T) pp = p->pred;
    while(0 < m) {
        if((0 < n) && (p->data <= q->data)) {
            if(q == (p = p->succ)) {
                break;
            }
            n--;
        } else {
            insertB(p, remove((q = q->succ)->pred));
            m--;
        }
    }
    return pp->succ;
}