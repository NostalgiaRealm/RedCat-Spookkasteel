/*
 * FUN_00533a64 at 00533a64
 * undefined __register FUN_00533a64(int param_1)
 * Address ranges: 00533a64-00533b95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 75 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 75 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00533a64(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  uint *local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_18 = &LAB_00533b96;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  uVar2 = FUN_0040320c(*(int **)(param_1 + 0x234),(int)&PTR_FUN_00531904);
  if ((char)uVar2 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  FUN_00403db0((int *)&local_c);
  if (*(char *)(*(int *)(local_8 + 0x234) + 8) == '\0') {
    iVar3 = FUN_00403224(*(int **)(local_8 + 0x234),(int)&PTR_FUN_00531904);
    if (*(int *)(iVar3 + 0xc) != 0) {
      iVar3 = FUN_00403224(*(int **)(local_8 + 0x234),(int)&PTR_FUN_00531904);
      local_10 = (int *)FUN_00494c5c(*(int **)(iVar3 + 0xc),(byte *)(local_8 + 0x278));
      if (local_10 != (int *)0x0) {
        cVar1 = (**(code **)(*local_10 + 0x4c))();
        if (cVar1 != '\0') {
          FUN_00496b88(local_10,(int *)&local_c);
        }
      }
      if (*(char *)(local_8 + 0x2b8) != '\0') {
        iVar3 = FUN_00403224(*(int **)(local_8 + 0x234),(int)&PTR_FUN_00531904);
        FUN_0053178c(*(int **)(local_8 + 700),*(int *)(iVar3 + 0xc));
      }
      goto LAB_00533b75;
    }
  }
  if (*(char *)(local_8 + 0x2b8) != '\0') {
    FUN_0053178c(*(int **)(local_8 + 700),0);
  }
LAB_00533b75:
  FUN_005018b8(local_8,local_c);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00533b9d;
  puStack_18 = (undefined1 *)0x533b95;
  FUN_00403db0((int *)&local_c);
  return;
}

