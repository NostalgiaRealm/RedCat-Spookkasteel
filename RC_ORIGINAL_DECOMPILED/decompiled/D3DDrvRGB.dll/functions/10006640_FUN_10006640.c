/*
 * FUN_10006640 at 10006640
 * int __fastcall FUN_10006640(void * param_1)
 * Address ranges: 10006640-10006664
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10006640(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10006670(param_1,0);
  if (iVar1 < 0) {
    iVar1 = *(int *)((int)param_1 + 0xc);
    if (iVar1 < *(int *)((int)param_1 + 8)) {
      *(int *)((int)param_1 + 0xc) = iVar1 + 1;
      return iVar1;
    }
    iVar1 = -1;
  }
  return iVar1;
}

