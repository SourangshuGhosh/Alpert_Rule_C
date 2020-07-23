# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# include "alpert_rule.h"

/******************************************************************************/

int a_power ( int rule )

/******************************************************************************/
/*
  Purpose:

    A_POWER returns A for an Alpert rule for power singular functions.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    04 December 2015

  Author:

    John Burkardt

  Parameters:

    Input, int RULE, the index of the rule, between 1 and 12.

    Output, int A_POWER, the value of A.
*/
{
  int a;
  int a_vec[12] = {
    1,  2,  2,  2,  2, 
    3,  4,  5,  6,  8, 
    9, 10 };

  if ( rule < 1 || 12 < rule )
  {
    fprintf ( stderr, "\n" );
    fprintf ( stderr, "A_POWER - Fatal error!\n" );
    fprintf ( stderr, "  Input value of RULE is not between 1 and 12.\n" );
    exit ( 1 );
  }

  a = a_vec[rule-1];
  
  return a;
}
