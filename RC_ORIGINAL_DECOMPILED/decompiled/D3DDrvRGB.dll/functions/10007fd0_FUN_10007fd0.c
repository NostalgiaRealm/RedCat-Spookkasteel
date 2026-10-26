/*
 * FUN_10007fd0 at 10007fd0
 * undefined4 __thiscall FUN_10007fd0(void * this, int param_1, int param_2)
 * Address ranges: 10007fd0-10008097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10007fd0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100127bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100080a0(this);
  FUN_10005fc0((byte *)s_____Initializing_World_Poly_s_ca_10018c3c);
  piVar1 = operator_new(param_1 * 0x40 + 4);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_10008e06(piVar3,0x40,param_1,FUN_10007910);
  }
  *(int **)((int)this + 4) = piVar3;
  iVar4 = 0;
  local_4 = 0xffffffff;
  *(int *)((int)this + 8) = param_1;
  if (0 < param_1) {
    iVar2 = 0;
    do {
      FUN_100079e0((void *)(*(int *)((int)this + 4) + iVar2),0x1000,0x4000,0x400,param_2);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar4 < *(int *)((int)this + 8));
  }
  *(undefined4 *)this = 0;
  ExceptionList = local_c;
  return 0;
}

