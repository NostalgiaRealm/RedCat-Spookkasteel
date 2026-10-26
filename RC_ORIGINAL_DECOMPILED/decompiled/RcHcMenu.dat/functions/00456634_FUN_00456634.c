/*
 * FUN_00456634 at 00456634
 * undefined __register FUN_00456634(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00456634-00456687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00456634(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00433d7c((int)param_1,param_2,param_3,param_4,param_5);
  if (param_1[0x4d] != 0) {
    if (((char)param_1[0x5a] == '\x01') || ((char)param_1[0x5a] == '\x03')) {
      FUN_00455dec((int)param_1);
    }
    FUN_0045631c(param_1);
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}

