# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# include "alpert_rule.h"

/******************************************************************************/

double integral_log ( )

/******************************************************************************/
/*
  Purpose:

    INTEGRAL_LOG evaluates the test integral with logarithmic singularity.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    04 December 2015

  Author:

    John Burkardt

  Parameters:

    Output, double INTEGRAL_LOG, the integral of the test integrand 
    from 0 to 1.
*/
{
  double value;

  value = -0.012771107587415899716E+00;

  return value;
}
