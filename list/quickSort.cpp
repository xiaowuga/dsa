//
// Created by 小乌嘎 on 2020/8/14.
//

template <typename T>
void List<T>::quickSort(ListNodePosi(T) p, ListNodePosi(T) q) {
    if(q->succ == p) return;
    ListNodePosi(T) begin = p->pred;
    ListNodePosi(T) end = q->succ;
    ListNodePosi(T) base = p;
    while(q->succ != p) {
        while(p != q->succ && p->data <= base->data) {
            p = p->succ;
        }
        while(q->succ != p && q->data > base->data) {
            q = q->pred;
        }
        if(q->succ != p) {
            std::swap(p->data, q->data);
            p = p->succ;
            q = q->pred;
        }
    }
    std::swap(base->data, q->data);
    quickSort(begin->succ, q->pred);
    quickSort(q->succ, end->pred);
}
