/*
 * FUN_10006670 at 10006670
 * int __thiscall FUN_10006670(void * this, int param_1)
 * Address ranges: 10006670-10006696
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10006670(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    piVar2 = (int *)(*(int *)((int)this + 4) + 0xc);
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xd;
    } while (iVar1 < *(int *)((int)this + 0xc));
  }
  return -1;
}

