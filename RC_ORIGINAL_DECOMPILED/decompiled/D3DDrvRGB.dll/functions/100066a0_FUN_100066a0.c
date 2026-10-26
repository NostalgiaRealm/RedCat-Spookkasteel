/*
 * FUN_100066a0 at 100066a0
 * undefined __thiscall FUN_100066a0(void * this, int param_1, undefined4 * param_2, int param_3, int param_4)
 * Address ranges: 100066a0-10006752
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100066a0(void *this,int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_10006670(this,param_1);
  if (iVar1 != -1) {
    FUN_100062c0((void *)(*(int *)((int)this + 4) + iVar1 * 0x34),param_1,param_2,param_3,param_4);
    return;
  }
  iVar1 = FUN_10006640(this);
  if (iVar1 != -1) {
    FUN_100060e0((void *)(*(int *)((int)this + 4) + iVar1 * 0x34),param_1);
    FUN_100062c0((void *)(*(int *)((int)this + 4) + iVar1 * 0x34),param_1,param_2,param_3,param_4);
    return;
  }
  iVar1 = FUN_100065e0((int)this);
  FUN_10006620(this,iVar1);
  FUN_100062c0((void *)(*(int *)((int)this + 4) + iVar1 * 0x34),param_1,param_2,param_3,param_4);
  return;
}

