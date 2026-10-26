/*
 * FUN_0056f520 at 0056f520
 * undefined FUN_0056f520(void)
 * Address ranges: 0056f520-0056f7f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0056f520(undefined1 param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [12];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640f61;
  local_c = ExceptionList;
  bVar2 = false;
  bVar1 = false;
  ExceptionList = &local_c;
  piVar4 = operator_new(0x198);
  local_4 = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    local_2c[0] = param_1;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = s_grenadetrail_006a4670;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar3 = FUN_00401940(uVar7,1);
    if (cVar3 != '\0') {
      pcVar9 = s_grenadetrail_006a4670;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)local_28 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        local_28 = local_28 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_28 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        local_28 = local_28 + 1;
      }
      FUN_00404190(uVar7);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar5 = FUN_005033a0(local_1c,local_2c);
    bVar2 = true;
    bVar1 = true;
    local_4 = 2;
    FUN_004370c0(uVar5,&DAT_006b9f50);
    local_4 = 3;
    piVar4[0x50] = 0;
    piVar4[0x51] = 0;
    *(undefined1 *)(piVar4 + 0x52) = 1;
    *(undefined1 *)((int)piVar4 + 0x149) = 0;
    *(undefined1 *)((int)piVar4 + 0x14a) = 0;
    *(undefined1 *)((int)piVar4 + 0x14b) = 0;
    *(undefined1 *)(piVar4 + 0x53) = 0;
    FUN_004041b0(0xffffffff);
    piVar4[0x5f] = 0x42c80000;
    piVar4[0x60] = 0x42c80000;
    piVar4[0x61] = 0x42c80000;
    piVar4[0x62] = 0x42c80000;
    piVar4[0x5e] = 0;
    *piVar4 = (int)&PTR_FUN_0064c4a8;
    piVar4[0x54] = 0;
    piVar4[0x55] = 0;
    piVar4[0x56] = 0;
    piVar4[99] = 0;
    piVar4[100] = 0;
    piVar4[0x65] = 0;
    piVar4[0x57] = 0;
    piVar4[0x58] = 0;
    piVar4[0x59] = 0;
  }
  local_4 = 4;
  if (bVar2) {
    FUN_004040a0(1);
  }
  local_4 = 0xffffffff;
  if (bVar1) {
    FUN_004040a0(1);
  }
  (**(code **)(*piVar4 + 0x4c))(&param_1);
  FUN_0060a4a0();
  uVar5 = __ftol();
  FUN_004041b0(uVar5);
  FUN_00502350(1);
  piVar4[0x4c] = 0x3ecccccd;
  iVar6 = FUN_0060a4a0();
  piVar4[100] = (int)((float)(iVar6 % 10000) * 0.002 + 40.0);
  iVar6 = FUN_0060a4a0();
  piVar4[0x5f] = (int)((float)(iVar6 % 10000) * 0.004 + 80.0);
  iVar6 = FUN_0060a4a0();
  piVar4[0x60] = (int)((float)(iVar6 % 10000) * 0.004 + 130.0);
  iVar6 = FUN_0060a4a0();
  piVar4[0x61] = (int)((float)(iVar6 % 10000) * 0.002 + 70.0);
  iVar6 = FUN_0060a4a0();
  piVar4[0x62] = (int)((float)(iVar6 % 10000) * 0.002);
  ExceptionList = pvStack_10;
  return piVar4;
}

