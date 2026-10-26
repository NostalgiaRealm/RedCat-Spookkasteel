/*
 * thunk_FUN_00501f40 at 0057c690
 * undefined thunk_FUN_00501f40(void)
 * Address ranges: 0057c690-0057c694
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_00501f40
 */

void __fastcall thunk_FUN_00501f40(undefined4 *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_00635a7e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f4dc;
  uStack_4 = 7;
  FUN_005844b0();
  uStack_4._0_1_ = 8;
  if (param_1[6] != 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    uStack_4._0_1_ = 9;
    pcVar2 = (code *)FUN_005a07f0(s_m_SubLevel____0_0069da2c,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069d990,100,auStack_1c);
    (*pcVar2)();
    uStack_4._0_1_ = 8;
    FUN_004040a0(1);
  }
  uStack_4 = CONCAT31(uStack_4._1_3_,7);
  FUN_0057d310();
  iVar3 = FUN_0050a440();
  while (0 < iVar3) {
    FUN_00516b30();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      iVar3 = FUN_0050a460(0);
      puVar4 = *(undefined1 **)(iVar3 + 0x60);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      puVar8 = (undefined1 *)param_1[0x18];
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(auStack_1c,s_CAdamGO___CAdamGO____parent__s_r_0069d9fc,puVar8,puVar4);
      uStack_4._0_1_ = 10;
      FUN_005aff00(uVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,7);
      FUN_004040a0(1);
    }
    uVar5 = FUN_0050a460(0);
    FUN_00509e20(uVar5);
    iVar3 = FUN_0050a440();
  }
  cVar1 = FUN_0050a430();
  if (cVar1 != '\0') {
    FUN_00516b30();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      iVar3 = FUN_0050a330();
      puVar4 = *(undefined1 **)(iVar3 + 0x60);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      puVar8 = (undefined1 *)param_1[0x18];
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(auStack_1c,s_CAdamGO___CAdamGO____child__s_re_0069d9c0,puVar8,puVar4);
      uStack_4._0_1_ = 0xb;
      FUN_005aff00(uVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,7);
      FUN_004040a0(1);
    }
    puVar10 = param_1;
    FUN_0050a330(param_1);
    FUN_00509e20(puVar10);
  }
  iVar3 = param_1[0x30];
  uStack_4._0_1_ = 6;
  if (iVar3 != 0) {
    iVar6 = *(int *)(iVar3 + 0x14) + -1;
    *(int *)(iVar3 + 0x14) = iVar6;
    if (iVar6 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x30] = 0;
  }
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  FUN_004040a0(1);
  iVar3 = param_1[0x21];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  iVar3 = param_1[0x1c];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  iVar3 = param_1[0x18];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_005fe5f0(param_1[0x13]);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  iVar3 = param_1[6];
  uStack_4 = uStack_4 & 0xffffff00;
  if (iVar3 != 0) {
    iVar6 = *(int *)(iVar3 + 0x14) + -1;
    *(int *)(iVar3 + 0x14) = iVar6;
    if (iVar6 == 0) {
      FUN_005abfc0(0);
    }
    param_1[6] = 0;
  }
  uStack_4 = 0xffffffff;
  FUN_004ff120();
  ExceptionList = pvStack_c;
  return;
}

