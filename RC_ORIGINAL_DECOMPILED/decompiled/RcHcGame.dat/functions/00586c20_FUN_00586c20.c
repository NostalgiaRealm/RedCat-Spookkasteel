/*
 * FUN_00586c20 at 00586c20
 * undefined FUN_00586c20(void)
 * Address ranges: 00586c20-00586d64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00586c20(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00642c5c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064fda8;
  local_4 = 4;
  if (param_1[0xd] != 0) {
    puVar3 = (undefined1 *)param_1[10];
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c,s_CAdamEffectTexturedTrail___CAdam_006a5f2c,puVar3);
    local_4 = CONCAT31(local_4._1_3_,5);
    pcVar5 = (code *)FUN_005a07f0(s_m_SubLevel_IsNull___006a5ee0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a5ef4,0x27,uVar4);
    (*pcVar5)();
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  iVar2 = param_1[0x17];
  local_4._0_1_ = 3;
  if (iVar2 != 0) {
    iVar6 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar6;
    if (iVar6 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x17] = 0;
  }
  iVar2 = param_1[0xd];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar2 != 0) {
    iVar6 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar6;
    if (iVar6 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0xd] = 0;
  }
  iVar2 = param_1[10];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_005fe5f0(param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

