#include <stdio.h>
struct stu{
    int a:5;
    char c:5;
    int b:5;
};
int main()
{
    struct stu s;
    printf("%ld",sizeof(s));

    return 0;
}
