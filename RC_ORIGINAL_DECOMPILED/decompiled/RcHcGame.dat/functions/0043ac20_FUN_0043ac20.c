/*
 * FUN_0043ac20 at 0043ac20
 * undefined FUN_0043ac20(void)
 * Address ranges: 0043ac20-0043af53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0043ac20(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_11c [4];
  undefined4 *local_118;
  undefined4 local_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00624393;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_118 = *puVar8;
        puVar8 = puVar8 + 1;
        local_118 = local_118 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)local_118 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        local_118 = (undefined4 *)((int)local_118 + 1);
      }
      FUN_00404190();
    }
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_a_SubLevel_IsNotNull___00690830,
                                  s_D__Work_RCHorror_RCSource_RcPlay_00690848,0x32b,local_11c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  fVar1 = *(float *)(param_1 + 0x40);
  puVar8 = local_10c;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_0069081c,(double)fVar1);
  FUN_005acdb0();
  uVar4 = __ftol();
  puVar8 = local_10c;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,uVar4);
  FUN_005acdb0();
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  puVar8 = local_10c;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(local_10c,0xff,CONCAT44(uVar4,&DAT_00690818));
  FUN_005acdb0();
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  puVar8 = local_10c;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,uVar4);
  FUN_005acdb0();
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  puVar8 = local_10c;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,uVar4);
  FUN_005acdb0();
  uVar4 = *(undefined4 *)(param_1 + 0x68);
  puVar8 = local_10c;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,uVar4);
  FUN_005acdb0();
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  puVar8 = local_10c;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,uVar4);
  FUN_005acdb0();
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  puVar8 = local_10c;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,uVar4);
  FUN_005acdb0();
  FUN_005ad1a0();
  FUN_005ad1a0();
  FUN_005ad1a0();
  FUN_005ad1a0();
  FUN_005ad1a0();
  FUN_005ad1a0();
  FUN_005ad1a0();
  FUN_005ad1a0();
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar7 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar7, iVar7 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

