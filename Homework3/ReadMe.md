
## Homework 3

### Q:

用欧拉方法和改进的欧拉方法解微分方程 ( $n=2,4,8$ )

$$
\left\{\begin{array}{c}
\frac{d y}{d x}=\frac{4 x}{y}-x y \\
y(0)=3
\end{array}\right.
$$

### A:

#### 1.步长为2

===========EulerMethod===========

|i|x|y|
|-|-|-|
|0|0|3|
|1|0.5|3|
|2|1|2.58333|

=======BackwardEulerMethod=======

|i|x|y|
|-|-|-|
|0|0|3|
|1|0.5|2.79167|
|2|1|2.28211|

#### 2.步长为4

===========EulerMethod===========

|i|x|y|
|-|-|-|
|0|0|3|
|1|0.25|3|
|2|0.5|2.89583|
|3|0.75|2.70652|
|4|1|2.47615|

=======BackwardEulerMethod=======

|i|x|y|
|-|-|-|
|0|0|3|
|1|0.25|2.94792|
|2|0.5|2.79876|
|3|0.75|2.58477|
|4|1|2.35787|

#### 2.步长为8

===========EulerMethod===========

|i|x|y|
|-|-|-|
|0|0|3|
|1|0.125|3|
|2|0.25|2.97396|
|3|0.375|2.92305|
|4|0.5|2.85018|
|5|0.625|2.75976|
|6|0.75|2.65739|
|7|0.875|2.54937|
|8|1|2.44215|

=======BackwardEulerMethod=======

|i|x|y|
|-|-|-|
|0|0|3|
|1|0.125|2.98698|
|2|0.25|2.94836|
|3|0.375|2.88618|
|4|0.5|2.80414|
|5|0.625|2.70727|
|6|0.75|2.60159|
|7|0.875|2.49352|
|8|1|2.3893|

