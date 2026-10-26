/*
 * FUN_10006490 at 10006490
 * undefined4 __thiscall FUN_10006490(void * this, int param_1, int param_2)
 * Address ranges: 10006490-10006557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10006490(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001279b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10006560(this);
  FUN_10005fc0((byte *)s_____Initializing_Misc_Poly_s_cac_1001896c);
  piVar1 = operator_new(param_1 * 0x34 + 4);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_10008e06(piVar2,0x34,param_1,FUN_100060a0);
  }
  *(int **)((int)this + 4) = piVar2;
  iVar3 = 0;
  local_4 = 0xffffffff;
  *(int *)((int)this + 8) = param_1;
  if (0 < param_1) {
    iVar4 = 0;
    do {
      FUN_10006150((void *)(*(int *)((int)this + 4) + iVar4),0x1000,0x4000,param_2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x34;
    } while (iVar3 < *(int *)((int)this + 8));
  }
  *(undefined4 *)this = 0;
  ExceptionList = local_c;
  return 0;
}

