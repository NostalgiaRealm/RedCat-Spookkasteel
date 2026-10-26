/*
 * FUN_005cd950 at 005cd950
 * undefined FUN_005cd950(void)
 * Address ranges: 005cd950-005cd9d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_005cd950(int param_1,undefined4 param_2,undefined4 *param_3,float param_4,float param_5,
            float param_6,float param_7,float param_8,float param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_3[1];
  uVar1 = param_3[2];
  *(float *)(param_1 + 0x24) = param_4 * 0.003921569;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = param_10;
  *(undefined4 *)(param_1 + 0x10) = param_11;
  *(float *)(param_1 + 0x28) = param_5 * 0.003921569;
  *(undefined4 *)(param_1 + 0x14) = param_12;
  *(undefined4 *)(param_1 + 0x44) = param_13;
  *(float *)(param_1 + 0x2c) = param_6 * 0.003921569;
  *(float *)(param_1 + 0x34) = param_7 * 0.003921569;
  *(float *)(param_1 + 0x38) = param_8 * 0.003921569;
  *(float *)(param_1 + 0x3c) = param_9 * 0.003921569;
  return;
}

