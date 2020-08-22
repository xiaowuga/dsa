//
// Created by 小乌嘎 on 2020/8/22.
//

template <typename T>
int Vector<T>::disordered() const {//返回向量中逆序相邻元素对的总数
    int n = 0;
    for(int i = 1; i < _size; i++) { //逐一检查相邻元素
        if(_elem[i - 1] > _elem[i]) n++; //逆序则计数
    }
    return n; //向量有序当且仅当n=0
}