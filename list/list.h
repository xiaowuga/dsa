//
// Created by 小乌嘎 on 2020/8/9.
//

#ifndef DSA_LIST_H
#define DSA_LIST_H

#define ListNodePosi(T) ListNode<T>*


template<typename T>
struct ListNode {
    // 成员
    T data;
    ListNodePosi(T)pred;
    ListNodePosi(T)succ;
    // 构造函数
    ListNode(){} //针对header和trailer的构造
    ListNode(T e, ListNodePosi(T)p = NULL, ListNodePosi(T)s = NULL) : data(e), pred(p), succ(s){} //默认构造器

    // 操作借口
    ListNodePosi(T) insertAsPred(T const& e);//紧靠当前节点之前插入新节点
    ListNodePosi(T) insertAsSucc(T const& e);//紧靠当前节点之后插入新节点
};



template <typename T>
class List {
private:
    int _size;
    ListNodePosi(T) header;
    ListNodePosi(T) trailer;

protected:
    void init();
    int clear();
    void copyNodes(ListNodePosi(T), int);
    void merge(ListNodePosi(T)&, int, List<T>&, ListNodePosi(T), int);
    void selectionSort(ListNodePosi(T), int);
    void insertSort(ListNodePosi(T), int);

    // 构造函数
public:
    List(){
        init();
    }
    List(List<T>const& L);
    List(List<T>const& L, int r, int n);
    List(ListNodePosi(T)p, int n);

    // 析构函数
    ~List();


    // 只读访问接口
    int size() const { return _size;}
    bool empty() const { return _size <= 0;}
    T& operator[](int r) const;
    ListNodePosi(T) begin() const { return header->succ;}
    ListNodePosi(T) rbegin() const { return trailer->pred;}
    ListNodePosi(T) end() const { return trailer;}
    ListNodePosi(T) rend() const { return header;}
    bool volid(ListNodePosi(T)p) {
        return p && (trailer != p) && (header != p);
    }
    ListNodePosi(T) find(T const & e) const {
        return find(e, _size, trailer);
    }
    ListNodePosi(T) find(T const& e, int n, ListNodePosi(T)p) const;
    ListNodePosi(T) search(T const& e) const {
        return search(e, _size, trailer);
    }
    ListNodePosi(T) search(T const& e, int n, ListNodePosi(T)p) const;
    ListNodePosi(T) selectMax(ListNodePosi(T)p, int n);
    ListNodePosi(T) selectMax(){return selectMax(begin(), _size);}
    // 可写访问接口
    ListNodePosi(T) insertAsFirst(T const& e);
    ListNodePosi(T) insertAsLast(T const& e);
    ListNodePosi(T) insertA(ListNodePosi(T) p, T const& e);
    ListNodePosi(T) insertB(ListNodePosi(T) p, T const& e);
    T remove(ListNodePosi(T)p);
    void mergeSort(ListNodePosi(T)&, int);
    void mergeSort() {
        mergeSort(header->succ, _size);
    }
    void merge(List<T>& L) {
        merge(begin(), _size, L, L.first, L.size);
    }
    int deduplicate();//无序去重
    int uniquify();//有序去重
    void reverse();//前后倒置
    void traverse(void(*)(T&));//遍历，一次实施visit操作（函数指针，只读或局部性修改）
    template<typename VST> //操作器
    void traverse(VST&); //遍历，依次实施visit操作（函数对象，可全局性修改）

};
#include "insert.cpp"
#include "initialize.cpp"
#include "insertAsPred.cpp"
#include "insertAsSucc.cpp"
#include "destructor.cpp"
#include "clear.cpp"
#include "remove.cpp"
#include "bracket.cpp"
#include "constructorByCopy.cpp"
#include "copyNode.cpp"
#include "deduplicate.cpp"
#include "find.cpp"
#include "search.cpp"
#include "mergeSort.cpp"
#include "merge.cpp"
#include "selectMax.cpp"
#include "reverse.cpp"

#endif //DSA_LIST_H
