/*
 * FUN_1001cd40 at 1001cd40
 * undefined FUN_1001cd40(void)
 * Address ranges: 1001cd40-1001cda4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1001cd40(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)*param_1;
  uVar2 = piVar1[0x10] & 0xfffffffc;
  if (uVar2 != 0) {
    piVar1[0x10] = ~piVar1[0x10] & 3U ^ uVar2 - 1;
    return;
  }
  if (*piVar1 != 0) {
    FUN_1001bb60();
    *piVar1 = 0;
  }
  if (piVar1[8] != 0) {
    FUN_1001bb60();
    piVar1[8] = 0;
  }
  FUN_10014360(*param_1);
  _DAT_1003fde8 = 0;
  *param_1 = 0;
  return;
}

