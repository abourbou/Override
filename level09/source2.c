void set_username(char *arg1)
{
    char **ppcVar2;
    int64_t var_98h;
    char *s;
    int64_t var_4h;
    
    ppcVar2 = &s;
    for (int i = 0x10; i != 0; i--) {
        *ppcVar2 = NULL;
        ++ppcVar2;
    }
    puts(">: Enter your username");
    printf(">>: ");
	fgets(&s, 128, stdin);
    for (var_4h._0_4_ = 0; ((int32_t)var_4h < 0x29 && (*(char *)((int64_t)&s + (int64_t)(int32_t)var_4h) != '\0'));
        var_4h._0_4_ = (int32_t)var_4h + 1) {
        *(undefined *)(arg1 + 0x8c + (int64_t)(int32_t)var_4h) = *(undefined *)((int64_t)&s + (int64_t)(int32_t)var_4h);
    }
    printf(0xbfb, arg1 + 0x8c);
    return;
}
