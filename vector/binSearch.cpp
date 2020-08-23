//
// Created by 小乌嘎 on 2020/8/23.
//
// 二分查找算法（版本A）：在有序向量的区间[l, r)内查找元素e， 0<=l <= r <= _size
// 有多个命中元素时，不能保证返回秩的最大者；查找失败时候，简单的返回-1，而不能指示失败的位置
template <typename T>
static int binSearch_A(T* A, T const& e, int l, int r) {
    while(l < r) {
        int m = (l + r) >> 1; //以中点为轴心
        if(e < A[m]) r = m; //深入前半段[l, m),继续查找
        else if(A[m] < e) l = m + 1;//深入后半段[m，r),继续查找
        else return m; //在m处命中，提前终止返回结果
    }
    return -1; //查找失败
}



// 二分查找算法（版本B）：在有序向量的区间[l, r)内查找元素e， 0<= l <= r <= _size
// 有多个命中元素时，不能保证返回秩最大者；查找失败时，简单返回-1，而不能指示失败的位置
template <typename T>
static int binSearch_B(T* A, T const& e, int l, int r) {
    while (1 < r - l) {
        int m = (l + r) >> 1;
        (e < A[m]) ? r = m : l = m; //经比较后确定深入[l,m)或[m,r)
    }
//  出口时，r = l + 1，查找区间仅含一个元素A[l], 查找不能提前终止
    return (e == A[l]) ? l : -1; //查找成功时返回对应的秩，否则统一返回-1
}





// 二分查找算法（版本C）：在有序向量的区间[l, r)内查找元素e， 0<= l <= r <= _size
// 有多个命中元素时，总能保证返回秩最小者；查找失败时，能够返回失败的位置
template <typename T>
static int binSearch_C(T* A, T const& e, int l, int r) {
    while(l < r) {
        int m = (l + r) >> 1; //以中点为轴心
        (e <= A[m]) ? r = m : l = m + 1; //经比较后确定深入[l,m)或[m,r)
    }
    //循环结束时，l为大于等于e的元素的最小秩,不能提前终止
    return l;
}


