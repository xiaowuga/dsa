//
// Created by 小乌嘎 on 2020/8/22.
//

template <typename T>
int Vector<T>::remove(int l, int r) { //删除区间[l,r)
   if(l == r) return 0; //出于效率考虑，单独处理退化情况，比如remove(0,0)
   while(r < _size) {
       _elem[l++] = _elem[r++];
   }
   _size = l;
   shrink();
   return r - l;
}



template <typename T>
T Vector<T>::remove(int r) {//删除向量中秩为r的元素，0<=r<size
    T e = _elem[r]; //备份被删除的元素
    remove(r, r+ 1);
    return e; //返回被删除的元素
}