# AtCoder
![](https://img.shields.io/badge/C++-4682b4?style=for-the-badge&logo=cplusplus)

Use AtCoder for learning in C++.
As for the notation, I would like to aim to submit it in a state where it is possible through norminette as well as 42.

## Compiler
GCC

## input, output
- input uses cin
```
cin >> n;
```
- output uses cout
```
cout << n;
```

## g++ options
-0, -O0, -O1, -O2, -O3, -Os, -Ofast, -Og


## Optimization of C++
- Supports automatic vectorization of the compiler, vectorizes loop processing, and optimization.
```
#pragma GCC target("avx")
```
- Use -O3 because -Ofast ignores strict standards compliance.
```
#pragma GCC optimize("O3")
```
- Divide and reduce the maximum number of loops（Increase the number of loops themselves and decrease the number of loops. Not recommended when the number of loops in the code is not high).
```
#pragma GCC optimize("unroll-loops")
```
