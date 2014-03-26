/* coinflip is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY, to the extent permitted by 
   applicable law. It comes without even the implied warranty 
   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
   
   coinflip is subject to the ncurses-variant of the 
   X11 license, see the LICENSE file.
*/

#define INCL_DOSPROCESS

#include <os2.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv)
{
/* These are the labels for the coin's sides */
int caption[2]={'1','*'},sideNo;
	
/* Initialize the random number generator .
 * It waits a second in order to get different numbers
 * even if the programm would be executed twice in the
 * same second, unless any argument is specified.
 */
if (argc==1)
   DosSleep(1000);
srand(time(NULL));
	
/* Get random number 0 or 1 */
sideNo=rand()%2;
	
/* Print the caption associated to the random number */
printf("(%c)\n",caption[sideNo]);
	
/* Also return the random number 0 or 1 */
return sideNo;
}
