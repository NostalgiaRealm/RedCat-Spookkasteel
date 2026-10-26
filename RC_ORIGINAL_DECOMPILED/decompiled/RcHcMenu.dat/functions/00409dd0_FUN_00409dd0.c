/*
 * FUN_00409dd0 at 00409dd0
 * undefined4 __register FUN_00409dd0(undefined * param_1)
 * Address ranges: 00409dd0-00409ddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00409dd0(undefined *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d68(param_1);
  return CONCAT31((int3)((uint)(iVar1 + 1) >> 8),iVar1 + 1 != 0);
}

