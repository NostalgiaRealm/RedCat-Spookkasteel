/*
 * FUN_00418460 at 00418460
 * undefined FUN_00418460(void)
 * Address ranges: 00418460-0041866f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b488 slot 47 for .?AVCRcTouchSpider@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b488 slot 47 for
   .?AVCRcTouchSpider@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00418460(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined *puVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621488;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x2c);
  ExceptionList = &pvStack_c;
  if ((iVar1 != 1) && (ExceptionList = &pvStack_c, iVar1 != 2)) {
    local_1c[0] = (undefined1)param_2;
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Entity_SubType____1____m_Entit_0068efb0,
                                  s_D__Work_RCHorror_RCSource_RcTouc_0068ef84,0xff,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
        local_18 = (undefined4 *)0x0;
        local_14 = 0;
        local_10 = 0;
        goto LAB_00418564;
      }
      FUN_005fe5f0((char *)((int)local_18 + -1));
    }
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
LAB_00418564:
  iVar1 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x2c);
  if (iVar1 == 1) {
    switch(param_2) {
    case 0:
      uVar4 = FUN_0060a4a0();
      uVar4 = uVar4 & 0x80000001;
      bVar9 = uVar4 == 0;
      if ((int)uVar4 < 0) {
        bVar9 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
      }
      puVar10 = &DAT_006b4d60;
      if (!bVar9) {
        puVar10 = &DAT_006b4d30;
      }
      break;
    case 1:
      puVar10 = &DAT_006b4d08;
      break;
    case 2:
      puVar10 = &DAT_006b4ce0;
      break;
    case 3:
      puVar10 = &DAT_006b4cb8;
      break;
    case 4:
      puVar10 = &DAT_006b4c90;
      break;
    default:
      goto switchD_00418584_default;
    }
  }
  else {
    if (iVar1 != 2) {
      ExceptionList = pvStack_c;
      return;
    }
    switch(param_2) {
    case 0:
      uVar4 = FUN_0060a4a0();
      uVar4 = uVar4 & 0x80000001;
      bVar9 = uVar4 == 0;
      if ((int)uVar4 < 0) {
        bVar9 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
      }
      puVar10 = &DAT_006b4c68;
      if (!bVar9) {
        puVar10 = &DAT_006b4c40;
      }
      break;
    case 1:
      puVar10 = &DAT_006b4c18;
      break;
    case 2:
      puVar10 = &DAT_006b4be8;
      break;
    case 3:
      puVar10 = &DAT_006b4bc0;
      break;
    case 4:
      puVar10 = &DAT_006b4b98;
      break;
    default:
      goto switchD_00418584_default;
    }
  }
  FUN_00423be0(puVar10,0,0x3f800000);
switchD_00418584_default:
  ExceptionList = pvStack_c;
  return;
}

