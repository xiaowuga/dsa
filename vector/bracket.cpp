//
// Created by 小乌嘎 on 2020/8/21.
//

template <typename T>
T& Vector<T>::operator[](int r) const { //重载下标操作符
   return _elem[r];
}
