/*
 * FUN_00551a54 at 00551a54
 * undefined __register FUN_00551a54(int param_1, int param_2, int param_3)
 * Address ranges: 00551a54-00551a99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00551a54(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 0x2c),param_2);
  FUN_00403e04((int *)(iVar1 + 8),*(undefined4 **)(param_3 + 8));
  iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 0x2c),param_2);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_3 + 4);
  return;
}

