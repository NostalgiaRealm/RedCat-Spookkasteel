/*
 * FUN_005c54f0 at 005c54f0
 * undefined FUN_005c54f0(void)
 * Address ranges: 005c54f0-005c5554
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c54f0(undefined4 *param_1)

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
    FUN_005c8f80();
    *piVar1 = 0;
  }
  if (piVar1[8] != 0) {
    FUN_005c8f80();
    piVar1[8] = 0;
  }
  FUN_005cf400(*param_1);
  _DAT_007203c0 = 0;
  *param_1 = 0;
  return;
}

