/*
 * FUN_00537300 at 00537300
 * undefined FUN_00537300(void)
 * Address ranges: 00537300-00537335
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_00537300(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != *param_2) {
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
    }
    iVar1 = *param_2;
    *param_1 = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    }
  }
  return param_1;
}

