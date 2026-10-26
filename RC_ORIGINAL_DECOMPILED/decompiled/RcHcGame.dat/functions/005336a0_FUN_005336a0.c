/*
 * FUN_005336a0 at 005336a0
 * undefined FUN_005336a0(void)
 * Address ranges: 005336a0-005337c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005336a0(float param_1,int param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b4a8;
  pvStack_c = ExceptionList;
  if (param_3 < 1) {
    local_1c[0] = (undefined1)param_3;
    uVar3 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar3) = 0;
      local_14 = uVar3;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Max_>_0_006a0a64,s_D__Work_RCHorror_AdamSource_Adam_0069fb00,
                                  0x5a5,local_1c);
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
  }
  iVar5 = 1;
  iVar6 = 0;
  if (1 < param_3) {
    iVar8 = 0;
    do {
      if (ABS(param_1 - *(float *)(iVar5 * 4 + param_2)) <
          ABS(param_1 - *(float *)(iVar8 + param_2))) {
        iVar6 = iVar5;
        iVar8 = iVar5 * 4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_3);
  }
  ExceptionList = pvStack_c;
  return iVar6;
}

