//
// Created by 小乌嘎 on 2020/8/10.
//

//在p节点
template <typename T>
ListNodePosi(T) List<T>::selectMax(ListNodePosi(T) p, int n) {
    ListNodePosi(T) max = p;
    ListNodePosi(T) cur = p;
    while(1 < n--) {
       cur = cur->succ;
       if(cur->data >= max->data) {
           max = cur;
       }
    }
    return max;
}