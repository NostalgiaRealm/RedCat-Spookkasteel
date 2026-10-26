/*
 * FUN_0046e5f4 at 0046e5f4
 * undefined __register FUN_0046e5f4(int param_1, uint * param_2)
 * Address ranges: 0046e5f4-0046e629
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e5f4(int param_1,uint *param_2)

{
  undefined1 in_ZF;
  
  FUN_00404140(param_2,*(uint **)(param_1 + 0x14));
  if ((!(bool)in_ZF) || ((param_2 != (uint *)0x0 && ((*(byte *)(param_1 + 0x20) & 0x10) == 0)))) {
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 0x10;
    FUN_00403e04((int *)(param_1 + 0x14),param_2);
    FUN_00412c80(param_1,'\0');
  }
  return;
}

