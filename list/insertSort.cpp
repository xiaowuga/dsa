//
// Created by 小乌嘎 on 2020/8/12.
//

template <typename T>
void List<T>::insertSort(ListNodePosi(T) p, int n) {
   for(int r = 0; r < n; r++) {
       inserA(search(p->data, r, p), p->data);
       p = p->succ;
       remove(p->pred);
   }
}
