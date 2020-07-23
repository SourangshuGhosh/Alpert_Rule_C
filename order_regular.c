# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# include "alpert_rule.h"

/******************************************************************************/

int order_regular ( int rule )

/******************************************************************************/
/*
  Purpose:

    ORDER_REGULAR returns the order of an Alpert rule for regular functions.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    04 December 2015

  Author:

    John Burkardt

  Parameters:

    Input, int RULE, the index of the rule, between 1 and 12.

    Output, int ORDER_REGULAR, the order of the rule.
*/
{
  int order;
  int order_vec[12] = {
     3,  4,  5,  6,  7, 
     8, 12, 16, 20, 24, 
    28, 32 };

  if ( rule < 1 || 12 < rule )
  {
    fprintf ( stderr, "\n" );
    fprintf ( stderr, "ORDER_REGULAR - Fatal error!\n" );
    fprintf ( stderr, "  Input value of RULE is not between 1 and 12.\n" );
    exit ( 1 );
  }

  order = order_vec[rule-1];
  
  return order;
}
