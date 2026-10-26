/*
 * FUN_0047fa78 at 0047fa78
 * undefined4 __register FUN_0047fa78(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 0047fa78-0047faa4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0047fa78(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == *(int *)(param_1 + 0xc)) {
    uVar1 = (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_3);
  }
  else {
    uVar1 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (**(code **)(param_1 + 0x1c))();
  }
  return uVar1;
}

