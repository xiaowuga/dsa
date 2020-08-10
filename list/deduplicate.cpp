//
// Created by 小乌嘎 on 2020/8/10.
//

template <typename T>
int List<T>::deduplicate() {
    int oldSize = _size;
    ListNodePosi(T) p = begin();
    ListNodePosi(T) q = NULL;
    for(int r = 0; p != trailer; p = p->succ, q= find(p->data, r, p)) {
        if(q != NULL) {
            remove(q);
        } else {
            r++;
        }
    }
    return oldSize - _size;
}
