/*
 * FUN_00536e50 at 00536e50
 * undefined FUN_00536e50(void)
 * Address ranges: 00536e50-00536e92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00536e50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (puVar2 = *(undefined4 **)(param_1 + 4); puVar2 != puVar1; puVar2 = puVar2 + 0xb) {
    (**(code **)*puVar2)(0);
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

