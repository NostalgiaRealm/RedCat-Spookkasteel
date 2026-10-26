/*
 * FUN_10002060 at 10002060
 * undefined __cdecl FUN_10002060(int param_1)
 * Address ranges: 10002060-1000208c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002060(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_1) {
    puVar2 = &DAT_100e1a30;
    puVar3 = &DAT_100e0a30;
    for (iVar1 = param_1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  FUN_10002050();
  return;
}

