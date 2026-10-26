/*
 * FUN_0056d4f0 at 0056d4f0
 * undefined FUN_0056d4f0(void)
 * Address ranges: 0056d4f0-0056d77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056d4f0(undefined4 *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640be0;
  pvStack_c = ExceptionList;
  iVar5 = *(int *)(param_2 + 4);
  if (((iVar5 == 0) || ((*(int *)(param_2 + 8) - iVar5) / 0x18 != 1)) ||
     (ExceptionList = &pvStack_c, *(int *)(iVar5 + 8) != 2)) {
    local_3c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
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
      puVar10 = (undefined4 *)&DAT_006b3f70;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *local_38 = *puVar10;
        puVar10 = puVar10 + 1;
        local_38 = local_38 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)local_38 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        local_38 = (undefined4 *)((int)local_38 + 1);
      }
      FUN_00404190(uVar8);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s__args_size______1______args_0__I_006a4340,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x243,local_3c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = FUN_00515db0();
  iVar5 = *(int *)(iVar3 + 100);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar5;
  }
  if (iVar5 != 0) {
    iVar5 = *(int *)(param_2 + 4);
    if (*(int *)(iVar5 + 8) != 2) {
      local_3c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4 = 1;
      pcVar2 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                    0x42,local_3c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    uVar6 = FUN_005ae390(auStack_1c,s_______ShowMission___d___006a45a4,*(undefined4 *)(iVar5 + 0x10)
                        );
    local_4 = 2;
    FUN_005aff00(uVar6);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar5 = *(int *)(param_2 + 4);
  if (*(int *)(iVar5 + 8) != 2) {
    auStack_2c[0] = (undefined1)param_2;
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
      puVar10 = (undefined4 *)&DAT_006b3f70;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puStack_28 = *puVar10;
        puVar10 = puVar10 + 1;
        puStack_28 = puStack_28 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puStack_28 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puStack_28 = (undefined4 *)((int)puStack_28 + 1);
      }
      FUN_00404190(uVar8);
    }
    local_4 = 3;
    pcVar2 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                  0x42,auStack_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  uVar6 = *(undefined4 *)(iVar5 + 0x10);
  uVar7 = FUN_00514140(uVar6);
  FUN_0053cbf0(uVar7);
  FUN_0053cb40(uVar7,uVar6);
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  ExceptionList = pvStack_c;
  return;
}

