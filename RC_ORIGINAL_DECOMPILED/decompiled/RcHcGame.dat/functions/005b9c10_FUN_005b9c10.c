/*
 * FUN_005b9c10 at 005b9c10
 * undefined FUN_005b9c10(void)
 * Address ranges: 005b9c10-005b9c34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005b9c10(int *param_1,int param_2)

{
  return *(int *)(*(int *)(param_1[6] + 0xd5cc) + param_2 * 0xc) == *param_1;
}

