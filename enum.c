
#include <stdio.h>
/*enum stu{sun,mon,tue,wed,thus,fri,sat};
enum stu{sun,mon,tue=500,wed,thus,fri,sat};*/
enum stu{sun=1,mon,tue=1,wed,thus=1,fri=0,sat};
int main()
{
    enum stu var;
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d",sun,mon,tue,wed,thus,fri,sat);
    return 0;
}
