/*
 * FUN_00502710 at 00502710
 * undefined FUN_00502710(void)
 * Address ranges: 00502710-00502746
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00502710(int *param_1)

{
  if (*(char *)((int)param_1 + 0xdd) != '\0') {
    FUN_00502350((char)param_1[0x37]);
    *(undefined1 *)(param_1 + 0x2a) = 1;
    (**(code **)(*param_1 + 0x4c))(param_1 + 0x34);
    *(undefined1 *)((int)param_1 + 0xdd) = 0;
  }
  return;
}

