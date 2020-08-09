//
// Created by 小乌嘎 on 2020/8/9.
//

template <typename T> //列表内部方法：复制列表中自位置p起的n项
void List<T>::copyNodes(ListNodePosi(T)p, int n) { //p合法，且至少有n - 1个真后续节点
    init(); //创建头，尾解哨兵节点并做初始化
    while(n--) {
       insertAsLast(p->data);
       p = p->succ;
    }
}