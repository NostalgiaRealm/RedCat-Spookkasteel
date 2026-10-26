/*
 * FUN_004dbb10 at 004dbb10
 * undefined FUN_004dbb10(void)
 * Address ranges: 004dbb10-004dbde1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004dbb10(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [16];
  undefined4 local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631fa0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00457240();
  iVar2 = FUN_0041e8e0();
  if (iVar2 < 1) {
    FUN_005a1d60();
    FUN_004f3d10();
    uVar5 = FUN_005ae390(local_34,s_SubLevel__s___s___No_entity_to_c_00699d9c);
    local_4 = 2;
    FUN_004c43e0(uVar5);
    local_4 = 0xffffffff;
    FUN_004040a0();
    FUN_00457240();
    iVar2 = FUN_0041e8e0();
    if (iVar2 < 1) {
      FUN_005a1d60();
      FUN_005a1d60();
      FUN_004f3d10();
      puVar7 = *(undefined1 **)(param_1 + 0x20);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_44,s_SubLevel__s___s___No_entity_to_c_00699d9c,puVar7);
      local_4 = 3;
      FUN_004c43e0(uVar5);
      local_4 = 0xffffffff;
      if (local_40 != 0) {
        cVar1 = *(char *)(local_40 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)(local_40 + -1) = cVar1 + -1;
        }
      }
      local_40 = 0;
      puVar8 = local_24;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_3c = 0;
      local_38 = 0;
      uVar5 = FUN_004dba90();
    }
    else {
      FUN_00457240(param_1);
      uVar5 = FUN_004cab70();
      uVar5 = FUN_004dba10(uVar5);
    }
  }
  else {
    FUN_00457240(param_1);
    iVar3 = FUN_004ddcf0();
    if (*(int *)(iVar3 + 0x14) != 0x3f3) {
      FUN_005ae390();
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_entity_>Version1011____1011_00699e18);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    uVar5 = FUN_004dba90();
    if (1 < iVar2) {
      FUN_005a1d60();
      FUN_004f3d10();
      uVar6 = FUN_005ae390(local_34,s_SubLevel__s___s___More_than_one_e_00699dd4);
      local_4 = 1;
      FUN_004c43e0(uVar6);
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
  }
  FUN_004f41b0();
  ExceptionList = pvStack_c;
  return uVar5;
}

