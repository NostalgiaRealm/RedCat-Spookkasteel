/*
 * FUN_004b0d64 at 004b0d64
 * undefined __register FUN_004b0d64(undefined4 param_1, int * param_2, int * param_3)
 * Address ranges: 004b0d64-004b0ea6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b0d64(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 *local_120;
  undefined4 *local_11c;
  byte local_118 [256];
  undefined4 *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_11c = (undefined4 *)0x0;
  local_120 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  puStack_12c = &LAB_004b0ea7;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_004949bc(param_2);
  if (local_14 != (int *)0x0) {
    uVar2 = FUN_00496b30(local_14);
    if ((char)uVar2 != '\0') goto LAB_004b0dc7;
  }
  FUN_00403d94("Assertion failure");
LAB_004b0dc7:
  uVar2 = FUN_0040320c(local_14,(int)&PTR_FUN_0048b6c0);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_0040320c(local_14,(int)&PTR_FUN_004897ec);
    if ((char)uVar2 == '\0') {
      FUN_00403d94("Assertion failure");
    }
    piVar3 = local_10;
    (**(code **)(*local_14 + 0x6c))(local_14,&local_11c);
    puVar1 = local_11c;
    FUN_00402fe0(*local_c,local_118);
    FUN_00403fd4((int *)&local_120,local_118);
    FUN_004b0f68(local_8,local_120,puVar1,piVar3);
  }
  else {
    piVar3 = local_10;
    uVar2 = (**(code **)(*local_14 + 0x70))();
    FUN_00402fe0(*local_c,local_118);
    FUN_00403fd4((int *)&local_18,local_118);
    FUN_004b0ef8(local_8,local_18,uVar2,piVar3);
  }
  *in_FS_OFFSET = piVar3;
  puStack_12c = &LAB_004b0eae;
  uStack_130 = 0x4b0e9e;
  FUN_00403dd4((int *)&local_120,2);
  uStack_130 = 0x4b0ea6;
  FUN_00403db0((int *)&local_18);
  return;
}

