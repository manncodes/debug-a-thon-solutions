#include <stdio.h>
#include <math.h>

static int is_prime(unsigned n);

/**
 * @brief Solution to "One digit at a time" problem.
 * 
 * @author Namra Solanki (@whonamra), Mann Patel (@manncodes), Ridham Karia (@ridhamkaria).
 *  
 */


int main(void)
{
  unsigned i;
  unsigned count = 0, sum = 0;

  for (i = 10; count < 11; i++) {
    /* truncate from right to left */
    unsigned k, d;

    k = i;
    while (k != 0) {
      if (!is_prime(k)) {
        goto NEXT;
      }
      k /= 10;
    }

    /* truncate from left to right */
    k = i;
    d = log10(k);
    d = pow(10, d);
    while (d != 1) {
      if (!is_prime(k % d)) {
        goto NEXT;
      }
      d /= 10;
    }
    sum += i;
    count++;

NEXT:
    ;
  }
  printf("%u\n", sum);

  return 0;
}



/**
 * @brief Returns 1 if the passed number is prime, 0 otherwise.
 * 
 * @param n 
 * @return int 
 */
int is_prime(unsigned n)
{
  if (n <= 1) {
    return 0;
  }
  else if (n == 2) {
    return 1;
  }
  else {
    unsigned i;
    for (i = 2; i*i <= n; i++) {
      if (n % i == 0) {
        return 0;
      }
    }
    return 1;
  }
}