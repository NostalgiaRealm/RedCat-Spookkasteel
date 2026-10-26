/*
 * FUN_004b2384 at 004b2384
 * undefined __register FUN_004b2384(int * param_1)
 * Address ranges: 004b2384-004b244d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 25 for TDateProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 25 for
   TDateProp. Original bytes unchanged; names and types still inferred. */

void FUN_004b2384(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  VARIANTARG local_28;
  _union_2683 local_18;
  int *local_8;
  
  local_18.decVal.Hi32 = (ULONG)&stack0xfffffffc;
  local_18._8_4_ = 4;
  do {
    local_18._8_4_ = local_18._8_4_ + -1;
  } while (local_18._8_4_ != 0);
  local_18._0_4_ = &LAB_004b244e;
  local_28.n1._12_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (undefined1 *)((int)&local_28.n1 + 0xc);
  local_28.n1._8_4_ = 0x4b23ad;
  local_8 = param_1;
  piVar4 = (int *)FUN_004b2490((int)param_1);
  local_28.n1._8_4_ = 0x4b23b2;
  cVar2 = (**(code **)(*piVar4 + 0x18))();
  if (cVar2 == '\0') {
    local_28.n1._8_4_ = 0x4b23be;
    (**(code **)(*local_8 + 0x68))();
  }
  else {
    local_28.n1._8_4_ = 0x4b23c8;
    iVar5 = FUN_004b2490((int)local_8);
    local_28.n1._8_4_ = 0x4b23cd;
    bVar3 = FUN_00495a84(iVar5);
    if (bVar3) {
      local_28.n1._8_4_ = 0x4b23d9;
      (**(code **)(*local_8 + 0x60))();
    }
    else {
      local_28.n1._8_4_ = 0x4b23e3;
      iVar5 = FUN_004b2490((int)local_8);
      local_28.n1._8_4_ = iVar5 + 8;
      uVar6 = (VARIANTARG *)local_28.n1._8_4_ == (VARIANTARG *)0x0;
      local_28.n1.decVal.Hi32 = 0x4b23f5;
      FUN_0040542c((VARIANTARG *)&local_18.n2);
      uVar1 = local_28.n1._8_4_;
      local_28.n1._8_4_ = 0x4b23fe;
      FUN_00405abc((VARIANTARG *)uVar1,(VARIANTARG *)&local_18.n2);
      if ((bool)uVar6) {
        local_28.n1._8_4_ = 0x4b2405;
        FUN_0040b0d8();
        local_28.n1._8_4_ = 0x4b240d;
        FUN_0040542c(&local_28);
        local_28.n1._8_4_ = 0x4b2418;
        FUN_004964d0(local_8,(undefined4 *)&local_28);
      }
      else {
        local_28.n1._8_4_ = 0x4b2422;
        iVar5 = FUN_004b2490((int)local_8);
        local_28.n1._8_4_ = 0x4b242d;
        FUN_004964d0(local_8,(undefined4 *)(iVar5 + 8));
      }
    }
  }
  *in_FS_OFFSET = local_28.n1._12_4_;
  local_18.decVal.Hi32 = (ULONG)&LAB_004b2455;
  local_18._0_4_ = 0x4b244d;
  FUN_00404878(&local_28,&DAT_00401108,2);
  return;
}

