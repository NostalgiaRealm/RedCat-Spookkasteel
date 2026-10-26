/*
 * FUN_00536ea0 at 00536ea0
 * undefined FUN_00536ea0(void)
 * Address ranges: 00536ea0-00536ee2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00536ea0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (puVar2 = *(undefined4 **)(param_1 + 4); puVar2 != puVar1; puVar2 = puVar2 + 7) {
    (**(code **)*puVar2)(0);
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

