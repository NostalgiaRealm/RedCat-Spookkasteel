/*
 * FUN_0052c930 at 0052c930
 * undefined __register FUN_0052c930(int * param_1, undefined4 * param_2)
 * Address ranges: 0052c930-0052ca1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 12 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 12 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052c930(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  VARIANT *pVVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
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
  pVVar5 = &local_2c;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)&pVVar5->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar5 = (VARIANT *)((int)&pVVar5->n1 + 4);
  }
  puStack_48 = (undefined1 *)0x52c95d;
  local_8 = param_1;
  FUN_00405bd4(&local_2c);
  puStack_4c = &LAB_0052ca20;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_11 = 0;
  puStack_48 = &stack0xfffffffc;
  iVar4 = FUN_0045da14(local_8[0x20]);
  uVar1 = iVar4 - 1;
  if (SBORROW4(iVar4,1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  if (-1 < (int)uVar1) {
    local_18 = uVar1 + 1;
    local_10 = 0;
    do {
      piVar2 = (int *)FUN_004e25c4((int *)local_8[0x20],local_10);
      piVar2 = (int *)FUN_004949bc(piVar2);
      uVar3 = FUN_00496b30(piVar2);
      uVar6 = (char)uVar3 == '\0';
      if (!(bool)uVar6) {
        piVar2 = (int *)FUN_004e25c4((int *)local_8[0x20],local_10);
        piVar2 = (int *)FUN_004949bc(piVar2);
        FUN_00496550(piVar2,(VARIANT *)&local_3c.n2);
        FUN_00405abc((VARIANTARG *)&local_3c.n2,&local_2c);
        if ((bool)uVar6) {
          local_11 = 1;
          FUN_0052c25c(local_8,local_10);
          break;
        }
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  local_9 = local_11;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_0052ca27;
  puStack_4c = (undefined1 *)0x52ca1f;
  FUN_00404878((VARIANTARG *)&local_3c.n2,&DAT_00401108,2);
  return;
}

