/*
 * FUN_005e2da0 at 005e2da0
 * undefined FUN_005e2da0(void)
 * Address ranges: 005e2da0-005e2ef2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005e2da0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064649b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 3;
  puVar3 = operator_new(0x10);
  local_4 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    param_1[4] = 0;
    ExceptionList = local_c;
    return param_1;
  }
  *puVar3 = param_2._0_1_;
  uVar4 = 0xffffffff;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  pcVar6 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  if (0xfffffffd < uVar4) {
    FUN_005fe5fb();
  }
  iVar2 = *(int *)(puVar3 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      FUN_004040a0(1);
      param_1[4] = puVar3;
      ExceptionList = local_c;
      return param_1;
    }
    if ((*(uint *)(puVar3 + 0xc) < 0x20) && (uVar4 <= *(uint *)(puVar3 + 0xc))) goto LAB_005e2e9a;
    FUN_004040a0(1);
  }
  else if (uVar4 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004040a0(0);
    param_1[4] = puVar3;
    ExceptionList = local_c;
    return param_1;
  }
  FUN_00401a60(uVar4);
LAB_005e2e9a:
  pcVar6 = *(char **)(puVar3 + 4);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *param_2;
    param_2 = param_2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(uint *)(puVar3 + 8) = uVar4;
  *(undefined1 *)(*(int *)(puVar3 + 4) + uVar4) = 0;
  param_1[4] = puVar3;
  ExceptionList = local_c;
  return param_1;
}

