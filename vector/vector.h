//
// Created by 小乌嘎 on 2020/8/18.
//
/**
 * 所有的l, r区间操作均为左闭右开,既[l, r)
 **/
#ifndef DSA_VECTOR_H
#define DSA_VECTOR_H
#define  DEFAULT_CAPACITY 3
template <typename T>
class Vector{
protected:
    int _size; //规模
    int _capacity; //容量
    T* _elem; //数据区
    void copyFrom(T const* A, int l, int r);
    void expand(); //空间不租时扩容
    void shrink(); //装填因子过小时压缩
    bool bubble(int l, int r); //扫描交换
    void bubbleSort(int l, int r); //起泡排序算法
    int max(int l, int r); // 选取最大元素
    void selectionSort(int l, int r); //选择排序算法
    void merge(int l, int r); //归并算法
    void mergeSort(int l, int r); //归并排序算法
    int partition(int l, int r); //轴点构造算法
    void quickSort(int l,int r); //快速排序算法
    void heapSort(int l, int r); //堆排序

public:
    //构造函数
    Vector(int c = DEFAULT_CAPACITY, int s = 0, T v) { //容量为c，规模为s，所有元素初始为v
        _capacity = c;
        _elem = new T[_capacity];
        for(_size = 0; _size < s; _size++) {
            _elem[_size] = v;
        }
    }
    Vector(T const* A, int l, int r) { //数组区间复制
        copyFrom(A, l, r);
    }
    Vector(T const* A, int n) { //数组整体复制
        copyFrom();
    }
    Vector(Vector<T> const& V, int l, int r) { //向量区间复制
        copyFrom(V._elem, l, r);
    }
    Vector(Vector<T> const& V) { //向量整体复制
        copyFrom(V._elem, 0, V._size);
    }
    //析构函数
    ~Vector() {
        delete [] _elem; //释放内部空间
    }
    // 只读访问接口
    int size() const { //规模
        return _size;
    }
    bool empty() const { //判空
        return !_size;
    }
    int disordered() const; //判断向量是否已排序
    int find(T const& e) const; //无序向量区间查找
    int find(T const& e, int l, int r) const; //无序向量区间查找
    int search(T const& e) const { //有序向量整体查询
        return (0 >= _size) ? -1 : search(e, 0, _size);
    }
    int search(T const& e, int l, int r); //有序向量区间查询

    //可写访问接口
    T& operator[](int r) const; //重载下标运算符，可以类似数组形式引用各个元素
    Vector<T> & operator=(Vector<T> const&); //重载赋值操作符，以便直接克隆向量
    T remove(int r); //删除下标为r的元素
    int remove(int l, int r); //删除区间[l, r)之内的元素
    int insert(int r, T const& e); //插入元素
    int push_back(T const& e) { //在末尾插入元素
        return insert(_size, e);
    }
    void unsort(int l, int r); //对[l, r)置乱
    void unsort() {
        unsort(0, _size); // 整体置乱
    }
    int deduplicate(); //无序去重
    int uniquify(); //有序去重
};
#include "copyFrom.cpp"
#include "assignment.cpp"
#include "expand.cpp"
#include "shrink.cpp"
#include "bracket.cpp"
#include "unosrt.cpp"
#include "find.cpp"
#include "insert.cpp"
#include "remove.cpp"
#include "deduplicate.cpp"
#include "disordered.cpp"
#include "uniquify.cpp"
#endif

//DSA_VECTOR_H