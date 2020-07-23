# ALPERT_RULE_C

ALPERT_RULE, a FORTRAN90 library which has tabulated values that define Alpert quadrature rules of a number of orders of accuracy for functions that are regular, log singular, or power singular.

The rules defined here assume that the integral is to be taken over the interval [0,1]. The interval is divided into N+1 intervals. The leftmost and rightmost intervals are handled in a special way, depending on whether a particular kind of singularity is expected.

A singularity may exist at the left endpoint, x = 0. The cases are:

- regular, no singularity;
- power, the integrand has the form g(x)=x^(-1/2)*phi(x)+psi(x);
- log, the integrand has the form g(x)=phi(x)*log(x)+psi(x);

In case one, the regular Alpert rule is used in both end intervals. In case two, the power singular Alpert rule is used in the leftmost interval. In case three, the log singular Alpert rule is used in the leftmost interval.

## Reference:

Bradley Alpert,
Hybrid Gauss-Trapezoidal Quadrature Rules,
SIAM Journal on Scientific Computing,
Volume 20, Number 5, pages 1551-1584, 1999.

Questions & Bug reporting
-----

Please use Github issue tracker to report bugs. For other questions please contact [Sourangshu Ghosh](mailto:sourangshug123@gmail.com)

License
-----

ALPERT_RULE_C is released under the MIT license, reproduced in the file LICENSE in this directory.
