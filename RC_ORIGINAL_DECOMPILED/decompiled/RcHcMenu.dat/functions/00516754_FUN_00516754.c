/*
 * FUN_00516754 at 00516754
 * undefined4 __register FUN_00516754(char * param_1)
 * Address ranges: 00516754-00516767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00516754(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*param_1 == '\\')) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

