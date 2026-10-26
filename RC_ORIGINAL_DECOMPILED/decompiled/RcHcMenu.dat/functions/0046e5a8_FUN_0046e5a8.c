/*
 * FUN_0046e5a8 at 0046e5a8
 * undefined __register FUN_0046e5a8(int param_1, uint * param_2)
 * Address ranges: 0046e5a8-0046e5cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e5a8(int param_1,uint *param_2)

{
  undefined1 in_ZF;
  
  FUN_00404140(param_2,*(uint **)(param_1 + 0x10));
  if (!(bool)in_ZF) {
    FUN_00403e04((int *)(param_1 + 0x10),param_2);
    FUN_00412c80(param_1,'\0');
  }
  return;
}

