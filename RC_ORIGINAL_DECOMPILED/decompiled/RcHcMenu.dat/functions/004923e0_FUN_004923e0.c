/*
 * FUN_004923e0 at 004923e0
 * undefined4 __register FUN_004923e0(int param_1, int param_2)
 * Address ranges: 004923e0-00492406
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004923e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00496dfc(*(int **)(param_1 + 0x2c),param_2);
  return *(undefined4 *)(iVar1 + 0x40);
}

