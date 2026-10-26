/*
 * FUN_10002a00 at 10002a00
 * undefined FUN_10002a00(void)
 * Address ranges: 10002a00-10002a44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10002a00(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  undefined4 *puVar1;
  
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x100))) {
    puVar1 = (undefined4 *)(param_2 * 0x10 + param_1);
    *param_3 = *puVar1;
    *param_4 = puVar1[1];
    *param_5 = puVar1[2];
    *param_6 = puVar1[3];
    return 1;
  }
  return 0;
}

