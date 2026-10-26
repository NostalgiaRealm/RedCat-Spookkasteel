/*
 * FUN_10008200 at 10008200
 * undefined __thiscall FUN_10008200(void * this, int param_1, int param_2, undefined4 * param_3, float * param_4, int param_5, int param_6)
 * Address ranges: 10008200-100082c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10008200(void *this,int param_1,int param_2,undefined4 *param_3,float *param_4,int param_5,
            int param_6)

{
  int iVar1;
  
  iVar1 = FUN_100081d0(this,param_1);
  if (iVar1 != -1) {
    FUN_10007d20((void *)(iVar1 * 0x40 + *(int *)((int)this + 4)),param_1,param_2,param_3,param_4,
                 param_5,param_6);
    return;
  }
  iVar1 = FUN_10008180(this);
  if (iVar1 != -1) {
    FUN_10007970((void *)(*(int *)((int)this + 4) + iVar1 * 0x40),param_1);
    FUN_10007d20((void *)(*(int *)((int)this + 4) + iVar1 * 0x40),param_1,param_2,param_3,param_4,
                 param_5,param_6);
    return;
  }
  iVar1 = FUN_10008120((int)this);
  FUN_10008160(this,iVar1);
  FUN_10007d20((void *)(iVar1 * 0x40 + *(int *)((int)this + 4)),param_1,param_2,param_3,param_4,
               param_5,param_6);
  return;
}

