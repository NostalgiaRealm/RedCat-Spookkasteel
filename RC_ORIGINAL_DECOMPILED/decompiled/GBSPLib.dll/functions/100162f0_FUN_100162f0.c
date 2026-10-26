/*
 * FUN_100162f0 at 100162f0
 * undefined FUN_100162f0(void)
 * Address ranges: 100162f0-1001634e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100162f0(int param_1,int param_2)

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
    iVar1 = FUN_10018c10();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x28 + param_2 * 4) = 0;
      return true;
    }
    uVar2 = FUN_10014310(iVar1);
    *(undefined4 *)(param_1 + 0x28 + param_2 * 4) = uVar2;
  }
  return *(int *)(param_1 + 0x28 + param_2 * 4) != 0;
}

