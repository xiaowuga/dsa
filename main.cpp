//
// Created by 小乌嘎 on 2020/8/9.
//

#include <iostream>
#include "list/list.h"
using namespace std;
void test() {
    List<int>list;
    for(int i = 1; i < 7; i++) {
        list.insertAsFirst(i);
    }
    for(ListNodePosi(int) p = list.begin(); p != list.end(); p = p->succ) {
        cout << p -> data << ' ' ;
    }
    cout << endl;
    list.mergeSort();
//    cout << (list.begin()->data) << endl;
    for(ListNodePosi(int) p = list.begin(); p != list.end(); p = p->succ) {
        cout << p -> data << ' ' ;
    }
    cout << endl;
}
int main() {
    test();
    return 0;
}