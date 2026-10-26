/*
 * FUN_1001e760 at 1001e760
 * undefined FUN_1001e760(void)
 * Address ranges: 1001e760-1001e7df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001e760(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_100 [256];
  
  if (*(int *)(param_1 + 0xc) == 1) {
    return *(int *)(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0xc) != 2) {
    iVar1 = (*(code *)PTR_FUN_1003c7f0)(param_1,param_2);
    return iVar1;
  }
  iVar1 = FUN_10019ae0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = 0;
  do {
    local_100[iVar2] = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  FUN_10019fe0(2,0x100);
  return iVar1;
}

