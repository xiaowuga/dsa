//
// Created by 小乌嘎 on 2020/8/22.
//
template <typename T>
int Vector<T>::deduplicate() { //删除无序向量中重复元素(高效版）
    int oldSize = _size; //记录原规模
    int i = 1; // 从_elem[1]开始
    while(i < _size) {
        (find(_elem[i], 0, i) < 0) ? i++ : remove(i); //若无雷同则继续考察候机，否则删除雷同者
    }
    return oldSize - _size; //向量规模变化量，即被删除元素总数
}
