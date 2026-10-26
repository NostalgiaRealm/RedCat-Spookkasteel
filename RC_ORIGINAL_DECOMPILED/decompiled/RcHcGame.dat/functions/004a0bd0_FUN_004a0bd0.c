/*
 * FUN_004a0bd0 at 004a0bd0
 * undefined FUN_004a0bd0(void)
 * Address ranges: 004a0bd0-004a0cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004a0bd0(int param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cee8;
  local_c = ExceptionList;
  if (param_2 < 0.0) {
    param_2 = ABS(param_2);
    local_1c[0] = param_2._0_1_;
    uVar2 = 0xffffffff;
    pcVar4 = s_Setting_time_factor_<_0_0_0069536c;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &local_c;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 != '\0') {
      pcVar4 = s_Setting_time_factor_<_0_0_0069536c;
      pcVar5 = local_18;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      local_18[uVar2] = '\0';
      local_14 = uVar2;
    }
    local_4 = 0;
    FUN_005035a0(local_1c);
    if (local_18 == (char *)0x0) {
      *(float *)(param_1 + 0x40) = param_2;
      ExceptionList = local_c;
      return;
    }
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_18 + -1);
      *(float *)(param_1 + 0x40) = param_2;
      ExceptionList = local_c;
      return;
    }
    local_18[-1] = cVar1 + -1;
  }
  *(float *)(param_1 + 0x40) = param_2;
  ExceptionList = local_c;
  return;
}

