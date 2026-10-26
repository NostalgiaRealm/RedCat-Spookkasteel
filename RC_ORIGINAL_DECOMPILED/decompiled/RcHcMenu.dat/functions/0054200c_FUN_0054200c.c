/*
 * FUN_0054200c at 0054200c
 * undefined __register FUN_0054200c(int param_1)
 * Address ranges: 0054200c-005421b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 47 for TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 47 for
   TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_0054200c(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  VARIANT local_34;
  undefined4 *local_24;
  VARIANT local_20;
  uint *local_10;
  int *local_c;
  int local_8;
  
  local_10 = (uint *)&stack0xfffffffc;
  iVar4 = 6;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar5 = 1;
  local_20.n1._12_4_ = &LAB_005421b7;
  local_20.n1._8_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (undefined1 *)((int)&local_20.n1 + 8);
  local_20.n1.decVal.Hi32 = 0x54203a;
  local_8 = param_1;
  local_c = (int *)FUN_004949bc(*(int **)(param_1 + 0x22c));
  local_20.n1.decVal.Hi32 = 0x542048;
  FUN_005418bc(local_8,(int *)&local_10);
  local_20.n1.decVal.Hi32 = 0x542059;
  FUN_00404140(local_10,*(uint **)(local_8 + 0x25c));
  if ((bool)uVar5) {
    local_20.n1.decVal.Hi32 = 0x542067;
    cVar1 = (**(code **)(*local_c + 0x4c))();
    if (cVar1 == '\0') {
      local_20.n1.decVal.Hi32 = 0x542078;
      uVar3 = FUN_00405c08((short *)(local_8 + 0x260));
      if ((char)uVar3 == '\0') goto LAB_00542109;
    }
    local_20.n1.decVal.Hi32 = 0x542088;
    cVar1 = (**(code **)(*local_c + 0x4c))();
    if (cVar1 != '\0') {
      local_20.n1.decVal.Hi32 = 0x542094;
      cVar1 = (**(code **)(*local_c + 0x50))();
      if (cVar1 != '\0') {
        local_20.n1.decVal.Hi32 = 0x5420a5;
        bVar2 = FUN_00405c2c((short *)(local_8 + 0x260));
        if (!bVar2) goto LAB_00542109;
      }
    }
    local_20.n1.decVal.Hi32 = 0x5420b1;
    uVar3 = FUN_00496b30(local_c);
    if ((char)uVar3 == '\0') {
LAB_005420d7:
      local_20.n1.decVal.Hi32 = 0x5420df;
      uVar3 = FUN_00496b30(local_c);
      if ((char)uVar3 == '\0') goto LAB_00542189;
      local_20.n1.decVal.Hi32 = 0x5420f2;
      FUN_00496550(local_c,&local_20);
      bVar2 = (VARIANTARG *)(local_8 + 0x260) == (VARIANTARG *)0x0;
      local_20.n1.decVal.Hi32 = 0x542103;
      FUN_00405abc(&local_20,(VARIANTARG *)(local_8 + 0x260));
      if (bVar2) goto LAB_00542189;
    }
    else {
      local_20.n1.decVal.Hi32 = 0x5420c2;
      uVar3 = FUN_00405c08((short *)(local_8 + 0x260));
      if ((char)uVar3 == '\0') {
        local_20.n1.decVal.Hi32 = 0x5420d3;
        bVar2 = FUN_00405c2c((short *)(local_8 + 0x260));
        if (!bVar2) goto LAB_005420d7;
      }
    }
  }
LAB_00542109:
  local_20.n1.decVal.Hi32 = 0x542111;
  FUN_004efd70(local_8);
  local_20.n1.decVal.Hi32 = 0x54211c;
  FUN_005418bc(local_8,(int *)&local_24);
  local_20.n1.decVal.Hi32 = 0x54212c;
  FUN_00403e04((int *)(local_8 + 0x25c),local_24);
  local_20.n1.decVal.Hi32 = 0x542134;
  cVar1 = (**(code **)(*local_c + 0x4c))();
  if (cVar1 == '\0') {
    local_20.n1.decVal.Hi32 = 0x54214b;
    FUN_00404e28((VARIANT *)(local_8 + 0x260),(VARIANTARG *)PTR_DAT_00572140);
  }
  else {
    local_20.n1.decVal.Hi32 = 0x542155;
    cVar1 = (**(code **)(*local_c + 0x50))();
    if (cVar1 == '\0') {
      local_20.n1.decVal.Hi32 = 0x542179;
      FUN_00496550(local_c,&local_34);
      local_20.n1.decVal.Hi32 = 0x542189;
      FUN_00404e28((VARIANT *)(local_8 + 0x260),&local_34);
    }
    else {
      local_20.n1.decVal.Hi32 = 0x54216c;
      FUN_00404e28((VARIANT *)(local_8 + 0x260),(VARIANTARG *)PTR_DAT_00572068);
    }
  }
LAB_00542189:
  *in_FS_OFFSET = local_20.n1._8_4_;
  local_10 = (uint *)&LAB_005421be;
  local_20.n1._12_4_ = 0x54219e;
  FUN_00405bcc(&local_34);
  local_20.n1._12_4_ = 0x5421a6;
  FUN_00403db0((int *)&local_24);
  local_20.n1._12_4_ = 0x5421ae;
  FUN_00405bcc(&local_20);
  local_20.n1._12_4_ = 0x5421b6;
  FUN_00403db0((int *)&local_10);
  return;
}

