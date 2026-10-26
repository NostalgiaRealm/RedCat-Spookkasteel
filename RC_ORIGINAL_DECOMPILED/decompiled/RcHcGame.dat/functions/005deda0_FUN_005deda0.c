/*
 * FUN_005deda0 at 005deda0
 * undefined FUN_005deda0(void)
 * Address ranges: 005deda0-005dee0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005deda0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14) + param_2;
  }
  else if (param_3 == 1) {
    param_3 = (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14)) - param_2;
  }
  else if (param_3 == 2) {
    param_3 = *(int *)(param_1 + 0x14) + param_2;
  }
  if (*(int *)(param_1 + 0x14) <= param_3) {
    uVar1 = FUN_005cd3d0(2);
    FUN_005decc0();
    return uVar1;
  }
  return 0;
}

