/*
 * FUN_00576b60 at 00576b60
 * undefined FUN_00576b60(void)
 * Address ranges: 00576b60-00576ef8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00576b60(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_41;
  int iStack_40;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641850;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x220) != 0) {
    iVar2 = DAT_006c8de0;
    ExceptionList = &pvStack_c;
    if (DAT_006c8de0 == 0) {
      ExceptionList = &pvStack_c;
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xfc) == 0) {
      local_3c[0] = local_41;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_3c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(char *)(*(int *)(iVar2 + 0xfc) + 0x8c) == '\0') {
      FUN_00409810(&DAT_006b3f70,&local_41);
      local_4 = 1;
      pcVar3 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                    0x14b,local_2c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar4 = (int *)FUN_005514e0(&iStack_40,(undefined4 *)(param_1 + 0x218));
    iVar2 = *(int *)(param_1 + 0x244);
    local_4 = 2;
    if (iVar2 != *piVar4) {
      if ((iVar2 != 0) &&
         (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0x244) = *piVar4;
      FUN_005844b0();
    }
    local_4 = 0xffffffff;
    if (iStack_40 != 0) {
      FUN_004098d0();
    }
    if (*(int *)(param_1 + 0x244) == 0) {
      uVar6 = FUN_005ae390(local_2c,s_Cannot_preload_sound___s__006a4b48,
                           *(undefined4 *)(param_1 + 0x218),*(undefined4 *)(param_1 + 0x21c),
                           *(undefined4 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x224));
      local_4 = 3;
      FUN_005035a0(uVar6);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
  }
  if (*(int *)(param_1 + 0x230) != 0) {
    iVar2 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xfc) == 0) {
      local_3c[0] = local_41;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 4;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_3c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(char *)(*(int *)(iVar2 + 0xfc) + 0x8c) == '\0') {
      local_2c[0] = local_41;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                    0x14b,local_2c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar4 = (int *)FUN_005514e0(&iStack_40,(undefined4 *)(param_1 + 0x228));
    iVar2 = *(int *)(param_1 + 0x248);
    local_4 = 6;
    if (iVar2 != *piVar4) {
      if ((iVar2 != 0) &&
         (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0x248) = *piVar4;
      FUN_005844b0();
    }
    local_4 = 0xffffffff;
    if (iStack_40 != 0) {
      FUN_004098d0();
    }
    if (*(int *)(param_1 + 0x248) == 0) {
      uVar6 = FUN_005ae390(auStack_1c,s_Cannot_preload_sound___s__006a4b48,
                           *(undefined4 *)(param_1 + 0x228),*(undefined4 *)(param_1 + 0x22c),
                           *(undefined4 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x234));
      local_4 = 7;
      FUN_005035a0(uVar6);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

