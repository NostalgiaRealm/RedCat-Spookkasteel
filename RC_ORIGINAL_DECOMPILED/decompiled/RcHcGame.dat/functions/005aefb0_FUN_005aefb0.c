/*
 * FUN_005aefb0 at 005aefb0
 * undefined FUN_005aefb0(void)
 * Address ranges: 005aefb0-005af20d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005aefb0(int param_1)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 local_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645feb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006cad9c == (void *)0x0) {
    ExceptionList = &pvStack_c;
    if (DAT_006cada0 != '\0') {
      local_4c[0] = (undefined1)param_1;
      ExceptionList = &pvStack_c;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s___m_Created_006a178c,
                                    s_D__Work_RCHorror_AdamSource_Davi_006a9024,0x30,local_4c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    pvVar3 = operator_new(0x14);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      FUN_005af950(0);
      *(undefined4 *)((int)pvVar3 + 0x10) = 0;
    }
    DAT_006cada0 = '\x01';
    DAT_006cad9c = pvVar3;
  }
  pvVar3 = DAT_006cad9c;
  local_4 = 0xffffffff;
  iVar7 = 0;
  do {
    if (*(int *)((int)pvVar3 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)pvVar3 + 8) - *(int *)((int)pvVar3 + 4) >> 2;
    }
    if (iVar4 <= iVar7) {
      puVar8 = &DAT_0064a3b4;
      if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(param_1 + 4);
      }
      iVar7 = FUN_005aee60(auStack_2c);
      puVar5 = *(undefined1 **)(iVar7 + 4);
      local_4 = 3;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      FUN_005ae390(auStack_1c,&DAT_0069c984,puVar5,puVar8);
      local_4 = CONCAT31(local_4._1_3_,5);
      if (iStack_28 != 0) {
        cVar1 = *(char *)(iStack_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_28 + -1));
        }
        else {
          *(char *)(iStack_28 + -1) = cVar1 + -1;
        }
      }
      iStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      FUN_005aff00(auStack_1c);
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
          ExceptionList = pvStack_c;
          return;
        }
        FUN_005fe5f0(iStack_18 + -1);
      }
      ExceptionList = pvStack_c;
      return;
    }
    if (iVar7 < 0) {
LAB_005af0c3:
      auStack_3c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 2;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,auStack_3c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    else {
      iVar4 = FUN_0044e4c0();
      if (iVar4 <= iVar7) goto LAB_005af0c3;
    }
    FUN_005af210(*(undefined4 *)(*(int *)((int)pvVar3 + 4) + iVar7 * 4),1,iVar7);
    iVar7 = iVar7 + 1;
  } while( true );
}

