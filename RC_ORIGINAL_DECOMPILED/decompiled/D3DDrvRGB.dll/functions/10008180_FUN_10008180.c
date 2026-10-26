/*
 * FUN_10008180 at 10008180
 * int __fastcall FUN_10008180(void * param_1)
 * Address ranges: 10008180-100081a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10008180(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100081d0(param_1,0);
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

