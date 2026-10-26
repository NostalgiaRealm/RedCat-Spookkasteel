/*
 * FUN_004877ac at 004877ac
 * undefined __register FUN_004877ac(int * param_1, uint * param_2)
 * Address ranges: 004877ac-00487843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004877ac(int *param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_00487844;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  bVar1 = (*(byte *)(param_1 + 8) & 2) == 0;
  if (bVar1) {
    FUN_00404140((uint *)param_1[0x8c],param_2);
    if (!bVar1) {
      (**(code **)(*param_1 + 0x8c))();
      if (param_1[0x8b] != 0) {
        FUN_00406a48((undefined4 *)PTR_PTR_005721c0,(int *)&local_8);
        FUN_00466d84(local_8,(int)param_1);
      }
      FUN_00403e04(param_1 + 0x8c,param_2);
      (**(code **)(*param_1 + 0xac))(param_1,8,0);
    }
  }
  else {
    puStack_14 = &stack0xfffffffc;
    FUN_00403e04(param_1 + 0x8c,param_2);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0048784b;
  puStack_18 = (undefined1 *)0x487843;
  FUN_00403db0((int *)&local_8);
  return;
}

