/*
 * FUN_004bde08 at 004bde08
 * undefined __register FUN_004bde08(int * param_1)
 * Address ranges: 004bde08-004be06e;004be0cb-004be17d;004be1da-004be1ef;004be203-004be281
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 2 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 2 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004bde08(int *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EDI;
  int *in_FS_OFFSET;
  int local_17c [2];
  VARIANT local_174;
  VARIANTARG local_164;
  int local_154 [2];
  LPCSTR local_14c;
  OLECHAR local_148 [2];
  VARIANTARG local_144;
  byte local_134 [240];
  undefined4 uStack_44;
  int iStack_40;
  char *pcStack_3c;
  undefined1 *puStack_38;
  undefined1 *local_34;
  int local_30;
  undefined1 local_2c [8];
  char *apcStack_24 [2];
  undefined1 *local_1c;
  int local_c;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 0x2f;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  apcStack_24[1] = &LAB_004be282;
  apcStack_24[0] = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)apcStack_24;
  local_2c._4_4_ = 0x4bde33;
  iVar4 = FUN_004d68f0((int)param_1);
  if (iVar4 != 0) {
    local_2c._4_4_ = 0x4bde48;
    FUN_00403e48((int *)&stack0xfffffff0,0x4be298);
    local_2c._4_4_ = 0x4bde50;
    iVar4 = FUN_004d68f0((int)param_1);
    uVar2 = iVar4 - 1;
    if (SBORROW4(iVar4,1)) {
      local_2c._4_4_ = 0x4bde5a;
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if (-1 < (int)uVar2) {
      local_1c = (undefined1 *)(uVar2 + 1);
      local_c = 0;
      do {
        if (0 < local_c) {
          local_2c._4_4_ = 0x4bde80;
          FUN_00404038((int *)&stack0xfffffff0,(undefined4 *)&DAT_004be2ac);
        }
        local_2c._0_4_ = &DAT_004be2b8;
        local_30 = 0x4bde93;
        iVar4 = FUN_004d6728(param_1,local_c);
        local_30 = *(int *)(iVar4 + 4);
        apcStack_24[0] = " ";
        puStack_38 = (undefined1 *)0x4bdea8;
        FUN_004040f0((int *)&stack0xfffffff0,4);
        puStack_38 = (undefined1 *)0x4bdeb3;
        iVar4 = FUN_004d6728(param_1,local_c);
        puStack_38 = (undefined1 *)0x4bdebb;
        FUN_004d4e9c(iVar4,(VARIANT *)local_2c);
        puStack_38 = (undefined1 *)0x4bdec3;
        uVar1 = FUN_00405bf8((undefined2 *)local_2c);
        uVar2 = CONCAT22(extraout_var,uVar1);
        if ((int)uVar2 < 6) {
          if (uVar2 == 5) {
            puStack_38 = (undefined1 *)0x4bdf44;
            FUN_00404038((int *)&stack0xfffffff0,(undefined4 *)"DOUBLE");
          }
          else if (uVar2 < 2) {
            puStack_38 = (undefined1 *)0x4bdf98;
            FUN_00402fe0(*param_1,local_134);
            puStack_38 = (undefined1 *)0x4bdfa6;
            FUN_00403fd4((int *)&local_34,local_134);
            puStack_38 = local_34;
            pcStack_3c = ".DoCopyParams: ";
            apcStack_24[0] = "NULL Parameters are not supported in DAO.";
            uStack_44 = 0x4bdfc0;
            FUN_004040f0(&local_30,3);
            uStack_44 = 0x4bdfd2;
            FUN_00403d94(local_30);
          }
          else if (uVar2 == 2) {
            puStack_38 = (undefined1 *)0x4bdf0e;
            FUN_00404038((int *)&stack0xfffffff0,(undefined4 *)"INTEGER");
          }
          else if (uVar2 == 3) {
            puStack_38 = (undefined1 *)0x4bdf20;
            FUN_00404038((int *)&stack0xfffffff0,(undefined4 *)&DAT_004be2d4);
          }
          else {
            if (uVar2 != 4) goto LAB_004bdfd4;
            puStack_38 = (undefined1 *)0x4bdf56;
            FUN_00404038((int *)&stack0xfffffff0,(undefined4 *)"SINGLE");
          }
        }
        else if (uVar2 == 6) {
          puStack_38 = (undefined1 *)0x4bdf77;
          FUN_00404038((int *)&stack0xfffffff0,(undefined4 *)"CURRENCY");
        }
        else if (uVar2 == 7) {
          puStack_38 = (undefined1 *)0x4bdf86;
          FUN_00404038((int *)&stack0xfffffff0,(undefined4 *)&DAT_004be334);
        }
        else if (uVar2 == 0xb) {
          puStack_38 = (undefined1 *)0x4bdf32;
          FUN_00404038((int *)&stack0xfffffff0,(undefined4 *)&DAT_004be2e4);
        }
        else if (uVar2 == 0x100) {
          puStack_38 = (undefined1 *)0x4bdf68;
          FUN_00404038((int *)&stack0xfffffff0,(undefined4 *)&DAT_004be310);
        }
        else {
LAB_004bdfd4:
          puStack_38 = (undefined1 *)0x4bdfde;
          FUN_00459bd4(0x4be3b8);
        }
        local_c = local_c + 1;
        local_1c = local_1c + -1;
      } while (local_1c != (undefined1 *)0x0);
    }
    local_2c._4_4_ = 0x4bdff7;
    FUN_00404038((int *)&stack0xfffffff0,(undefined4 *)&DAT_004be3fc);
    local_2c._0_4_ = &LAB_004be06f;
    local_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&local_30;
    local_34 = (undefined1 *)0x4be012;
    local_2c._4_4_ = &stack0xfffffffc;
    FUN_004054ac(&local_144,(undefined4 *)0x0);
    local_34 = (undefined1 *)0x4be029;
    iVar4 = FUN_004b90a0(param_1[0xc],&local_144);
    param_1[0xe] = iVar4;
    local_34 = (undefined1 *)0x4be043;
    FUN_0040407c((int *)&local_14c,unaff_EBX,(undefined4 *)param_1[0xb]);
    local_34 = (undefined1 *)0x4be054;
    FUN_004045b8(local_148,local_14c);
    local_34 = (undefined1 *)0x4be065;
    FUN_004b9484(param_1[0xe]);
    *in_FS_OFFSET = local_30;
    local_2c._4_4_ = 0x4be0d3;
    iVar4 = FUN_004d68f0((int)param_1);
    uVar2 = iVar4 - 1;
    if (SBORROW4(iVar4,1)) {
      local_2c._4_4_ = 0x4be0dd;
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if (-1 < (int)uVar2) {
      local_1c = (undefined1 *)(uVar2 + 1);
      local_2c._0_4_ = &LAB_004be1f0;
      local_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&local_30;
      puStack_38 = &LAB_004be17e;
      pcStack_3c = (char *)*in_FS_OFFSET;
      *in_FS_OFFSET = (int)&pcStack_3c;
      iStack_40 = 0x4be11c;
      local_34 = &stack0xfffffffc;
      local_2c._4_4_ = &stack0xfffffffc;
      iVar4 = FUN_004d6728(param_1,0);
      iStack_40 = 0x4be127;
      FUN_00403e48((int *)&stack0xffffffe8,*(int *)(iVar4 + 4));
      iStack_40 = 0x4be132;
      iStack_40 = FUN_004b9534(param_1[0xe]);
      uStack_44 = 0x4be141;
      FUN_004054ac(&local_164,unaff_EDI);
      iVar4 = iStack_40;
      iStack_40 = 0x4be14d;
      piVar3 = (int *)FUN_004bbda0(iVar4,&local_164);
      iStack_40 = 0x4be15b;
      iVar4 = FUN_004d6728(param_1,0);
      iStack_40 = 0x4be166;
      FUN_004d4e9c(iVar4,&local_174);
      iStack_40 = 0x4be174;
      FUN_004bbc9c((int)piVar3,&local_174);
      *in_FS_OFFSET = (int)pcStack_3c;
      *in_FS_OFFSET = local_30;
      local_2c._4_4_ = &DAT_004be1f7;
      local_2c._0_4_ = 0x4be1ef;
      FUN_00403094(piVar3);
      return;
    }
  }
  *in_FS_OFFSET = (int)apcStack_24[0];
  local_1c = &LAB_004be289;
  apcStack_24[1] = (char *)0x4be220;
  FUN_00403dd4(local_17c,2);
  apcStack_24[1] = (char *)0x4be236;
  FUN_00404878(&local_174,&DAT_00401108,2);
  apcStack_24[1] = (char *)0x4be246;
  FUN_00403dd4(local_154,3);
  apcStack_24[1] = (char *)0x4be251;
  FUN_00404474((undefined4 *)local_148);
  apcStack_24[1] = (char *)0x4be25c;
  FUN_00405bcc(&local_144);
  apcStack_24[1] = (char *)0x4be269;
  FUN_00403dd4((int *)&local_34,2);
  apcStack_24[1] = (char *)0x4be271;
  FUN_00405bcc((VARIANTARG *)local_2c);
  apcStack_24[1] = (char *)0x4be279;
  FUN_00403db0((int *)&stack0xffffffe8);
  apcStack_24[1] = (char *)0x4be281;
  FUN_00403db0((int *)&stack0xfffffff0);
  return;
}

