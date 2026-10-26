/*
 * FUN_004cefe0 at 004cefe0
 * undefined FUN_004cefe0(void)
 * Address ranges: 004cefe0-004cf1cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004cefe0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined *local_38;
  int local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006310d8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x184) == 1) {
    local_38 = &DAT_006ba218;
    ExceptionList = &local_c;
  }
  else if (*(int *)(param_1 + 0x184) == 2) {
    local_38 = &DAT_006ba1f0;
    ExceptionList = &local_c;
  }
  else {
    ExceptionList = &local_c;
    uVar2 = FUN_005ae390(local_1c,s_Elevator__s_has_invalid_type_006990ec);
    local_4 = 0;
    FUN_005035a0(uVar2);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_38 = (undefined *)0x0;
        *(char *)(local_18 + -1) = cVar1 + -1;
        goto LAB_004cf06f;
      }
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    local_38 = (undefined *)0x0;
  }
LAB_004cf06f:
  FUN_004ceed0();
  if (local_38 != (undefined *)0x0) {
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar1 = FUN_00401940(uVar7,1);
      if (cVar1 != '\0') {
        puVar9 = (undefined4 *)&DAT_006b3f70;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *local_28 = *puVar9;
          puVar9 = puVar9 + 1;
          local_28 = local_28 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)local_28 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          local_28 = (undefined4 *)((int)local_28 + 1);
        }
        FUN_00404190(uVar7);
      }
      local_4 = 1;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar5 = (int *)FUN_0054ffe0(&local_30,local_38,1,0x3f800000,0,0);
    iVar3 = *(int *)(param_1 + 0x188);
    local_4 = 2;
    if (iVar3 != *piVar5) {
      if ((iVar3 != 0) &&
         (iVar6 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar6, iVar6 == 0)) {
        FUN_005abfc0(0);
      }
      iVar3 = *piVar5;
      *(int *)(param_1 + 0x188) = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_30 != 0) &&
       (iVar3 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar3, iVar3 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = local_c;
  return;
}

