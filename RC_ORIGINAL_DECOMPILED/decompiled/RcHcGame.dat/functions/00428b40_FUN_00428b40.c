/*
 * FUN_00428b40 at 00428b40
 * undefined FUN_00428b40(void)
 * Address ranges: 00428b40-00428b6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00428b40(int *param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(char *)((int)param_1 + 0x181) == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xa8))();
    if (cVar1 != '\0') {
      FUN_004282e0();
      FUN_00422360();
    }
  }
  return;
}

