/*
 * FUN_00403270 at 00403270
 * undefined __register FUN_00403270(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00403270-00403284
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403270(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_ZF;
  
  FUN_00403240(*param_1);
  if (!(bool)in_ZF) {
                    /* WARNING: Could not recover jumptable at 0x0040327d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  FUN_00402b70();
  return;
}

