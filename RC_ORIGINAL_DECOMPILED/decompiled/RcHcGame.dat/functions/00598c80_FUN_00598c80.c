/*
 * FUN_00598c80 at 00598c80
 * undefined FUN_00598c80(void)
 * Address ranges: 00598c80-00598dc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00598c80(undefined4 param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006441d8;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_0059b1f0();
  if (cVar1 == '\0') {
    local_1c[0] = (undefined1)param_1;
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_IdToBeLinked_IsValid___006a6dd0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6cec,0x169,local_1c);
    (*pcVar2)();
    local_4._0_1_ = 0;
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
  FUN_00599120(param_1);
  puVar3 = (undefined4 *)FUN_00599450(local_20);
  uVar8 = *puVar3;
  local_4._0_1_ = 2;
  FUN_0059df90(param_1);
  FUN_00599120(uVar8);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005630e0();
  local_4 = 0xffffffff;
  FUN_005630e0();
  ExceptionList = pvStack_c;
  return;
}

