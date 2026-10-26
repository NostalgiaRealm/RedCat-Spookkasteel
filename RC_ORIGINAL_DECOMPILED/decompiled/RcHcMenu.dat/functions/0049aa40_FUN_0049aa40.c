/*
 * FUN_0049aa40 at 0049aa40
 * undefined __register FUN_0049aa40(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0049aa40-0049aa63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049aa40(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = FUN_0049a29c(param_1,param_2,param_3);
  FUN_0049b6c0((int)param_1,(int)piVar1);
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

