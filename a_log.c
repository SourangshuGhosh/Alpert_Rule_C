# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# include "alpert_rule.h"

/******************************************************************************/

int a_log ( int rule )

/******************************************************************************/
/*
  Purpose:

    A_LOG returns the value of A for an Alpert rule for log singular functions.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    04 December 2015

  Author:

    John Burkardt

  Parameters:

    Input, int RULE, the index of the rule, between 1 and 10.

    Output, int A_LOG, the value of A.
*/
{
  int a;
  int a_vec[10] = {
    1, 2, 2, 3, 3, 
    5, 6, 7, 9, 10 };

  if ( rule < 1 || 10 < rule )
  {
    fprintf ( stderr, "\n" );
    fprintf ( stderr, "A_LOG - Fatal error!\n" );
    fprintf ( stderr, "  Input value of RULE is not between 1 and 10.\n" );
    exit ( 1 );
  }

  a = a_vec[rule-1];
  
  return a;
}
