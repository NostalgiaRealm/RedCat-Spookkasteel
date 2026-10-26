/*
 * FUN_005d40c0 at 005d40c0
 * undefined FUN_005d40c0(void)
 * Address ranges: 005d40c0-005d40e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005d40c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1[1];
  if (0 < *param_1) {
    do {
      if (*(int *)(iVar1 + 0x40) == param_2) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (iVar2 < *param_1);
  }
  return 0;
}

