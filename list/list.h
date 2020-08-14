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
    ListNodePosi(T) merge(ListNodePosi(T), int, ListNodePosi(T), int);
    ListNodePosi(T) mergeSort(ListNodePosi(T), int);
    void selectionSort(ListNodePosi(T), int);
    void insertSort(ListNodePosi(T), int);
    void quickSort(ListNodePosi(T), ListNodePosi(T));

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
    bool valid(ListNodePosi(T)p) {
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
    void mergeSort() {
        header->succ = mergeSort(begin(), _size);
    }
    void selectSort() {
        selectionSort(begin(), _size);
    }
    void insertSort() {
        insertSort(begin(), _size);
    }
    void quickSort() {
        quickSort(begin(), rbegin());
    }
    int deduplicate();//无序去重
    int uniquify();//有序去重
    void reverse();//前后倒置
    void moveA(ListNodePosi(T) p, ListNodePosi(T) q);
    void moveB(ListNodePosi(T) p, ListNodePosi(T) q);
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
#include "selectMax.cpp"
#include "reverse.cpp"
#include "merge.cpp"
#include "mergeSort.cpp"
#include "selectionSort.cpp"
#include "insertSort.cpp"
#include "uniquify.cpp"
#include "move.cpp"
#include "quickSort.cpp"
#endif //DSA_LIST_H
