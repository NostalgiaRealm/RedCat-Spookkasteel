/*
 * FUN_00406e3d at 00406e3d
 * undefined __register FUN_00406e3d(int param_1)
 * Address ranges: 00406e3d-00406e61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00406e3d(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0xd7b2) {
    iVar1 = (**(code **)(param_1 + 0x20))();
    if (iVar1 != 0) {
LAB_00406e5d:
      FUN_004028d8(iVar1);
      return;
    }
  }
  else if (*(int *)(param_1 + 4) != 0xd7b1) {
    iVar1 = 0x67;
    goto LAB_00406e5d;
  }
  return;
}

