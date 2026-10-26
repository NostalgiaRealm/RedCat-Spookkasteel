/*
 * FUN_004a99f0 at 004a99f0
 * undefined4 __register FUN_004a99f0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 004a99f0-004a9a0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004a99f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x4a) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x48))(*(undefined4 *)(param_1 + 0x4c),param_2,param_3,param_4);
  }
  return uVar1;
}

