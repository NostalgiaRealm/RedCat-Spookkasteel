/*
 * FUN_0044c080 at 0044c080
 * undefined FUN_0044c080(void)
 * Address ranges: 0044c080-0044c1a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0044c080(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  char *pcVar6;
  int iStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00625808;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 0x6c))();
  if (iVar2 != 0) {
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      uVar5 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      uStack_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,auStack_1c);
      (*pcVar4)();
      uStack_4 = 0xffffffff;
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
    FUN_0054ffe0(&iStack_20,iVar2,0,0x3f800000,0,0);
    if ((iStack_20 != 0) &&
       (iVar2 = *(int *)(iStack_20 + 0x14) + -1, *(int *)(iStack_20 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

