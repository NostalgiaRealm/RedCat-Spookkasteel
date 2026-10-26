/*
 * FUN_004ddc00 at 004ddc00
 * undefined FUN_004ddc00(void)
 * Address ranges: 004ddc00-004ddcef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ddc00(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006321f8;
  local_c = ExceptionList;
  local_1c[0] = param_1._0_1_;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  if (param_1 == (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar4 = &DAT_006b3f70;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    ExceptionList = &local_c;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 == '\0') goto LAB_004ddca9;
    param_1 = &DAT_006b3f70;
  }
  else {
    uVar2 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    ExceptionList = &local_c;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 == '\0') goto LAB_004ddca9;
  }
  pcVar4 = local_18;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar4 = *param_1;
    param_1 = param_1 + 1;
    pcVar4 = pcVar4 + 1;
  }
  local_18[uVar2] = '\0';
  local_14 = uVar2;
LAB_004ddca9:
  FUN_00503ae0(local_1c);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return;
}

