#include "my_malloc.h"

VALUE rb_mMyMalloc;

void
Init_my_malloc(void)
{
  rb_mMyMalloc = rb_define_module("MyMalloc");
}
