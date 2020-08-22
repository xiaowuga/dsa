//
// Created by 小乌嘎 on 2020/8/22.
//

template <typename T>
int Vector<T>::uniquify() { //有序向量重复元素剔除算法（高效版）
    int i = 0, j = 0; //各对互异"相邻"元素的秩
    while(++j < _size) {
        if(_elem[i] != _elem[j]) { //发现不同元素时，向前移至紧邻于前者右侧
            _elem[++i] = _elem[j];
        }
    }
    _size = ++i; //改变容量大小
    shrink(); //直接截除尾部多余元素
    return j - i; //向量规模变化量，即被删除元素总数
}
