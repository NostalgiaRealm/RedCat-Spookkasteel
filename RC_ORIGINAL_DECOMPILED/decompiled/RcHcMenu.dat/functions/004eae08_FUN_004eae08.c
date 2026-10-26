/*
 * FUN_004eae08 at 004eae08
 * undefined __register FUN_004eae08(int * param_1)
 * Address ranges: 004eae08-004eaf12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 2 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 2 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004eae08(int *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 extraout_var;
  ULONG *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar5;
  VARIANT local_40;
  VARIANT local_30;
  undefined1 local_20 [16];
  int local_10;
  int local_c;
  int *local_8;
  
  local_20._12_4_ = &stack0xfffffffc;
  local_10 = 7;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20._8_4_ = &LAB_004eaf13;
  local_20._4_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)(local_20 + 4);
  local_20._0_4_ = 0x4eae31;
  local_8 = param_1;
  iVar3 = FUN_004d68f0((int)param_1);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    local_20._0_4_ = 0x4eae3b;
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_10 = uVar4 + 1;
    local_c = 0;
    do {
      local_20._0_4_ = 0x4eae59;
      iVar3 = FUN_004d6728(local_8,local_c);
      local_20._0_4_ = 0x4eae61;
      FUN_004d4e9c(iVar3,(VARIANT *)local_20);
      local_20._0_4_ = 0x4eae69;
      uVar2 = FUN_00405bf8((undefined2 *)local_20);
      if (CONCAT22(extraout_var,uVar2) == 6) {
        local_20._0_4_ = 0x4eae79;
        iVar3 = FUN_004d6728(local_8,local_c);
        local_20._0_4_ = 0x4eae81;
        FUN_004d4e9c(iVar3,&local_30);
        local_20._0_4_ = 0x4eae89;
        FUN_00405248(&local_30);
        local_20._4_8_ = (undefined8)ROUND(in_ST0);
        local_30.n1._8_4_ = 0x4eae9b;
        fVar5 = in_ST7;
        iVar3 = FUN_004d6728(local_8,local_c);
        local_30.n1._8_4_ = 0x4eaea9;
        iVar3 = FUN_004888f0(local_8[0xc],*(undefined **)(iVar3 + 4));
        local_30.n1._8_4_ = 0x4eaeae;
        FUN_00470664(iVar3);
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = in_ST7;
        in_ST7 = fVar5;
      }
      else {
        local_20._0_4_ = 0x4eaebb;
        iVar3 = FUN_004d6728(local_8,local_c);
        local_20._0_4_ = 0x4eaec3;
        FUN_004d4e9c(iVar3,&local_40);
        local_20._0_4_ = &local_40;
        local_30.n1._12_4_ = 0x4eaed2;
        iVar3 = FUN_004d6728(local_8,local_c);
        local_30.n1._12_4_ = 0x4eaee0;
        iVar3 = FUN_004888f0(local_8[0xc],*(undefined **)(iVar3 + 4));
        uVar1 = local_20._0_4_;
        local_20._0_4_ = 0x4eaee6;
        FUN_00470a54(iVar3,(VARIANTARG *)uVar1);
      }
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = local_20._4_4_;
  local_20._12_4_ = &LAB_004eaf1a;
  local_20._8_4_ = 0x4eaf12;
  FUN_00404878(&local_40,&DAT_00401108,3);
  return;
}

