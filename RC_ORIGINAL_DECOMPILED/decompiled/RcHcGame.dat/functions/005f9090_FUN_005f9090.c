/*
 * FUN_005f9090 at 005f9090
 * undefined FUN_005f9090(void)
 * Address ranges: 005f9090-005f90fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f9090(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 4;
  }
  FUN_005e6f30(param_2,iVar1);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar1 != iVar2) {
    do {
      FUN_005e6ed0(param_2,CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(iVar1 + 0xc)));
      if (*(char *)(iVar1 + 0xc) == '\0') {
        FUN_005e6f30(param_2,*(undefined4 *)(iVar1 + 4));
        FUN_005e6f30(param_2,*(undefined4 *)(iVar1 + 8));
      }
      iVar2 = *(int *)(param_1 + 0xc);
      iVar1 = iVar1 + 0x10;
    } while (iVar1 != iVar2);
  }
  return;
}

