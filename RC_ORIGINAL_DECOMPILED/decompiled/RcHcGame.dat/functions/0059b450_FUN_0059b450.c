/*
 * FUN_0059b450 at 0059b450
 * undefined FUN_0059b450(void)
 * Address ranges: 0059b450-0059b48f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0059b450(int param_1)

{
  undefined4 uVar1;
  int local_4;
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    uVar1 = 0xffffffff;
    local_4 = param_1;
    FUN_0059df90(*(undefined4 *)(param_1 + 0x30));
    FUN_00598580(uVar1);
    *(undefined1 *)(param_1 + 0x34) = 0;
    local_4 = -1;
    FUN_0059b1d0(&local_4);
  }
  return;
}

