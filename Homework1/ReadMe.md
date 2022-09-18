## Homework 1

### Q:

已知$x_k$与$F(x_k)$, 埃特金插值求$f(0.512)$, $\epsilon = 0.001, \epsilon = 0.0001$. 写出插值式.

| $k$  | $x_k$ | $F(x_k)$ |
| ---- | ----- | -------- |
| 0    | 0.3   | 0.29850  |
| 1    | 0.4   | 0.39646  |
| 2    | 0.5   | 0.49311  |
| 3    | 0.6   | 0.58813  |
| 4    | 0.7   | 0.68122  |

### A:

插值式

- $j \in \mathbb{Z}, \quad P_{0,j} = \frac{x-x_k}{x_0-x_k}f_0+\frac{x-x_0}{x_k-x_0}f_k;$

- $i>0,i \in \mathbb{Z} ,j = i+1, \quad P_{i,j} = P_{i-1,i}+\frac{x-x_{i}}{x_i-x_j}(P_{i-1,i}-P_{i-1,j}).$

计算结果

- $\epsilon=0.001, \quad f(0.512) = 0.504493$
- $\epsilon=0.0001, \quad f(0.512) = 0.504605$

程序说明

C++语法, 可利用g++编译. main函数中设置已知函数点,$x$,精度$\epsilon$, 算法封装入AitkenMethod.