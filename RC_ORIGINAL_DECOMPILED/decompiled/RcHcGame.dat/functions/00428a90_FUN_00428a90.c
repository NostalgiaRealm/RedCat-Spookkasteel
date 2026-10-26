/*
 * FUN_00428a90 at 00428a90
 * undefined FUN_00428a90(void)
 * Address ranges: 00428a90-00428b09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00428a90(int *param_1)

{
  char cVar1;
  
  if (*(char *)((int)param_1 + 0x181) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0xa8))();
    if (cVar1 != '\0') {
      FUN_004282e0();
      cVar1 = FUN_004a0d00();
      if (cVar1 != '\0') {
        FUN_004282e0();
        FUN_004a0660(param_1 + 0x61,(char)param_1[0x65],param_1[0x66]);
        *(undefined1 *)((int)param_1 + 0x181) = 0;
      }
      if ((char)param_1[0x60] == '\0') {
        FUN_004282e0();
        FUN_00422360();
      }
    }
  }
  return;
}

