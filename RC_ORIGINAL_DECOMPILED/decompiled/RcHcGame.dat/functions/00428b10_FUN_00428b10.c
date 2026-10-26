/*
 * FUN_00428b10 at 00428b10
 * undefined FUN_00428b10(void)
 * Address ranges: 00428b10-00428b35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00428b10(int *param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x60) = 1;
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  if (cVar1 != '\0') {
    FUN_004282e0();
    FUN_00422350();
  }
  return;
}

