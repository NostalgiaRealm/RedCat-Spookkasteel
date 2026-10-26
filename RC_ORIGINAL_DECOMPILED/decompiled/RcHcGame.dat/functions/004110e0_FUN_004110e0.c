/*
 * FUN_004110e0 at 004110e0
 * undefined FUN_004110e0(void)
 * Address ranges: 004110e0-004112bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64af2c slot 47 for .?AVCRcShootBat@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64af2c slot 47 for
   .?AVCRcShootBat@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004110e0(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620e08;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x2c);
  ExceptionList = &pvStack_c;
  if ((iVar1 != 2) && (ExceptionList = &pvStack_c, iVar1 != 3)) {
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
    pcVar3 = (code *)FUN_005a07f0(s_m_Entity_SubType____2____m_Entit_0068ea18,
                                  s_D__Work_RCHorror_RCSource_RcShoo_0068e9b4,0xa1,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
        local_18 = (undefined4 *)0x0;
        local_14 = 0;
        local_10 = 0;
        goto LAB_004111e4;
      }
      FUN_005fe5f0((char *)((int)local_18 + -1));
    }
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
LAB_004111e4:
  iVar1 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x2c);
  if (iVar1 == 2) {
    switch(param_2) {
    case 0:
      uVar11 = 0x3ecccccd;
      uVar10 = 1;
      puVar9 = &DAT_006b45c8;
      break;
    case 1:
      uVar11 = 0x3f800000;
      uVar10 = 0;
      puVar9 = &DAT_006b4598;
      break;
    case 2:
      uVar11 = 0x3f800000;
      uVar10 = 0;
      puVar9 = &DAT_006b4570;
      break;
    case 3:
      uVar11 = 0x3f800000;
      uVar10 = 0;
      puVar9 = &DAT_006b4548;
      break;
    case 4:
      uVar11 = 0x3f800000;
      uVar10 = 0;
      puVar9 = &DAT_006b4520;
      break;
    default:
      goto switchD_00411206_default;
    }
  }
  else {
    if (iVar1 != 3) {
      ExceptionList = pvStack_c;
      return;
    }
    switch(param_2) {
    case 0:
      uVar11 = 0x3ecccccd;
      uVar10 = 1;
      puVar9 = &DAT_006b44f8;
      break;
    case 1:
      uVar11 = 0x3f800000;
      uVar10 = 0;
      puVar9 = &DAT_006b44d0;
      break;
    case 2:
      uVar11 = 0x3f800000;
      uVar10 = 0;
      puVar9 = &DAT_006b44a8;
      break;
    case 3:
      uVar11 = 0x3f800000;
      uVar10 = 0;
      puVar9 = &DAT_006b4480;
      break;
    case 4:
      uVar11 = 0x3f800000;
      uVar10 = 0;
      puVar9 = &DAT_006b4450;
      break;
    default:
      goto switchD_00411206_default;
    }
  }
  FUN_00423be0(puVar9,uVar10,uVar11);
switchD_00411206_default:
  ExceptionList = pvStack_c;
  return;
}

