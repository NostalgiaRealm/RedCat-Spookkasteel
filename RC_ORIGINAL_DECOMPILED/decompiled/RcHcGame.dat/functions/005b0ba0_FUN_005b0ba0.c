/*
 * FUN_005b0ba0 at 005b0ba0
 * undefined FUN_005b0ba0(void)
 * Address ranges: 005b0ba0-005b0be0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b0ba0(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      if (*(int *)(param_1 + 4) == 0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)(*(int *)(param_1 + 4) + uVar4);
      }
      iVar2 = FUN_0060b2e2((int)*pcVar1);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = *(uint *)(param_1 + 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}

