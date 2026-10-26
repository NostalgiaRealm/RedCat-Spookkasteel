/*
 * FUN_0041f7e8 at 0041f7e8
 * undefined __register FUN_0041f7e8(int param_1)
 * Address ranges: 0041f7e8-0041f80e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041f7e8(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  FUN_00420488(*(int **)(param_1 + 0x20));
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041ab08,'\x01',extraout_ECX);
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_00420484(iVar1);
  return;
}

