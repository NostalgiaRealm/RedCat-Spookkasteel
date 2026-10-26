/*
 * FUN_004f6b88 at 004f6b88
 * undefined __register FUN_004f6b88(int param_1, uint * param_2)
 * Address ranges: 004f6b88-004f6baf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6b88(int param_1,uint *param_2)

{
  undefined1 in_ZF;
  
  FUN_00404140(*(uint **)(param_1 + 0xc),param_2);
  if (!(bool)in_ZF) {
    FUN_00403e04((int *)(param_1 + 0xc),param_2);
    FUN_00412c80(param_1,'\0');
  }
  return;
}

