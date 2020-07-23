# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# include "alpert_rule.h"

/******************************************************************************/

double integral_regular ( )

/******************************************************************************/
/*
  Purpose:

    INTEGRAL_REGULAR evaluates the regular test integral.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    04 December 2015

  Author:

    John Burkardt

  Parameters:

    Output, double INTEGRAL_REGULAR, the integral of the test integrand 
    from 0 to 1.
*/
{
  double value;

  value = ( - sin ( 0.3E+00 ) + sin ( 200.0E+00 ) 
    + sin ( 200.3E+00 ) ) / 200.0E+00;

  return value;
}
