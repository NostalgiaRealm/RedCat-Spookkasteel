/*
 * FUN_00544a20 at 00544a20
 * undefined FUN_00544a20(void)
 * Address ranges: 00544a20-00544b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00544a20(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063cdd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x24) != 0) {
    ExceptionList = &pvStack_c;
    FUN_0053eb80();
    if (*(int *)(param_1 + 0x24) != 0) {
      uVar5 = 0xffffffff;
      iStack_38 = 0;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uStack_34 = 0;
      uStack_30 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      uStack_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_m_InputActionState____IAS_LOADED_006a14e0,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a13c8,0x42e,auStack_3c);
      (*pcVar2)();
      uStack_4 = 0xffffffff;
      if (iStack_38 != 0) {
        cVar1 = *(char *)(iStack_38 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_38 + -1));
        }
        else {
          *(char *)(iStack_38 + -1) = cVar1 + -1;
        }
      }
    }
  }
  uVar3 = FUN_00548dd0(local_1c);
  uStack_4 = 1;
  uVar4 = FUN_00436f90(auStack_2c);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  FUN_00540f80(uVar4,uVar3);
  if (iStack_28 != 0) {
    cVar1 = *(char *)(iStack_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_28 + -1));
    }
    else {
      *(char *)(iStack_28 + -1) = cVar1 + -1;
    }
  }
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = pvStack_c;
  return;
}

