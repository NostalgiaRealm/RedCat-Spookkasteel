/*
 * FUN_00407008 at 00407008
 * undefined __register FUN_00407008(undefined * param_1, undefined4 param_2)
 * Address ranges: 00407008-00407042
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00407008(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0xd7b0) {
    if (3 < *(int *)(param_1 + 4) - 0xd7b0U) {
      FUN_004028d8(0x66);
      return;
    }
    FUN_00406e64(param_1);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar1 = (**(code **)(param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    FUN_004028d8(iVar1);
  }
  return;
}

