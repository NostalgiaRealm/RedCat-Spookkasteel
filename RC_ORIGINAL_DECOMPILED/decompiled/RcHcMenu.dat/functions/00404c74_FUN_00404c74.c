/*
 * FUN_00404c74 at 00404c74
 * undefined4 * __register FUN_00404c74(int param_1, char * param_2)
 * Address ranges: 00404c74-00404c86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00404c74(int param_1,char *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004027e8(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00404840(puVar1,param_2);
  }
  return puVar1;
}

