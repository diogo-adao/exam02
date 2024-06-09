#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int i = 0;
        int j = 0;
        char *lower = "abcdefghijklmnopqrstuvwxyz";
        char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                while (argv[1][i] != lower[j])
                    j++;
                write(1, &lower[25 - j], 1);
                j = 0;
            } else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                while (argv[1][i] != upper[j])
                    j++;
                write(1, &upper[25 - j], 1);
                j = 0;
            } else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}