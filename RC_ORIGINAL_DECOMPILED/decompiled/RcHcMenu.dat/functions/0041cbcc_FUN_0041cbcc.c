/*
 * FUN_0041cbcc at 0041cbcc
 * undefined __register FUN_0041cbcc(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 0041cbcc-0041cc02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041cbcc(int *param_1,undefined4 param_2,int *param_3)

{
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_1 + 0x10))();
    FUN_0041d040(param_1,0xf);
    (**(code **)(*param_3 + 0x14))(param_3,param_1,param_2);
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}

