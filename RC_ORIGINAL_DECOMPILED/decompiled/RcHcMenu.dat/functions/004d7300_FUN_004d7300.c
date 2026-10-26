/*
 * FUN_004d7300 at 004d7300
 * undefined4 __register FUN_004d7300(uint param_1)
 * Address ranges: 004d7300-004d7323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004d7300(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004aecac(param_1);
  *(int *)(param_1 + 8) = iVar1;
  return *(undefined4 *)(param_1 + 8);
}

