/*
 * FUN_004e3180 at 004e3180
 * undefined FUN_004e3180(void)
 * Address ranges: 004e3180-004e3287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004e3180(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632948;
  local_c = ExceptionList;
  if (*(float *)(param_1 + 400) < *(float *)(param_1 + 0x18c)) {
    local_1c[0] = (undefined1)param_2;
    uVar3 = 0xffffffff;
    pcVar5 = s_CAdamLight__SetRadiusAZ____inval_0069a2dc;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &local_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_CAdamLight__SetRadiusAZ____inval_0069a2dc;
      pcVar6 = local_18;
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
      local_18[uVar3] = '\0';
      local_14 = uVar3;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_RadiusZ_>__m_RadiusA_0069a2c4,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069a274,0x1b1,local_1c);
    (*pcVar2)();
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x18c) = param_2;
  *(undefined4 *)(param_1 + 400) = param_3;
  ExceptionList = local_c;
  return;
}

