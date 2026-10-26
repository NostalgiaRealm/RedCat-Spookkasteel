/*
 * FUN_00502480 at 00502480
 * undefined FUN_00502480(void)
 * Address ranges: 00502480-00502670
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00502480(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int local_24;
  int *piStack_20;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635ae8;
  local_c = ExceptionList;
  uVar2 = 0;
  if ((*(char *)(param_1 + 0xac) == '\0') && (*(char *)(param_1 + 0xaa) != '\0')) {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0xac) = 1;
    piVar3 = (int *)FUN_004042e0(&local_24);
    local_4 = 0;
    if (*piVar3 == 0) {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 1;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar4)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_004fb090();
    local_4 = 0xffffffff;
    if ((local_24 != 0) &&
       (iVar7 = *(int *)(local_24 + 0x14) + -1, *(int *)(local_24 + 0x14) = iVar7, iVar7 == 0)) {
      FUN_005abfc0(0);
    }
    iVar7 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar7 = FUN_0055b280();
    }
    if (*(int *)(iVar7 + 0xfc) == 0) {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puStack_18 = *puVar8;
          puVar8 = puVar8 + 1;
          puStack_18 = puStack_18 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puStack_18 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puStack_18 = (undefined4 *)((int)puStack_18 + 1);
        }
        FUN_00404190(uVar5);
      }
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_0054ffe0(&piStack_20,&DAT_006ba1c8,0,0x3f800000,0,0);
    if (piStack_20 != (int *)0x0) {
      iVar7 = piStack_20[5];
      piStack_20[5] = iVar7 + -1;
      if (iVar7 + -1 == 0) {
        FUN_005abfc0(0);
      }
    }
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}

