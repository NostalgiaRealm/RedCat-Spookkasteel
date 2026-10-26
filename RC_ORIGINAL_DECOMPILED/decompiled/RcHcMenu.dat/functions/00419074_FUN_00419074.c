/*
 * FUN_00419074 at 00419074
 * undefined __register FUN_00419074(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 00419074-0041909e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00419074(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  FUN_004121d8(*(int **)(param_1 + 0x10),param_2);
  *(int *)(param_2 + 4) = param_1;
  return;
}

