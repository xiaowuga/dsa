

typedef int Rank;
#define ListNodePosi(T) ListNode<T>*


template<typename T> struct ListNode
{
    // 成员
    T data;
    ListNodePosi(T)pred;
    ListNodePosi(T)succ;
    // 构造函数
    ListNode(){} //针对header和trailer的构造
    ListNode(T e, ListNodePosi(T)p = NULL, ListNodePosi(T)s = NULL) : data(e), pred(p), succ(s){} //默认构造器

    // 操作借口
    ListNodePosi(T)insertAsPred(T const& e);//紧靠当前节点之前插入新节点
    ListNodePosi(T)insertAsSucc(T const& e);//紧靠当前节点之后插入新节点
};




