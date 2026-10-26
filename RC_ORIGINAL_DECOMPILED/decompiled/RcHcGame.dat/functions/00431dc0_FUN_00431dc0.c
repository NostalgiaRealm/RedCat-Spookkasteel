/*
 * FUN_00431dc0 at 00431dc0
 * undefined FUN_00431dc0(void)
 * Address ranges: 00431dc0-00431fa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00431dc0(int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006239e9;
  local_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  ExceptionList = &local_c;
  pvVar5 = operator_new(500);
  local_4 = 0;
  if (pvVar5 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    uVar8 = 0xffffffff;
    pcVar10 = s_rc_glow_006903a8;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8 - 1;
    local_28 = (char *)0x0;
    local_24 = 0;
    local_20 = 0;
    cVar4 = FUN_00401940(uVar8,1);
    if (cVar4 != '\0') {
      pcVar10 = s_rc_glow_006903a8;
      pcVar11 = local_28;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_28[uVar8] = '\0';
      local_24 = uVar8;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar6 = FUN_005033a0(local_1c,local_2c);
    bVar3 = true;
    bVar2 = true;
    local_4 = 2;
    iVar7 = FUN_004e22a0(uVar6);
  }
  piVar1 = (int *)(param_1 + 0x398);
  *piVar1 = iVar7;
  if (bVar2) {
    if (local_18 != 0) {
      cVar4 = *(char *)(local_18 + -1);
      if ((cVar4 != '\0') && (cVar4 != -1)) {
        *(char *)(local_18 + -1) = cVar4 + -1;
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        goto LAB_00431ef6;
      }
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
LAB_00431ef6:
  local_4 = 0xffffffff;
  if (bVar3) {
    if (local_28 != (char *)0x0) {
      cVar4 = local_28[-1];
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        FUN_005fe5f0(local_28 + -1);
      }
      else {
        local_28[-1] = cVar4 + -1;
      }
    }
    local_28 = (char *)0x0;
    local_24 = 0;
    local_20 = 0;
  }
  if (*piVar1 != 0) {
    FUN_004e3140(0xffffffff);
    FUN_004e3160(0xffffffff);
    FUN_004e2d60(0x42f00000);
    FUN_004e3090(&DAT_0064c3e8);
    FUN_004e30d0(0);
    FUN_004e3120(0);
    FUN_004e3100(0);
    FUN_00502350(1);
    FUN_00509a90(*piVar1,piVar1);
  }
  ExceptionList = local_c;
  return 1;
}

