/* Danny, 400505160, 2024/09/18
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
        
	// Question Strings
	char *question1 = "What is the C equivalent of a print statement? (not printf)"; 
	char *question2 = "What system is Linux developed from?";
	char *question3 = "What command is necessary before git commit?";

	// Answer Strings
	char *answer1 = "puts";
	char *answer2 = "unix";
	char *answer3 = "git add";

	
	// Check for question fetching or help/misuse
        if (argc == 2) {
                if (strcmp(argv[1], "-1") == 0) {
			puts(question1);
			return EXIT_SUCCESS;
		} else if (strcmp(argv[1], "-2") == 0) {
			puts(question2);
			return EXIT_SUCCESS;
		} else if (strcmp(argv[1], "-3") == 0) {
                        puts(question3);
			return EXIT_SUCCESS;
		} else if (strcmp(argv[1], "--help") == 0) {
                        puts("quiz [-#] gets question #");
			puts("quiz [-#] [<answer>] check your answer");
			return EXIT_SUCCESS;
		} else {
			puts("Usage: quiz [-#] [<answer>]");
			puts("Try 'quiz --help' for more information.");
			return EXIT_FAILURE;
		}
        }

	// Check for answering question or misuse
	else if (argc == 3) {
                if (strcmp(argv[1], "-1") == 0) {
			if (strcmp(argv[2], answer1) == 0) {
                       		puts("You are correct for question 1!");
			} else {
				puts("This is incorrect for question 1.");
			}
			return EXIT_SUCCESS;
                } else if (strcmp(argv[1], "-2") == 0) {
                        if (strcmp(argv[2], answer2) == 0) {
                                puts("You are correct for question 2!");
			} else {
                                puts("This is incorrect for question 2.");
                        }
			return EXIT_SUCCESS;
                } else if (strcmp(argv[1], "-3") == 0) {
                        if (strcmp(argv[2], answer3) == 0) {
                                puts("You are correct for question 3!");
			} else {
                                puts("This is incorrect for question 3.");
                        }
			return EXIT_SUCCESS;
                } else {
			puts("Usage: quiz [-#] [<answer>]");
                        puts("Try 'quiz --help' for more information.");
                        return EXIT_FAILURE;
		}

        }

	// check for misuse
	else {
		puts("Usage: quiz [-#] [<answer>]");
                puts("Try 'quiz --help' for more information.");
                return EXIT_FAILURE;
	}
}
