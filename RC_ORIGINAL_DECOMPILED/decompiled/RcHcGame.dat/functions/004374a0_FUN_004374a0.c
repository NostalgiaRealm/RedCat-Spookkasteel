/*
 * FUN_004374a0 at 004374a0
 * undefined FUN_004374a0(void)
 * Address ranges: 004374a0-004374d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_004374a0(undefined4 *param_1)

{
  FUN_004de360();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_0064c5b0;
  FUN_005b3070();
  FUN_005b3070();
  return param_1;
}

