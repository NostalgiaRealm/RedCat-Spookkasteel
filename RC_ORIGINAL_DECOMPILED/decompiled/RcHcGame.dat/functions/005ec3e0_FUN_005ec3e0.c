/*
 * FUN_005ec3e0 at 005ec3e0
 * undefined FUN_005ec3e0(void)
 * Address ranges: 005ec3e0-005ec4d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_005ec3e0(int param_1,undefined1 *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647098;
  local_c = ExceptionList;
  iVar5 = *(int *)(param_1 + 8) + -4;
  ExceptionList = &local_c;
  *(int *)(param_1 + 8) = iVar5;
  pcVar1 = *(char **)(*(int *)(param_1 + 4) + iVar5);
  uVar3 = 0xffffffff;
  local_1c[0] = param_2._0_1_;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar6 = pcVar1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar2 = FUN_00401940(uVar3,1);
  if (cVar2 != '\0') {
    pcVar6 = pcVar1;
    pcVar7 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_18[uVar3] = '\0';
    local_14 = uVar3;
  }
  local_4 = 0;
  FUN_0060b25d(pcVar1);
  *param_2 = local_1c[0];
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (local_18 != (char *)0x0) {
    cVar2 = local_18[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return param_2;
}

