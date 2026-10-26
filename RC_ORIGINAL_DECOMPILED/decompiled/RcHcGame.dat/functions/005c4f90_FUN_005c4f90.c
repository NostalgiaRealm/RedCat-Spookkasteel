/*
 * FUN_005c4f90 at 005c4f90
 * undefined FUN_005c4f90(void)
 * Address ranges: 005c4f90-005c4fc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c4f90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[1] = 1;
  param_2[2] = uVar1;
  *param_2 = uVar1;
  param_2[3] = *(undefined4 *)(param_1 + 8);
  param_2[6] = *(undefined4 *)(param_1 + 0x10);
  param_2[7] = *(undefined4 *)(param_1 + 0x14);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[8] = 0;
  return 1;
}

