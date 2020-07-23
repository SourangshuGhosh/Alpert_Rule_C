# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# include "alpert_rule.h"

/******************************************************************************/

double *integrand_regular ( int n, double x[] )

/******************************************************************************/
/*
  Purpose:

    INTEGRAND_REGULAR evaluates the regular test integrand.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    04 December 2015

  Author:

    John Burkardt

  Parameters:

    Input, int N, the number of evaluation points.

    Input, double X[N], the evaluation points.

    Output, double INTEGRAND_REGULAR[N], the integrand at the evaluation points.
*/
{
  double *f;
  int i;

  f = ( double * ) malloc ( n * sizeof ( double ) );

  for ( i = 0; i < n; i++ )
  {
    f[i] = cos ( 200.0E+00 * x[i] ) + cos ( 200.0E+00 * x[i] + 0.3E+00 );
  }

  return f;
}
