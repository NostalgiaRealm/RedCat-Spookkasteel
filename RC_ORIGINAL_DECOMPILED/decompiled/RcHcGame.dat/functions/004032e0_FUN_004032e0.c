/*
 * FUN_004032e0 at 004032e0
 * undefined FUN_004032e0(void)
 * Address ranges: 004032e0-0040341c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004032e0(int param_1)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_EBX;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iStack_24;
  int local_20;
  undefined4 *puStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0061fb23;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_20 = param_1;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x88))(0);
  if (cVar1 == '\0') {
    local_20 = CONCAT31(local_20._1_3_,(char)((uint)unaff_EBX >> 0x18));
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    puStack_1c = (undefined4 *)0x0;
    uStack_18 = 0;
    uStack_14 = 0;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = puStack_1c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)puStack_1c + uVar5) = 0;
      param_1 = iStack_24;
      uStack_18 = uVar5;
    }
    puStack_8 = (undefined1 *)0x0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Enemy_HasMotion_CRcEnemy__EM_S_0068d660,
                                  s_D__Work_RCHorror_RCSource_RcEnem_0068d584,0x100,&local_20);
    (*pcVar2)();
    puStack_8 = (undefined1 *)0xffffffff;
    if (puStack_1c != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)puStack_1c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_1c + -1));
      }
      else {
        *(char *)((int)puStack_1c + -1) = cVar1 + -1;
      }
    }
    puStack_1c = (undefined4 *)0x0;
    uStack_18 = 0;
    uStack_14 = 0;
  }
  pvVar3 = operator_new(0x28);
  puStack_8 = (undefined1 *)0x1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004034d0(*(undefined4 *)(param_1 + 0x24));
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00402a10(0,uVar4);
  ExceptionList = pvStack_10;
  return;
}

