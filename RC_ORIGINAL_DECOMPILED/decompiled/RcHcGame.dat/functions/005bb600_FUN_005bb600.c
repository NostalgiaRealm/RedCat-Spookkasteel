/*
 * FUN_005bb600 at 005bb600
 * undefined FUN_005bb600(void)
 * Address ranges: 005bb600-005bb659
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_005bb600(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x390b8) = param_2;
  *(undefined4 *)(param_1 + 0x390bc) = param_3;
  *(undefined4 *)(param_1 + 0x390c0) = param_4;
  *(undefined4 *)(param_1 + 0x390c4) = param_5;
  *(undefined4 *)(param_1 + 0x390c8) = param_6;
  *(undefined4 *)(param_1 + 0x390cc) = param_7;
  if (DAT_006a9568 != 0) {
    uVar1 = FUN_005bb660(param_1);
    return uVar1;
  }
  return 1;
}

