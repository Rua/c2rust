void test_builtin_object_size(void) {
    int x = 0;
    unsigned long n = __builtin_object_size(&x, 1);
}
