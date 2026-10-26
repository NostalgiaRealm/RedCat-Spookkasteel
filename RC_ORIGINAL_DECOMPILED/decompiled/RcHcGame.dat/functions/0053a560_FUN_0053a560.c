/*
 * FUN_0053a560 at 0053a560
 * undefined FUN_0053a560(void)
 * Address ranges: 0053a560-0053a6bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0053a560(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063be18;
  pvStack_c = ExceptionList;
  if ((*(int *)(param_1 + 0x18) == 0) ||
     (iVar3 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18), iVar9 = iVar3 >> 0x1f,
     ExceptionList = &pvStack_c, iVar3 / 0x1c + iVar9 == iVar9)) {
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
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
      FUN_00404190(uVar4);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Stack_size___>_0_006a1058,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,599,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
  iVar9 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar9 != iVar3) {
    puVar6 = (undefined4 *)(iVar9 + -4);
    do {
      FUN_005ab760(iVar9);
      iVar9 = iVar9 + 0x1c;
      puVar6[-1] = puVar6[6];
      *puVar6 = puVar6[7];
      puVar6 = puVar6 + 7;
    } while (iVar9 != iVar3);
  }
  puVar8 = *(undefined4 **)(param_1 + 0x1c);
  for (puVar6 = puVar8 + -7; puVar6 != puVar8; puVar6 = puVar6 + 7) {
    (**(code **)*puVar6)(0);
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -0x1c;
  ExceptionList = pvStack_c;
  return;
}

