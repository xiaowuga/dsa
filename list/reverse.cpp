//
// Created by 小乌嘎 on 2020/8/10.
//

template <typename T>
void List<T>::reverse(){
    if(_size < 2) return;
    for(ListNodePosi(T) p = header; p; p = p->pred) {
        std::swap(p->pred, p->succ);
    }
    std::swap(header, trailer);
}

//template <typename T>
//void List<T>::reverse() {
//    ListNodePosi(T) p = header;
//    ListNodePosi(T) q = trailer;
//    for(int i = 0; i < _size; i += 2) {
//        p = p->succ;
//        q = q->pred;
//        T tmp = p->data;
//        p->data = q->data;
//        q->data = tmp;
//    }
//}
