# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# include "alpert_rule.h"

/******************************************************************************/

int order_log ( int rule )

/******************************************************************************/
/*
  Purpose:

    ORDER_LOG returns the order of an Alpert rule for log singular functions.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    04 December 2015

  Author:

    John Burkardt

  Parameters:

    Input, int RULE, the index of the rule, between 1 and 10.

    Output, int ORDER_LOG, the order of the rule.
*/
{
  int order;
  int order_vec[10] = {
     2,  3,  4,  5,  6, 
     8, 10, 12, 14, 16 };

  if ( rule < 1 || 10 < rule )
  {
    fprintf ( stderr, "\n" );
    fprintf ( stderr, "ORDER_LOG - Fatal error!\n" );
    fprintf ( stderr, "  Input value of RULE is not between 1 and 10.\n" );
    exit ( 1 );
  }

  order = order_vec[rule-1];
  
  return order;
}
