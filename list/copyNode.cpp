//
// Created by 小乌嘎 on 2020/8/10.
//

template <typename T>
void List<T>::copyNodes(ListNodePosi(T) p, int n) {
    init();
    while(n--) {
        insertAsLast(p->data);
        p = p->succ;
    }
}