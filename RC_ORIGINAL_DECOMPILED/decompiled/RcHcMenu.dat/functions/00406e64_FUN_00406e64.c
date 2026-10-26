/*
 * FUN_00406e64 at 00406e64
 * undefined __register FUN_00406e64(undefined * param_1)
 * Address ranges: 00406e64-00406e9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00406e64(undefined *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0xd7b1) {
    if (2 < *(int *)(param_1 + 4) - 0xd7b1U) {
      if (param_1 == &DAT_00573050) {
        return;
      }
      iVar1 = 0x67;
      goto LAB_00406e89;
    }
    iVar1 = (**(code **)(param_1 + 0x1c))();
    if (iVar1 != 0) goto LAB_00406e89;
  }
  iVar1 = (**(code **)(param_1 + 0x24))(param_1);
  if (iVar1 == 0) {
    return;
  }
LAB_00406e89:
  FUN_004028d8(iVar1);
  return;
}

