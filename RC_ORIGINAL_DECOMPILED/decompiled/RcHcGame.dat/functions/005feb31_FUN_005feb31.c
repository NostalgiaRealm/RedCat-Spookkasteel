/*
 * FUN_005feb31 at 005feb31
 * undefined FUN_005feb31(void)
 * Address ranges: 005feb31-005feb72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005feb31(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_005feaa2(0);
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_005fe5f0(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_005fe5f0(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

