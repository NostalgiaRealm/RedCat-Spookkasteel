/*
 * FUN_00538e80 at 00538e80
 * undefined FUN_00538e80(void)
 * Address ranges: 00538e80-00538fb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00538e80(int param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_1d;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063bc28;
  pvStack_c = ExceptionList;
  local_1d = *(undefined1 *)(param_1 + 0x28);
  ExceptionList = &pvStack_c;
  (**(code **)(param_1 + 0x40))((int *)(param_1 + 0x4c),&local_1d,*(undefined4 *)(param_1 + 0x48));
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    auStack_1c[0] = local_1d;
    puStack_18 = (undefined4 *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = puStack_18;
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
      *(undefined1 *)(uVar4 + (int)puStack_18) = 0;
      uStack_14 = uVar4;
    }
    uStack_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Value_>__0____m_Value_<__m_Max_006a0f08,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0xde,auStack_1c);
    (*pcVar3)();
    if (puStack_18 == (undefined4 *)0x0) {
      *(undefined1 *)(param_1 + 0x28) = local_1d;
      ExceptionList = pvStack_c;
      return;
    }
    cVar2 = *(char *)((int)puStack_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)((int)puStack_18 + -1));
      *(undefined1 *)(param_1 + 0x28) = local_1d;
      ExceptionList = pvStack_c;
      return;
    }
    *(char *)((int)puStack_18 + -1) = cVar2 + -1;
  }
  *(undefined1 *)(param_1 + 0x28) = local_1d;
  ExceptionList = pvStack_c;
  return;
}

