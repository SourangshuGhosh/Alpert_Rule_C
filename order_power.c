# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# include "alpert_rule.h"

/******************************************************************************/

double order_power ( int rule )

/******************************************************************************/
/*
  Purpose:

    ORDER_POWER returns the order of an Alpert rule for power singular functions.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    04 December 2015

  Author:

    John Burkardt

  Parameters:

    Input, int RULE, the index of the rule, between 1 and 10.

    Output, double ORDER_POWER, the order of the rule.
*/
{
  double order;
  double order_vec[12] = {
     1.5,  2.0,  2.5,  3.0,  3.5, 
     4.0,  6.0,  8.0, 10.0, 12.0, 
    14.0, 16.0 };

  if ( rule < 1 || 12 < rule )
  {
    fprintf ( stderr, "\n" );
    fprintf ( stderr, "ORDER_POWER - Fatal error!\n" );
    fprintf ( stderr, "  Input value of RULE is not between 1 and 12.\n" );
    exit ( 1 );
  }

  order = order_vec[rule-1];
  
  return order;
}
