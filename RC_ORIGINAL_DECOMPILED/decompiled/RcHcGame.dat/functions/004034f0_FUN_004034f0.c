/*
 * FUN_004034f0 at 004034f0
 * undefined FUN_004034f0(void)
 * Address ranges: 004034f0-00403606
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004034f0(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iStack_24;
  int local_20;
  undefined4 *puStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0061fb58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_20 = param_1;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x88))(0);
  if (cVar1 == '\0') {
    local_20 = CONCAT31(local_20._1_3_,(char)((uint)unaff_EBX >> 0x18));
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    puStack_1c = (undefined4 *)0x0;
    uStack_18 = 0;
    uStack_14 = 0;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = puStack_1c;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)puStack_1c + uVar3) = 0;
      param_1 = iStack_24;
      uStack_18 = uVar3;
    }
    puStack_8 = (undefined1 *)0x0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Enemy_HasMotion_CRcEnemy__EM_S_0068d660,
                                  s_D__Work_RCHorror_RCSource_RcEnem_0068d584,0x143,&local_20);
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
    puStack_1c = (void *)0x0;
    uStack_18 = 0;
    uStack_14 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 0x8c))(0,0,0x7f7fffff);
  ExceptionList = puStack_1c;
  return;
}

