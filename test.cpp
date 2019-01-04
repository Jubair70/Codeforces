#include <stdio.h>
#include <string.h>
#include <errno.h>
void sendmail()
{
    static int i=0;
    i++;
    printf("%d",i);
}

main(int argc, char** argv)
{
   sendmail();
}
