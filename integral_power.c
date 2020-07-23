# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# include "alpert_rule.h"

/******************************************************************************/

double integral_power ( )

/******************************************************************************/
/*
  Purpose:

    INTEGRAL_POWER evaluates the test integral with power singularity.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    04 December 2015

  Author:

    John Burkardt

  Parameters:

    Output, double INTEGRAL POWER, the integral of the test integrand 
    from 0 to 1.
*/
{
  double value;

  value = 0.079321002746971411182E+00;

  return value;
}
