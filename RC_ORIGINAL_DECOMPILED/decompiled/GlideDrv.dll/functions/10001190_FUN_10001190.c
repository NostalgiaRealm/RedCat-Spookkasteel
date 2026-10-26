/*
 * FUN_10001190 at 10001190
 * undefined4 __cdecl FUN_10001190(int param_1)
 * Address ranges: 10001190-100011b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10001190(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10001320(param_1);
  puVar2 = (undefined4 *)(param_1 + 0x104);
  for (iVar1 = 0x780; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

