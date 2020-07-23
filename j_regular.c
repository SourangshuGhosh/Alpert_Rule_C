# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# include "alpert_rule.h"

/******************************************************************************/

int j_regular ( int rule )

/******************************************************************************/
/*
  Purpose:

    J_REGULAR returns the value of J for an Alpert rule for regular functions.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    04 December 2015

  Author:

    John Burkardt

  Parameters:

    Input, int RULE, the index of the rule, between 1 and 12.

    Output, int J, the value of J.
*/
{
  int j;
  int j_vec[12] = {
     1,  2,  2,  3,  3, 
     4,  6,  8, 10, 12, 
    14, 16 };

  if ( rule < 1 || 12 < rule )
  {
    fprintf ( stderr, "\n" );
    fprintf ( stderr, "J_REGULAR - Fatal error!\n" );
    fprintf ( stderr, "  Input value of RULE is not between 1 and 12.\n" );
    exit ( 1 );
  }

  j = j_vec[rule-1];
  
  return j;
}
