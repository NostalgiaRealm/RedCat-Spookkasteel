/*
 * FUN_00491930 at 00491930
 * undefined FUN_00491930(void)
 * Address ranges: 00491930-00491aca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00491930(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b4c8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x18) != 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x18) == 0) {
      ExceptionList = &local_c;
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
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_00553130();
    iVar4 = *(int *)(param_1 + 0x18);
    local_4 = 1;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0x14) + -1;
      *(int *)(iVar4 + 0x14) = iVar3;
      if (iVar3 == 0) {
        FUN_005abfc0(0);
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    local_4 = 0xffffffff;
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xfc) == 0) {
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
          *puStack_28 = *puVar7;
          puVar7 = puVar7 + 1;
          puStack_28 = puStack_28 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puStack_28 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puStack_28 = (undefined4 *)((int)puStack_28 + 1);
        }
        FUN_00404190(uVar5);
      }
      local_4 = 2;
      pcVar2 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,auStack_2c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_00550330(1);
  }
  ExceptionList = local_c;
  return;
}

