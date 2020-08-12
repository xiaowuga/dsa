//
// Created by 小乌嘎 on 2020/8/12.
//

template <typename T>
void List<T>::selectionSort(ListNodePosi(T) p, int n) {
    ListNodePosi(T) head = p->pred;
    ListNodePosi(T) tail = p;
    for(int i = 0; i < n; i++) {
        tail = tail->succ;
    }
    while(1 < n) {
        ListNodePosi(T) maxx = selectMax(head->succ, n);
        insertB(tail, remove(maxx));
        tail = tail->pred;
        n--;
    }
}
