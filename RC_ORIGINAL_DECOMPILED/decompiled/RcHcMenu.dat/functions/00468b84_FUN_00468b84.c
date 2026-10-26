/*
 * FUN_00468b84 at 00468b84
 * undefined __register FUN_00468b84(int * param_1, int * param_2)
 * Address ranges: 00468b84-00468bf9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468b84(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14._12_4_ = 0;
  local_14._8_4_ = 0;
  local_14.decVal.Hi32 = 0;
  local_14._0_4_ = 0;
  puStack_24 = &LAB_00468bfa;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (param_2 == (int *)0x0) {
    puStack_20 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xc0))();
  }
  else {
    uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00462a70);
    if ((char)uVar1 == '\0') {
      FUN_00412a74(param_1,param_2);
    }
    else {
      (**(code **)(*param_2 + 0x5c))(param_2,&local_14);
      (**(code **)(*param_1 + 0xa4))(param_1,&local_14);
    }
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00468c01;
  puStack_24 = (undefined1 *)0x468bf9;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

