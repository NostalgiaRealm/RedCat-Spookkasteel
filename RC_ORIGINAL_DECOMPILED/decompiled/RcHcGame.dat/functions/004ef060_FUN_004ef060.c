/*
 * FUN_004ef060 at 004ef060
 * undefined FUN_004ef060(void)
 * Address ranges: 004ef060-004ef233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_004ef060(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int unaff_retaddr;
  undefined1 auStack_40 [4];
  undefined4 *puStack_3c;
  undefined1 auStack_30 [20];
  int local_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00633e90;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  uVar2 = (**(code **)(*param_1 + 0xc))(local_1c);
  puStack_8._0_1_ = 1;
  if (unaff_retaddr == 0) {
    auStack_30[0] = (char)unaff_retaddr;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    puStack_8._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_30);
    (*pcVar3)();
    puStack_8._0_1_ = 1;
    FUN_004040a0(1);
  }
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(char *)(iVar4 + 0x125) == '\0') {
    auStack_40[0] = (char)unaff_retaddr;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puStack_3c = *puVar7;
        puVar7 = puVar7 + 1;
        puStack_3c = puStack_3c + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puStack_3c = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puStack_3c = (undefined4 *)((int)puStack_3c + 1);
      }
      FUN_00404190(uVar5);
    }
    puStack_8._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                  0x127,auStack_40);
    (*pcVar3)();
    puStack_8._0_1_ = 1;
    FUN_004040a0(1);
  }
  FUN_004b21b0(uVar2);
  uVar2 = __ftol();
  if (local_1c[0] != 0) {
    cVar1 = *(char *)(local_1c[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_1c[0] + -1));
    }
    else {
      *(char *)(local_1c[0] + -1) = cVar1 + -1;
    }
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  puStack_8 = (undefined1 *)0xffffffff;
  if ((unaff_retaddr != 0) &&
     (iVar4 = *(int *)(unaff_retaddr + 0x14) + -1, *(int *)(unaff_retaddr + 0x14) = iVar4,
     iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_10;
  return uVar2;
}

