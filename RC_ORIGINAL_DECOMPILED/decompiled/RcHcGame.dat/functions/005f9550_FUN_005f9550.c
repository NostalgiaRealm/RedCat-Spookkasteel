/*
 * FUN_005f9550 at 005f9550
 * undefined FUN_005f9550(void)
 * Address ranges: 005f9550-005f9592
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f9550(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (puVar2 = *(undefined4 **)(param_1 + 4); puVar2 != puVar1; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(0);
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

