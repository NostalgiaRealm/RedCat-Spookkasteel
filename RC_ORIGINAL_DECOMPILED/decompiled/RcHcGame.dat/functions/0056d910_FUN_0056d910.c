/*
 * FUN_0056d910 at 0056d910
 * undefined FUN_0056d910(void)
 * Address ranges: 0056d910-0056dae3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0056d910(undefined4 *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640c3f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((*(int *)(param_2 + 4) != 0) &&
     (iVar4 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4), iVar3 = iVar4 >> 0x1f,
     ExceptionList = &pvStack_c, iVar4 / 0x18 + iVar3 != iVar3)) {
    local_2c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
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
        *local_28 = *puVar7;
        puVar7 = puVar7 + 1;
        local_28 = local_28 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_00404190(uVar5);
    }
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_args_size______0_006a45d4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x25f,local_2c);
    (*pcVar2)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    auStack_1c[0] = (undefined1)param_2;
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
    local_4 = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  auStack_1c);
    (*pcVar2)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  FUN_00453d20(&param_2);
  local_4 = 3;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x360) != 0)) {
    FUN_005042c0(0,0);
  }
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  local_4 = local_4 & 0xffffff00;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

