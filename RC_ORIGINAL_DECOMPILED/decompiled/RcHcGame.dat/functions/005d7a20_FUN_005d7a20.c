/*
 * FUN_005d7a20 at 005d7a20
 * undefined FUN_005d7a20(void)
 * Address ranges: 005d7a20-005d7a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005d7a20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_100 [256];
  
  if (*(int *)(param_1 + 0xc) == 1) {
    return *(int *)(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0xc) != 2) {
    iVar1 = (*(code *)PTR_FUN_006b0718)(param_1,param_2);
    return iVar1;
  }
  iVar1 = FUN_005c4aa0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = 0;
  do {
    local_100[iVar2] = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  FUN_005c4fd0(2,0x100);
  return iVar1;
}

