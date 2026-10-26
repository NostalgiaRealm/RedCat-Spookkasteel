/*
 * FUN_00559f1c at 00559f1c
 * undefined __register FUN_00559f1c(undefined4 param_1, int * param_2, int param_3)
 * Address ranges: 00559f1c-0055a082
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00559f1c(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_18;
  uint *local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  local_14 = (uint *)0x0;
  puStack_24 = &LAB_0055a083;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 == 0x25) {
    FUN_00432744(*param_2,(uint *)0x0);
    FUN_004aeaf0((int *)*local_c,*(int *)(*(int *)PTR_DAT_00572108 + 200));
  }
  else if (param_3 == 0x26) {
    puStack_20 = &stack0xfffffffc;
    FUN_00432744(*param_2,(uint *)0x0);
    FUN_004aeaf0((int *)*local_c,*(int *)(*(int *)PTR_DAT_00572108 + 0xd4));
  }
  else if (param_3 == 0x27) {
    puStack_20 = &stack0xfffffffc;
    FUN_00432744(*param_2,(uint *)0x0);
    FUN_004aeaf0((int *)*local_c,*(int *)(*(int *)PTR_DAT_00572108 + 0xcc));
  }
  else if (param_3 == 0x28) {
    puStack_20 = &stack0xfffffffc;
    FUN_00432744(*param_2,(uint *)0x0);
    FUN_004aeaf0((int *)*local_c,*(int *)(*(int *)PTR_DAT_00572108 + 0xd0));
  }
  else {
    puStack_20 = &stack0xfffffffc;
    FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),param_3,(int *)&local_14
                );
    FUN_00432744(*local_c,local_14);
    FUN_00432714(*local_c,&local_18);
    iVar1 = FUN_00404030(local_18);
    if (iVar1 < 2) {
      FUN_004aeaf0((int *)*local_c,*(int *)(*(int *)PTR_DAT_00572108 + 0xc0));
    }
    else {
      FUN_004aeaf0((int *)*local_c,*(int *)(*(int *)PTR_DAT_00572108 + 0xc4));
    }
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0055a08a;
  puStack_24 = (undefined1 *)0x55a07a;
  FUN_00403db0(&local_18);
  puStack_24 = (undefined1 *)0x55a082;
  FUN_00403db0((int *)&local_14);
  return;
}

