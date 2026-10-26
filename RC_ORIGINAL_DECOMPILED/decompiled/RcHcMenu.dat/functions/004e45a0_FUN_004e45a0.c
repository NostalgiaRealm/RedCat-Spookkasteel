/*
 * FUN_004e45a0 at 004e45a0
 * undefined __register FUN_004e45a0(int * param_1, undefined4 * param_2)
 * Address ranges: 004e45a0-004e4678
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 12 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 12 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e45a0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  VARIANT *pVVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  _union_2683 local_3c;
  VARIANT local_2c;
  int local_18;
  undefined1 local_11;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_3c._0_4_ = 0;
  local_3c.decVal.Hi32 = 0;
  local_3c._8_4_ = 0;
  local_3c._12_4_ = 0;
  pVVar4 = &local_2c;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)&pVVar4->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar4 = (VARIANT *)((int)&pVVar4->n1 + 4);
  }
  puStack_48 = (undefined1 *)0x4e45cd;
  local_8 = param_1;
  FUN_00405bd4(&local_2c);
  puStack_4c = &LAB_004e4679;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_11 = 0;
  puStack_48 = &stack0xfffffffc;
  iVar3 = FUN_0045da14(local_8[0x20]);
  uVar1 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  if (-1 < (int)uVar1) {
    local_18 = uVar1 + 1;
    uVar5 = local_18 == 0;
    local_10 = 0;
    do {
      piVar2 = (int *)FUN_004e25c4((int *)local_8[0x20],local_10);
      piVar2 = (int *)FUN_004949bc(piVar2);
      FUN_00496550(piVar2,(VARIANT *)&local_3c.n2);
      FUN_00405abc((VARIANTARG *)&local_3c.n2,&local_2c);
      if ((bool)uVar5) {
        local_11 = 1;
        FUN_004e3fa0(local_8,local_10);
        FUN_0054a2b0(local_8);
        break;
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
      uVar5 = local_18 == 0;
    } while (!(bool)uVar5);
  }
  local_9 = local_11;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_004e4680;
  puStack_4c = (undefined1 *)0x4e4678;
  FUN_00404878((VARIANTARG *)&local_3c.n2,&DAT_00401108,2);
  return;
}

