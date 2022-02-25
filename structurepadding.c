
#include <stdio.h>
struct stu{
    char a;
    int c;
    char b;
};
int main()
{
    struct stu var;
    printf("%ld",sizeof(var));

    return 0;
}
