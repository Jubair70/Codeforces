#include <stdio.h>
#include <errno.h>
#include <string.h>

int mail(const char *to, const char *from, const char *subject, const char *message)
{
    int temp = -1;
    FILE *pipe = popen("/usr/lib/sendmail -t", "w");

    if (pipe != NULL) {
        fprintf(pipe, "To: %s\n", to);
        fprintf(pipe, "From: %s\n", from);
        fprintf(pipe, "Subject: %s\n\n", subject);
        fwrite(message, 1, strlen(message), pipe);
        fwrite(".\n", 1, 2, pipe);
        pclose(pipe);
        temp = 0;
     }
     else {
         perror("Failure");
     }
     return temp;
}

main(int argc, char** argv)
{
    int i;
    printf("argc = %d\n", argc);
    for (i = 0; i < argc; i++)
        printf("argv[%d] = \"%s\"\n", i, argv[i]);

    /// from the command line you have to execute this file
    ///here is the command
    /// gcc email.c -o email1
    /// ./email1

    mail(argv[1], argv[2], argv[3], argv[4]);
}
