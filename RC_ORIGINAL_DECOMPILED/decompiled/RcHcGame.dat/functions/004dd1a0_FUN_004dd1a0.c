/*
 * FUN_004dd1a0 at 004dd1a0
 * undefined FUN_004dd1a0(void)
 * Address ranges: 004dd1a0-004dd376
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 8 for .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 8 for
   .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_004dd1a0(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EDI;
  char *pcVar5;
  undefined1 local_1c [4];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632120;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x1f0) == 0) {
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0x20))(0xccbebc20,0,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_004dd380();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xa8) = 0;
      iVar3 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar3 = FUN_0055b280();
      }
      if (*(int *)(iVar3 + 0xfc) == 0) {
        FUN_004040a0(0);
        uVar4 = 0xffffffff;
        pcVar5 = &DAT_006b3f70;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
        uStack_10 = 1;
        pcVar2 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399,&stack0xffffffd8);
        (*pcVar2)();
        uStack_10 = 0xffffffff;
        FUN_004040a0(1);
      }
      FUN_0054ffe0(&stack0xffffffd4,&DAT_006b5360,0,0x3f800000,0,0);
      if ((unaff_EDI != 0) &&
         (iVar3 = *(int *)(unaff_EDI + 0x14) + -1, *(int *)(unaff_EDI + 0x14) = iVar3, iVar3 == 0))
      {
        FUN_005abfc0(0);
      }
      *(undefined4 *)(param_1 + 0x110) = 1000;
      *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x11c) = 1;
      *(undefined4 *)(param_1 + 0x120) = 1000;
      *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x128) = 0x3f800000;
      *(undefined1 *)(param_1 + 300) = 1;
    }
  }
  ExceptionList = pvStack_18;
  return;
}

