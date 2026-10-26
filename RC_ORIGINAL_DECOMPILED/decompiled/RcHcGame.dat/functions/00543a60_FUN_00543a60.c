/*
 * FUN_00543a60 at 00543a60
 * undefined FUN_00543a60(void)
 * Address ranges: 00543a60-00543d6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 *
FUN_00543a60(undefined1 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            char param_6)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 local_81;
  undefined4 local_80;
  undefined1 local_7c [4];
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [4];
  undefined1 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 auStack_5c [4];
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063cc90;
  local_c = ExceptionList;
  local_80 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005ae390(local_6c,&DAT_006b3f70);
  local_4._0_1_ = 1;
  FUN_005ae390(local_7c,&DAT_006b3f70);
  iVar7 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
LAB_00543abf:
  do {
    if (param_3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_4 - param_3 >> 2;
    }
    if (iVar2 <= iVar7) {
      *param_1 = local_6c[0];
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      FUN_0040cc00(local_6c,0,0xffffffff);
      if (local_78 != (undefined1 *)0x0) {
        cVar1 = local_78[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(local_78 + -1);
        }
        else {
          local_78[-1] = cVar1 + -1;
        }
      }
      local_78 = (undefined1 *)0x0;
      local_74 = 0;
      local_70 = 0;
      if (local_68 != (undefined1 *)0x0) {
        cVar1 = local_68[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(local_68 + -1);
        }
        else {
          local_68[-1] = cVar1 + -1;
        }
      }
      local_68 = (undefined1 *)0x0;
      local_64 = 0;
      local_60 = 0;
      FUN_005fe5f0(param_3);
      ExceptionList = local_c;
      return param_1;
    }
    if (iVar7 < 0) {
LAB_00543af6:
      FUN_00409810(&DAT_006b3f70,&local_81);
      local_4._0_1_ = 3;
      pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x91,local_4c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004040a0(1);
    }
    else {
      iVar2 = FUN_0044e4c0();
      if (iVar2 <= iVar7) goto LAB_00543af6;
    }
    uVar4 = FUN_00547430(local_3c,*(undefined4 *)(param_3 + iVar7 * 4));
    local_4._0_1_ = 4;
    FUN_0040cc00(uVar4,0,0xffffffff);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    if (param_6 != '\0') {
      uVar4 = FUN_005476a0(auStack_2c,local_7c);
      local_4._0_1_ = 5;
      FUN_0040cc00(uVar4,0,0xffffffff);
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    if (iVar7 == 0) {
      puVar5 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar4 = FUN_005ae390(auStack_1c,&DAT_006a14c8,puVar5);
      local_4._0_1_ = 6;
      FUN_0040cc00(uVar4,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004040a0(1);
      iVar7 = 1;
      goto LAB_00543abf;
    }
    puVar5 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    puVar6 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(auStack_5c,s__s__s_006a14cc,puVar6,puVar5);
    local_4._0_1_ = 7;
    FUN_0040cc00(uVar4,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (iStack_58 != 0) {
      cVar1 = *(char *)(iStack_58 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        iVar7 = iVar7 + 1;
        *(char *)(iStack_58 + -1) = cVar1 + -1;
        iStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        goto LAB_00543abf;
      }
      FUN_005fe5f0((char *)(iStack_58 + -1));
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    iVar7 = iVar7 + 1;
  } while( true );
}

