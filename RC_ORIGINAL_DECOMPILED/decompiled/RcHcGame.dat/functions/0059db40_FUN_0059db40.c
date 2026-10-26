/*
 * FUN_0059db40 at 0059db40
 * undefined FUN_0059db40(void)
 * Address ranges: 0059db40-0059df8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0059dcce) */
/* WARNING: Removing unreachable block (ram,0x0059dcd8) */
/* WARNING: Removing unreachable block (ram,0x0059dce2) */
/* WARNING: Removing unreachable block (ram,0x0059dcdc) */

int __thiscall FUN_0059db40(int param_1,int param_2,int param_3,float param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  int *piStack_3c;
  float local_34;
  int local_30;
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar14 = param_3;
  puStack_8 = &LAB_00644a20;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_34 = -1.0;
  ExceptionList = &pvStack_c;
  if (param_3 == 0) {
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar4 = FUN_00401940();
    if (cVar4 != '\0') {
      puVar11 = (undefined4 *)&DAT_006b3f70;
      puVar12 = local_18;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar8) = 0;
    }
    local_4._0_1_ = 1;
    pcVar5 = (code *)FUN_005a07f0();
    (*pcVar5)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  local_30 = 0;
  piStack_3c = operator_new(0x10);
  if (piStack_3c == (int *)0x0) {
    piStack_3c = (int *)0x0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18);
    *piStack_3c = (int)&PTR_FUN_0064ef1c;
    piStack_3c[1] = iVar3;
    piStack_3c[3] = 0;
    piStack_3c[2] = *(int *)(iVar3 + 4);
  }
  (**(code **)*piStack_3c)();
  cVar4 = (**(code **)(*piStack_3c + 0x18))();
  do {
    if (cVar4 == '\0') {
      FUN_005fe5f0();
      local_4 = 0xffffffff;
      if ((param_2 != 0) &&
         (iVar14 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar14, iVar14 == 0)) {
        FUN_005abfc0();
      }
      ExceptionList = pvStack_c;
      return local_30;
    }
    piVar6 = (int *)(**(code **)(*piStack_3c + 0x20))();
    iVar3 = *piVar6;
    if (iVar3 == 0) {
      iVar10 = -1;
      pcVar13 = &DAT_006b3f70;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar4 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar4 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 2;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
    }
    if ((iVar3 != iVar14) && (iVar10 = FUN_00598540(), iVar10 < 8)) {
      iVar10 = FUN_005995c0();
      iVar7 = FUN_005995c0();
      if (iVar10 == iVar7) {
        FUN_00599450();
        local_4._0_1_ = 3;
        cVar4 = FUN_00598f20();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_005630e0();
        if (cVar4 == '\0') {
          fVar15 = (float10)FUN_00597fd0();
          if (fVar15 <= (float10)param_4) {
            iVar10 = FUN_0059aed0();
            if (*(float *)(iVar10 + 0x210) == 0.0) {
              fVar16 = (float10)FUN_005ad390();
              *(float *)(iVar10 + 0x210) = (float)fVar16;
            }
            cVar4 = FUN_005980d0();
            if ((cVar4 == '\0') && (cVar4 = FUN_005980d0(), cVar4 == '\0')) {
              FUN_00597fb0();
              FUN_00597fb0();
              cVar4 = FUN_0059ebb0();
              if ((cVar4 == '\0') && (cVar4 = FUN_0059eeb0(), cVar4 == '\0')) {
                FUN_00597fb0();
                FUN_00597fb0();
                FUN_00449760();
                cVar4 = FUN_00594bc0();
                if (cVar4 != '\0') {
                  iVar10 = FUN_00597fb0();
                  iVar7 = FUN_00597fb0();
                  fVar1 = *(float *)(iVar10 + 4);
                  fVar2 = *(float *)(iVar7 + 4);
                  iVar10 = FUN_0059aed0();
                  if (*(float *)(iVar10 + 0x354) == 0.0) {
                    fVar16 = (float10)FUN_005ad390();
                    *(float *)(iVar10 + 0x354) = (float)fVar16;
                  }
                  else {
                    fVar16 = (float10)*(float *)(iVar10 + 0x354);
                  }
                  if ((float10)ABS(fVar1 - fVar2) <= fVar16) {
                    FUN_00597fb0();
                    FUN_00597fb0();
                    FUN_00449760(&param_2);
                    cVar4 = FUN_0059d420();
                    if ((cVar4 == '\0') && (((float)fVar15 < local_34 || (local_34 == -1.0)))) {
                      local_34 = (float)fVar15;
                      local_30 = iVar3;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    (**(code **)(*piStack_3c + 8))();
    cVar4 = (**(code **)(*piStack_3c + 0x18))();
  } while( true );
}

