/*
 * FUN_004d3460 at 004d3460
 * undefined FUN_004d3460(void)
 * Address ranges: 004d3460-004d357c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d3460(int param_1,int param_2)

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
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631658;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_18 = (char *)0x0;
    local_1c[0] = 0;
    local_14 = 0;
    local_10 = 0;
    uVar3 = 0xffffffff;
    pcVar5 = s_CAdamTriggerModel__Init__a_Trigg_00699618;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_CAdamTriggerModel__Init__a_Trigg_00699618;
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
    pcVar2 = (code *)FUN_005a07f0(s_a_Trigger____NULL_006995d0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006995e4,0x1d,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
  FUN_004cfc00(*(undefined4 *)(param_2 + 0x18),param_2);
  *(int *)(param_1 + 0x168) = param_2;
  if (*(int *)(param_2 + 0x40) != 0) {
    *(undefined1 *)(param_1 + 0xaa) = 1;
  }
  ExceptionList = pvStack_c;
  return;
}

