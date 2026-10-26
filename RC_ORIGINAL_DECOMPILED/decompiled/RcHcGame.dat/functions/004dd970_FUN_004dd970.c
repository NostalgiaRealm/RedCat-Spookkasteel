/*
 * FUN_004dd970 at 004dd970
 * undefined FUN_004dd970(void)
 * Address ranges: 004dd970-004ddbfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f118 slot 22 for .?AVCAdamPlayer@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f118 slot 22 for
   .?AVCAdamPlayer@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_004dd970(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcStack_54;
  undefined1 auStack_3c [4];
  char *pcStack_38;
  uint uStack_34;
  char acStack_2c [16];
  char acStack_1c [4];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006321d8;
  pvStack_c = ExceptionList;
  pcStack_54 = (char *)0x4dd998;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x30))();
  if (cVar1 == '\0') {
    pcStack_54 = (char *)0x4dd9ab;
    cVar1 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x34))();
    if (cVar1 == '\0') {
      iVar2 = DAT_006b915c;
      if (DAT_006b915c == 0) {
        pcStack_54 = (char *)0x4dd9c2;
        iVar2 = FUN_004bc480();
      }
      if (*(int *)(iVar2 + 0x3a8) == 0) {
        pcStack_54 = (char *)0x0;
        FUN_004040a0();
        uVar4 = 0xffffffff;
        pcVar6 = &DAT_006b3f70;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        pcStack_54 = (char *)(~uVar4 - 1);
        FUN_004040f0(&DAT_006b3f70);
        pcStack_54 = acStack_2c;
        uStack_4 = 0;
        pcVar3 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,
                                      s___AdamSource_AdamApplication_h_0068e58c,0x136);
        (*pcVar3)();
        uStack_4 = 0xffffffff;
        pcStack_54 = (char *)0x1;
        FUN_004040a0();
      }
      pcStack_54 = (char *)0x4dda43;
      cVar1 = (**(code **)(**(int **)(iVar2 + 0x3a8) + 0xc))();
      if (cVar1 == '\0') {
        ExceptionList = pvStack_c;
        return;
      }
    }
  }
  if (*(char *)(param_1 + 0x234) == '\0') {
    FUN_004042e0(&pcStack_54);
    iVar2 = FUN_004dd6d0();
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0xf8) != '\0')) {
      *(undefined1 *)(param_1 + 0x234) = 1;
      pcStack_54 = (char *)0x1;
      (**(code **)(**(int **)(param_1 + 500) + 0x10))(0x9c4,1);
      FUN_00505400(&DAT_006b9580);
      ExceptionList = pvStack_18;
      return;
    }
    pcStack_54 = (char *)0x0;
    FUN_004040a0();
    uVar4 = 0xffffffff;
    pcStack_54 = (char *)0x1;
    pcVar6 = s_restart_00694a60;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4);
    if (cVar1 != '\0') {
      pcVar6 = s_restart_00694a60;
      pcVar7 = pcStack_38;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcStack_38[uVar4] = '\0';
      uStack_34 = uVar4;
    }
    uStack_4 = 1;
    iVar2 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      pcStack_54 = (char *)0x4ddb29;
      iVar2 = FUN_004bc480();
    }
    if (*(int *)(iVar2 + 0x3a4) == 0) {
      pcStack_54 = (char *)0x0;
      FUN_004040a0();
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcStack_54 = (char *)(~uVar4 - 1);
      FUN_004040f0(&DAT_006b3f70);
      pcStack_54 = acStack_1c;
      uStack_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,
                                    0x130);
      (*pcVar3)();
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      pcStack_54 = (char *)0x1;
      FUN_004040a0();
    }
    pcStack_54 = (char *)0xffffffff;
    FUN_0040cc00(auStack_3c,0);
    if (pcStack_38 != (char *)0x0) {
      pcStack_54 = pcStack_38 + -1;
      cVar1 = pcStack_38[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *pcStack_54 = cVar1 + -1;
        ExceptionList = pvStack_c;
        return;
      }
      FUN_005fe5f0();
    }
  }
  ExceptionList = pvStack_c;
  return;
}

