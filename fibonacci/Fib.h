//
// Created by 小乌嘎 on 2020/8/23.
//

#ifndef DSA_FIB_H
#define DSA_FIB_H
class Fib{ //Fibonacci数列类
private:
    int f, g; // f = fib(k - 1), g = fib(k),均为int型，很快就是数值溢出
public:
    Fib(int n) {
        f = 1; g = 0;
        while(g < n) next();
    }
    int get() {
        return g;
    }
    int next() { //转至下一Fibonacci项，O(1)时间
        g+= f;
        f = g - f;
        return g;
    }
    int prev() { //转至上一Fibonacci项，O(1)时间
        f = g - f;
        g -= f;
        return g;
    }
};
#endif //DSA_FIB_H
