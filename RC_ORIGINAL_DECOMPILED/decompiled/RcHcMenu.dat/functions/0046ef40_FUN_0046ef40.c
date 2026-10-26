/*
 * FUN_0046ef40 at 0046ef40
 * undefined __register FUN_0046ef40(int param_1, uint * param_2)
 * Address ranges: 0046ef40-0046ef67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046ef40(int param_1,uint *param_2)

{
  undefined1 in_ZF;
  
  FUN_00404140(*(uint **)(param_1 + 0xc),param_2);
  if (!(bool)in_ZF) {
    FUN_00403e04((int *)(param_1 + 0xc),param_2);
    FUN_00412c80(param_1,'\x01');
  }
  return;
}

