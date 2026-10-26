/*
 * FUN_0059b490 at 0059b490
 * undefined FUN_0059b490(void)
 * Address ranges: 0059b490-0059b4e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0059b490(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_4;
  
  local_4 = param_1;
  cVar1 = FUN_0059b1f0();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x2c) == '\0')) {
    uVar2 = 0xffffffff;
    FUN_0059df90(*(undefined4 *)(param_1 + 0x1c));
    FUN_00598580(uVar2);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_4 = -1;
  FUN_0059b1d0(&local_4);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}

