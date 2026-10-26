/*
 * FUN_005d7e10 at 005d7e10
 * undefined FUN_005d7e10(void)
 * Address ranges: 005d7e10-005d7e76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d7e10(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_2 + 0x38);
  if (uVar2 < 0x400) {
    iVar4 = param_1 + uVar2 * 0x44;
  }
  else {
    iVar1 = param_1 + 0x10fbc;
    iVar4 = iVar1;
    if (*(uint *)(param_1 + 0x10ff4) < uVar2) {
      while (iVar3 = *(int *)(iVar4 + 0x40), iVar3 != iVar1) {
        iVar4 = iVar3;
        if (uVar2 <= *(uint *)(iVar3 + 0x38)) {
          iVar4 = *(int *)(iVar3 + 0x40);
          *(int *)(param_2 + 0x40) = iVar4;
          *(int *)(iVar4 + 0x3c) = param_2;
          *(int *)(iVar3 + 0x40) = param_2;
          *(int *)(param_2 + 0x3c) = iVar3;
          return;
        }
      }
    }
  }
  iVar1 = *(int *)(iVar4 + 0x40);
  *(int *)(param_2 + 0x40) = iVar1;
  *(int *)(iVar1 + 0x3c) = param_2;
  *(int *)(iVar4 + 0x40) = param_2;
  *(int *)(param_2 + 0x3c) = iVar4;
  return;
}

