/*
 * FUN_0043f17c at 0043f17c
 * undefined __register FUN_0043f17c(int param_1, int * param_2)
 * Address ranges: 0043f17c-0043f1e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043f17c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0043f1e8;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x20))();
    if (*(int *)(param_1 + 0x24) <= iVar1) {
      iVar1 = (**(code **)(*param_2 + 0x2c))();
      if (*(int *)(param_1 + 0x28) <= iVar1) goto LAB_0043f1d2;
    }
    FUN_00406a48((undefined4 *)PTR_PTR_00572198,(int *)&local_8);
    piVar2 = FUN_0040ceec((int *)&DAT_0041071c,'\x01',local_8);
    FUN_0040382c(piVar2);
  }
LAB_0043f1d2:
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043f1ef;
  puStack_18 = (undefined1 *)0x43f1e7;
  FUN_00403db0((int *)&local_8);
  return;
}

