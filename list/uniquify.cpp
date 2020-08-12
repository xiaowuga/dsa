//
// Created by 小乌嘎 on 2020/8/12.
//

template <typename T>
int List<T>::uniquify(){
    if(_size < 2) return 0;
    int oldSize = _size;
    ListNodePosi(T) p = begin();
    ListNodePosi(T) q;
    while(trailer != (q = p->succ)) {
        if(p->data != q->data) {
            p = q;
        }else {
            remove(q);
        }
    }
    return oldSize - _size;
}