# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# include "alpert_rule.h"

/******************************************************************************/

int j_log ( int rule )

/******************************************************************************/
/*
  Purpose:

    J_LOG returns the value of J for an Alpert rule for log singular functions.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    04 December 2015

  Author:

    John Burkardt

  Parameters:

    Input, int RULE, the index of the rule, between 1 and 10.

    Output, int J_LOG, the value of J.
*/
{
  int j;
  int j_vec[10] = {
     1,  2,  3,  4,  5, 
     7, 10, 11, 14, 15 };

  if ( rule < 1 || 10 < rule )
  {
    fprintf ( stderr, "\n" );
    fprintf ( stderr, "J_LOG - Fatal error!\n" );
    fprintf ( stderr, "  Input value of RULE is not between 1 and 10.\n" );
    exit ( 1 );
  }

  j = j_vec[rule-1];
  
  return j;
}
