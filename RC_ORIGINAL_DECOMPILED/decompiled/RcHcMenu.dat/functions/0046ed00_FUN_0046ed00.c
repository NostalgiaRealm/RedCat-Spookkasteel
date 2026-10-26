/*
 * FUN_0046ed00 at 0046ed00
 * undefined __register FUN_0046ed00(int param_1, int * param_2)
 * Address ranges: 0046ed00-0046ed6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046ed00(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0046ed6e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar1 = FUN_0046ecb8(param_1,param_2);
  if ((char)uVar1 != '\0') {
    FUN_00406a48((undefined4 *)PTR_PTR_00572364,(int *)&local_8);
    FUN_00466d84(local_8,param_1);
  }
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    FUN_00472638(*(int **)(param_1 + 0x24),param_1);
  }
  if (param_2 != (int *)0x0) {
    FUN_00472614(param_2,param_1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046ed75;
  puStack_18 = (undefined1 *)0x46ed6d;
  FUN_00403db0((int *)&local_8);
  return;
}

