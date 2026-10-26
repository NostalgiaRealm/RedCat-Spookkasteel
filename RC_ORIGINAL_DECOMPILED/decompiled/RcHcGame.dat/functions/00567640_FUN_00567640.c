/*
 * FUN_00567640 at 00567640
 * undefined FUN_00567640(void)
 * Address ranges: 00567640-00567749
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00567640(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006401f8;
  local_c = ExceptionList;
  if (-1 < param_2) {
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    }
    if (param_2 < iVar2) goto LAB_0056772d;
  }
  local_1c[0] = (undefined1)param_2;
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
  ExceptionList = &local_c;
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
    *(undefined1 *)((int)local_18 + uVar4) = 0;
    local_14 = uVar4;
  }
  local_4 = 0;
  pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                s___AdamSource_DaviList_h_0068f458,0x97,local_1c);
  (*pcVar3)();
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
    }
  }
LAB_0056772d:
  ExceptionList = local_c;
  return *(int *)(param_1 + 4) + param_2 * 4;
}

