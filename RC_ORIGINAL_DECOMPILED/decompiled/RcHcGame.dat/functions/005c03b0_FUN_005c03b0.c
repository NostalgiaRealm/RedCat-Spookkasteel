/*
 * FUN_005c03b0 at 005c03b0
 * undefined FUN_005c03b0(void)
 * Address ranges: 005c03b0-005c040e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005c03b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return false;
  }
  if ((*(int *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    return false;
  }
  if (*(int *)(param_1 + 0x28 + param_2 * 4) == 0) {
    iVar1 = FUN_005c3300();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x28 + param_2 * 4) = 0;
      return true;
    }
    uVar2 = FUN_005cf3b0(iVar1);
    *(undefined4 *)(param_1 + 0x28 + param_2 * 4) = uVar2;
  }
  return *(int *)(param_1 + 0x28 + param_2 * 4) != 0;
}

