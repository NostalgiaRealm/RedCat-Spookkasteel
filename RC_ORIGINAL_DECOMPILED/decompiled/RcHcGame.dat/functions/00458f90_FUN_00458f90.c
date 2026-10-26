/*
 * FUN_00458f90 at 00458f90
 * undefined FUN_00458f90(void)
 * Address ranges: 00458f90-00458fc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00458f90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined1 *)(param_1 + 0x484) = 0;
  if (*(int *)(param_1 + 0x450) == 9) {
    *(undefined4 *)(param_1 + 0x44c) = 9;
    *(undefined4 *)(param_1 + 0x450) = uVar1;
    *(undefined1 *)(param_1 + 0x454) = 1;
  }
  return;
}

