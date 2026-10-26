/*
 * FUN_00422270 at 00422270
 * undefined FUN_00422270(void)
 * Address ranges: 00422270-004222c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00422270(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x375) != '\0') {
    uVar1 = 0;
    FUN_00595470(0);
    FUN_0059bc10(uVar1);
    return;
  }
  if (*(char *)(param_1 + 0x374) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x36c);
  }
  else {
    uVar1 = 0;
  }
  FUN_00595470(uVar1);
  FUN_0059bc10(uVar1);
  FUN_004a09f0(param_3);
  return;
}

