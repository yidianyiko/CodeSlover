## STL介绍

三个最为普遍的STL版本：

1. HP STL
   其他版本的C++ STL，一般是以HP STL为蓝本实现出来的，HP STL是C++ STL的第一个实现版本，而且开放源代码。
2. P.J.Plauger STL
   被Visual C++编译器所采用，不是开源的。
3. SGI STL
   由Silicon Graphics Computer Systems公司参照HP STL实现，被Linux的C++编译器GCC所采用，SGI STL是开源软件，源码可读性甚高。

接下来介绍的栈和队列也是SGI STL里面的数据结构，**我们一般使用的STL也是SGI STL**，知道了使用版本，才知道对应的底层实现。



### Vector

###  set

###  string

### map

### queue

队列 先进先出的数据结构，同样不允许有遍历行为，不提供迭代器, **SGI STL中队列一样是以deque为缺省情况下的底部结构。**

也可以指定list 为起底层实现，初始化queue的语句如下：

```c++
std::queue<int, std::list<int>> third; // 定义以list为底层容器的队列
```

所以STL中队列也不被归类为容器，而被归类为container adapter（ 容器适配器）。

### priority_queue

### stack

栈提供push 和 pop 等等接口，所有元素必须符合先进后出规则，所以栈不提供走访功能，也不提供迭代器(iterator)。不像是set 或者map 提供迭代器iterator来遍历所有元素。



1. C++中stack 是容器么？

   **「栈是以底层容器完成其所有的工作，对外提供统一的接口，底层容器是可插拔的（也就是说我们可以控制使用哪种容器(自己选择）来实现栈的功能）。」**

   所以STL中栈往往不被归类为容器，而被归类为container adapter（容器适配器）。

2. 我们使用的stack是属于那个版本的STL？
   SGI

3. 我们使用的STL中stack是如何实现的？
   **「我们常用的SGI STL，如果没有指定底层实现的话，默认是以deque为缺省情况下栈的低层结构。」**
   从下图中可以看出，栈的内部结构，栈的底层实现可以是vector，deque，list 都是可以的， 主要就是数组和链表的底层实现。

   ![图片](https://mmbiz.qpic.cn/mmbiz_png/ciaqDnJprwv6nH0ySFADicFA0otibQPPHaSqm3wgd2uRV8HjJWibb2VMQXhdaKgicMqSYHxfe1gsFmiaVvlticPkwMPlw/640?wx_fmt=png&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)
   PS：**「SGI STL中 队列底层实现缺省情况下一样使用deque实现的。」**

   我们也可以指定vector为底层容器

   ```c++
   std::stack<int, std::vector<int> > third;  // 使用vector为底层容器的栈
   ```

   

4. stack 提供迭代器来遍历stack空间么？

