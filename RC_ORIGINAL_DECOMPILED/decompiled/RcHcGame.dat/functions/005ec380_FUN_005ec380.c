/*
 * FUN_005ec380 at 005ec380
 * undefined FUN_005ec380(void)
 * Address ranges: 005ec380-005ec38f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005ec380(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -4;
  *(int *)(param_1 + 8) = iVar1;
  return *(undefined4 *)(*(int *)(param_1 + 4) + iVar1);
}

