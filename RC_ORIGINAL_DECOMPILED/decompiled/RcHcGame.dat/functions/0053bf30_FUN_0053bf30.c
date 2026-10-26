/*
 * FUN_0053bf30 at 0053bf30
 * undefined FUN_0053bf30(void)
 * Address ranges: 0053bf30-0053c14b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_0053bf30(int param_1,undefined1 param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int local_34;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bf90;
  pvStack_c = ExceptionList;
  if ((*(int *)(param_1 + 0x1c) == 0) ||
     (ExceptionList = &pvStack_c, (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x24 < 1))
  {
    local_2c[0] = param_2;
    uVar3 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_28;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_00404190(uVar3);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Messages_Count___>_0_006a10fc,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a1114,0x4a,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
      }
    }
  }
  iVar8 = 0;
  local_34 = 0;
  do {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar5 = 0;
      iVar6 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
      iVar6 = iVar5 * 0x38e38e39;
      iVar5 = iVar5 / 0x24;
    }
    if (iVar5 <= local_34) {
      ExceptionList = pvStack_c;
      return iVar6;
    }
    if (iVar8 < 0) {
LAB_0053c07b:
      auStack_1c[0] = param_2;
      FUN_004040a0(0);
      uVar3 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      cVar1 = FUN_00401940(uVar3,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        puVar10 = puStack_18;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FUN_00404190(uVar3);
      }
      local_4 = 1;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,auStack_1c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    else {
      if (*(int *)(param_1 + 0x1c) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x24;
      }
      if (iVar6 <= local_34) goto LAB_0053c07b;
    }
    iVar6 = *(int *)(param_1 + 0x1c) + iVar8;
    FUN_005120b0(iVar6,iVar6 + 0x10,*(undefined4 *)(iVar6 + 0x20));
    local_34 = local_34 + 1;
    iVar8 = iVar8 + 0x24;
  } while( true );
}

