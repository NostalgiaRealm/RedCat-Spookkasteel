/*
 * FUN_005d3730 at 005d3730
 * undefined FUN_005d3730(void)
 * Address ranges: 005d3730-005d37c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_005d3730(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  *(undefined4 *)(param_1 + 4) = *param_3;
  *(undefined4 *)(param_1 + 8) = param_3[1];
  *(undefined4 *)(param_1 + 0xc) = param_3[2];
  *(undefined4 *)(param_1 + 0x10) = param_3[3];
  *(undefined4 *)(param_1 + 0x20) = param_4;
  uVar1 = __ftol();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = param_5;
  return 1;
}

