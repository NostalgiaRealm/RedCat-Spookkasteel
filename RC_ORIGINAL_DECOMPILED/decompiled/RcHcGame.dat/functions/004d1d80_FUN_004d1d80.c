/*
 * FUN_004d1d80 at 004d1d80
 * undefined FUN_004d1d80(void)
 * Address ranges: 004d1d80-004d1de5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004d1d80(int *param_1)

{
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)((int)param_1 + 0x135) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  FUN_005b3070();
  FUN_005b3070();
  FUN_005b30c0();
  FUN_004cfc00(param_1[0x4e],param_1 + 0x52);
  (**(code **)(*param_1 + 0x54))();
  return;
}

