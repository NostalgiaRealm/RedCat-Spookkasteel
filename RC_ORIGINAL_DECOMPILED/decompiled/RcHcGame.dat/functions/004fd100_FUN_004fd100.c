/*
 * FUN_004fd100 at 004fd100
 * undefined FUN_004fd100(void)
 * Address ranges: 004fd100-004fd20a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004fd100(int *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635628;
  pvStack_c = ExceptionList;
  if (param_2 == 0) {
    local_1c[0] = 0;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
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
      *(undefined1 *)((int)local_18 + uVar3) = 0;
      local_14 = uVar3;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Node__0_0069c70c,s___AdamSource_DaviLinkedList_h_00699ef4,0xda
                                  ,local_1c);
    (*pcVar2)();
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
  }
  if (*param_1 == 0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else {
    *(int *)(param_2 + 4) = *param_1;
    *(undefined4 *)(param_2 + 8) = 0;
    *(int *)(*param_1 + 8) = param_2;
  }
  *param_1 = param_2;
  ExceptionList = pvStack_c;
  return;
}

