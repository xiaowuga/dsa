//
// Created by 小乌嘎 on 2020/8/23.
//
#include "../fibonacci/Fib.h"
// Fibonacci查找算法:在有序向量的区间[l,r)内查找元素e，0<=l <= r <= _size
// 有多个命中元素时，不能保证返回秩最大者；失败时，简单返回-1，不能指示失败的位置
template <typename T>
static int fibSearch(T* A, T const& e, int l, int r) {
    Fib fib(r- l); //用O(log_phi(n=r-l))时间创建Fib数列
    while(l < r) {
        while(r - l < fib.get()) { //通过向前顺序查找（分摊O(1))---至多迭代几次？
            fib.prev();
        }
        int m = l + fib.get() - 1; //确定形如Fib(k) - 1的轴点
        if(e < A[m]) r = m; // 深入前半端[l,m)继续查找
        else if(e > A[m]) l = m + 1; //深入后半段[m,r)继续查找
        else return m; //在m处命中
    }
    return -1; // 查找失败
}
