#include "listnode.h"

template <typename T>class List {
    private:
        int _size;
        ListNodePosi(T)header;
        ListNodePosi(T)trailer;
    
    protected:
        void init();
        int clear();
        void copyNodes(ListNodePosi(T), int);
        void merge(ListNodePosi(T)&, int, List<T>&, ListNodePosi(T), int);
        void mergeSort(ListNodePosi(T)&, int);
        void selectionSort(ListNodePosi(T), int);
        void insertSort(ListNodePosi(T), int);

    // 构造函数
    public:
        List(){init();}
        List(List<T>const& L);
        List(List<T>const& L, Rank r, int n);
        List(ListNodePosi(T)p, int n);

        // 析构函数
        Rank size() const { return _size;}
        // 只读访问接口
        bool empty() const { return _size <= 0;}
        T& operator[](Rank r) const;
        ListNodePosi(T) first() const { return header->succ;}
        ListNodePosi(T) last() const { return trailer->pred;}
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
        ListNodePosi(T) selectMax(){return selectMax(header->succ, _size);}
        // 可写访问接口
        ListNodePosi(T) insertAsFirst(T const& e);
        ListNodePosi(T) insertAsLast(T const& e);
        ListNodePosi(T) insertA(ListNodePosi(T)p, T const& e);
        ListNodePosi(T) insertB(ListNodePosi(T)p, T const& e);
        T remove(ListNodePosi(T)p);
        void merge(List<T>& L) {
            merge(first(), _size, L, L.first, L.size);
        }
        void sort() {
            sort(first(), _size);
        }
        int deduplicate();//无序去重
        int uniquify();//有序去重
        void reverse();//前后倒置
        void traverse(void(*)(T&));//遍历，一次实施visit操作（函数指针，只读或局部性修改）
        template<typename VST> //操作器
        void traverse(VST&); //遍历，依次实施visit操作（函数对象，可全局性修改）

};