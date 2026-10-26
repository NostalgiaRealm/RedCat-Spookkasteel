/*
 * FUN_0041f120 at 0041f120
 * undefined FUN_0041f120(void)
 * Address ranges: 0041f120-0041f234
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_0041f120(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
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
  puStack_8 = &LAB_00621e68;
  local_c = ExceptionList;
  if (-1 < param_2) {
    if (*(int *)(param_1 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
    }
    if (param_2 < iVar5) goto LAB_0041f214;
  }
  local_1c[0] = (undefined1)param_2;
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    puVar6 = (undefined4 *)&DAT_006b3f70;
    puVar8 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar3) = 0;
    local_14 = uVar3;
  }
  local_4 = 0;
  pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                s___AdamSource_DaviList_h_0068f458,0x8b,local_1c);
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
LAB_0041f214:
  ExceptionList = local_c;
  return *(int *)(param_1 + 4) + param_2 * 0xc;
}

