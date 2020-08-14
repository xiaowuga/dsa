//
// Created by 小乌嘎 on 2020/8/14.
//


template <typename T>
void List<T>::moveB(ListNodePosi(T) p, ListNodePosi(T) q) {
//    将q节点分离
    q->pred->succ = q->succ;
    q->succ->pred = q->pred;
//    将q节点插入到p节点前面
    q->pred = p->pred;
    q->succ = p;
    p->pred->succ = q;
    p->pred = q;
}


template <typename T>
void List<T>::moveA(ListNodePosi(T) p, ListNodePosi(T) q) {
//    将q节点分离
    q->pred->succ = q->succ;
    q->succ->pred = q->pred;
//    将q节点插入到p节点后面
    q->pred = p;
    q->succ = p->succ;
    p->succ->pred = q;
    p->succ = q;
}