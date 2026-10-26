/*
 * FUN_004ac300 at 004ac300
 * undefined FUN_004ac300(void)
 * Address ranges: 004ac300-004ac55e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e9f4 slot 1 for .?AVCAdam3DSoundCell@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e9f4 slot 1 for
   .?AVCAdam3DSoundCell@@. Original bytes unchanged; names and types still inferred. */

void __thiscall
FUN_004ac300(int param_1,undefined4 param_2,undefined4 param_3,char param_4,int *param_5)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [12];
  char local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar6 = param_5;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e0f8;
  local_c = ExceptionList;
  if (param_4 == '\0') {
    return;
  }
  ExceptionList = &local_c;
  if (param_5 != (int *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x54);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    ExceptionList = &local_c;
    iVar3 = FUN_004251b0(0,param_5[0x19],puVar2,*(undefined4 *)(param_1 + 0x58));
    if (iVar3 == 0) goto LAB_004ac3ec;
  }
  local_2c[0] = param_4;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar11 = &DAT_006b3f70;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8 - 1;
  cVar1 = FUN_00401940(uVar8,1);
  if (cVar1 != '\0') {
    puVar5 = (undefined4 *)&DAT_006b3f70;
    puVar10 = local_28;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(undefined1 *)((int)local_28 + uVar8) = 0;
    piVar6 = param_5;
    local_24 = uVar8;
  }
  local_4 = 0;
  pcVar4 = (code *)FUN_005a07f0(s_go____0____go_>GetName____m_Game_006961d8,
                                s_D__Work_RCHorror_AdamSource_Adam_00696204,0x23,local_2c);
  (*pcVar4)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_004ac3ec:
  if (piVar6 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0x48))(local_38);
    uStack_44 = *puVar5;
    uStack_40 = puVar5[1];
    uStack_3c = puVar5[2];
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      param_4 = (char)iVar3;
      auStack_1c[0] = param_4;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar1 = FUN_00401940(uVar8,1);
      if (cVar1 != '\0') {
        puVar5 = (undefined4 *)&DAT_006b3f70;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puStack_18 = *puVar5;
          puVar5 = puVar5 + 1;
          puStack_18 = puStack_18 + 1;
        }
        for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puStack_18 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puStack_18 = (undefined4 *)((int)puStack_18 + 1);
        }
        FUN_00404190(uVar8);
      }
      local_4 = 1;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,auStack_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar6 = (int *)FUN_0054ea00(&param_5,*(undefined4 *)(param_1 + 0x60),&uStack_44,0,1,
                                 *(undefined4 *)(param_1 + 0x68),0,0);
    iVar3 = *(int *)(param_1 + 100);
    local_4 = 2;
    if (iVar3 != *piVar6) {
      if ((iVar3 != 0) &&
         (iVar7 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar7, iVar7 == 0)) {
        FUN_005abfc0(0);
      }
      iVar3 = *piVar6;
      *(int *)(param_1 + 100) = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((param_5 != (int *)0x0) && (iVar3 = param_5[5], param_5[5] = iVar3 + -1, iVar3 + -1 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = local_c;
  return;
}

