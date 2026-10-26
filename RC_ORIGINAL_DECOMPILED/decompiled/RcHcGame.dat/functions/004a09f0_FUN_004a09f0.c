/*
 * FUN_004a09f0 at 004a09f0
 * undefined FUN_004a09f0(void)
 * Address ranges: 004a09f0-004a0ab0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004a09f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x44) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x3d) == '\0') {
    iVar1 = __ftol();
    *(int *)(param_1 + 0x28) = iVar1;
    iVar2 = *(int *)(param_1 + 0x30);
    if (*(char *)(param_1 + 0x3c) != '\0') {
      if (iVar2 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x28);
        do {
          iVar1 = iVar1 - *(int *)(param_1 + 0x34);
        } while (iVar2 < iVar1);
        *(int *)(param_1 + 0x28) = iVar1;
        FUN_004a0ac0(param_2);
        return;
      }
      goto LAB_004a0aa1;
    }
    if (iVar1 <= iVar2) goto LAB_004a0aa1;
  }
  else {
    iVar1 = __ftol();
    *(int *)(param_1 + 0x28) = iVar1;
    iVar2 = *(int *)(param_1 + 0x2c);
    if (*(char *)(param_1 + 0x3c) != '\0') {
      if (iVar1 < iVar2) {
        iVar1 = *(int *)(param_1 + 0x28);
        do {
          iVar1 = iVar1 + *(int *)(param_1 + 0x34);
        } while (iVar1 < iVar2);
        *(int *)(param_1 + 0x28) = iVar1;
        FUN_004a0ac0(param_2);
        return;
      }
      goto LAB_004a0aa1;
    }
    if (iVar2 <= iVar1) goto LAB_004a0aa1;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  *(undefined1 *)(param_1 + 0x4c) = 1;
LAB_004a0aa1:
  FUN_004a0ac0(param_2);
  return;
}

