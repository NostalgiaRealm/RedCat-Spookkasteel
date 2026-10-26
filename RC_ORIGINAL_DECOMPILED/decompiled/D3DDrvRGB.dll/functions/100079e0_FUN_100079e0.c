/*
 * FUN_100079e0 at 100079e0
 * undefined4 __thiscall FUN_100079e0(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100079e0-10007a66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100079e0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  void *pvVar1;
  
  FUN_10007a70(this);
  pvVar1 = operator_new(param_1 << 5);
  *(int *)((int)this + 0x34) = param_1;
  *(void **)((int)this + 0x30) = pvVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  pvVar1 = operator_new(param_3 << 4);
  *(int *)((int)this + 0x20) = param_3;
  *(void **)((int)this + 0x10) = pvVar1;
  *(undefined4 *)((int)this + 0x24) = 0;
  pvVar1 = operator_new(param_2 * 2);
  *(void **)((int)this + 0x14) = pvVar1;
  *(int *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(int *)((int)this + 0x3c) = param_4;
  FUN_10005fc0((byte *)s_____Initializing_World_slot___d__10018bcc);
  FUN_10007950((int)this);
  *(undefined4 *)this = 0;
  return 0;
}

