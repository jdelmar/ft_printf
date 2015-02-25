make;
make clean;
gcc -Werror -Wall -Wextra -o test maintest.c -I . -L . -lftprintf
