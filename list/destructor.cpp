//
// Created by 小乌嘎 on 2020/8/9.
//

template <typename T>
List<T>::~List() {
    clear();
    delete header;
    delete trailer;
}