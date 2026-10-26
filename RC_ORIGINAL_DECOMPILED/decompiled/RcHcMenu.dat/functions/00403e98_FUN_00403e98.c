/*
 * FUN_00403e98 at 00403e98
 * undefined __register FUN_00403e98(int * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 00403e98-00403ec5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403e98(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00403e74(param_3);
  if (param_2 != (undefined4 *)0x0) {
    FUN_00402944(param_2,puVar1,param_3);
  }
  FUN_00403db0(param_1);
  *param_1 = (int)puVar1;
  return;
}

