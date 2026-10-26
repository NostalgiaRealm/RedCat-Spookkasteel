/*
 * FUN_005e9720 at 005e9720
 * undefined FUN_005e9720(void)
 * Address ranges: 005e9720-005e9837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e9720(int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_34 [4];
  char *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined **local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646c98;
  local_c = ExceptionList;
  local_34[0] = param_2._0_1_;
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_30 = (char *)0x0;
  local_2c = 0;
  local_28 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = param_2;
    pcVar6 = local_30;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4 = 0;
  piVar2 = (int *)FUN_005ec010(local_34);
  local_4 = 0xffffffff;
  if (local_30 != (char *)0x0) {
    cVar1 = local_30[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_30 + -1);
    }
    else {
      local_30[-1] = cVar1 + -1;
    }
  }
  local_30 = (char *)0x0;
  local_2c = 0;
  local_28 = 0;
  if (piVar2 == (int *)0x0) {
    FUN_005e4140(s_Execute_skipped__function__s_not_006b1034,param_2);
  }
  else {
    (**(code **)(*piVar2 + 0x3c))(local_24,param_1 + 0xbc);
    local_24[0] = &PTR_FUN_00650ad4;
    FUN_005e2f00();
  }
  ExceptionList = local_c;
  return;
}

