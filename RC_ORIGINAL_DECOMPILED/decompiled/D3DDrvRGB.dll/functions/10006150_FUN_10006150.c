/*
 * FUN_10006150 at 10006150
 * undefined4 __thiscall FUN_10006150(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 10006150-1000619e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10006150(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  
  FUN_100061a0(this);
  pvVar1 = operator_new(param_1 << 5);
  *(int *)((int)this + 0x2c) = param_1;
  *(void **)((int)this + 0x28) = pvVar1;
  pvVar1 = operator_new(param_2 * 2);
  *(void **)((int)this + 0x1c) = pvVar1;
  *(int *)((int)this + 0x20) = param_2;
  *(int *)((int)this + 0x18) = param_3;
  FUN_100060d0((int)this);
  *(undefined4 *)this = 0;
  return 0;
}

