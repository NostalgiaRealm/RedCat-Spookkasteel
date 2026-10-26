/*
 * FUN_00614dcd at 00614dcd
 * undefined FUN_00614dcd(void)
 * Address ranges: 00614dcd-00614def
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00614dcd(undefined4 *param_1,char param_2)

{
  param_1[1] = param_1[1] & 0xffffff80;
  *param_1 = 0;
  if (param_2 != '\0') {
    FUN_00615599(&param_2,1);
  }
  return param_1;
}

