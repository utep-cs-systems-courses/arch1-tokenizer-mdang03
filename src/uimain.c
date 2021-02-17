#include <stdio.h>
#include "tokenizer.h"

int main()
{
  puts("Hello");

  while(1){
    fputs("Select a function, (space_char = a, non_space_char = b, *word_start = c, *word_terminator = d, count_words = e) or 'q' to quit\n", stdout);
    fflush(stdout);
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */

    if (c == EOF)     /* terminate on end-of-file */

      goto done;



    // Given the user answer, select which method to call

    switch (c) {
    case 'a':
      puts("You selected space_char:");
      break;
    case 'b':
      puts("You selected non_space_char:");
      break;
    case 'c':
      puts("You selected *word_start:");
      break;
    case 'd':
      puts("You selected *word_terminator:");
      break;
    case 'e':
      puts("You selected count_words:");
      break;
    case 'q':
      puts("Bye!");
      goto done; /* terminate */
    case '\n':
      break;
    default:
      printf("Unrecognized option '%c', please try again!\n", c);
    }
  }

 done:
  return 0;
}
