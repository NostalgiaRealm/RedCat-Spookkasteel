/*
 * FUN_004d14f0 at 004d14f0
 * undefined FUN_004d14f0(void)
 * Address ranges: 004d14f0-004d1726
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_004d14f0(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  float *pfVar8;
  uint3 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  char *pcVar13;
  float unaff_retaddr;
  undefined1 *puVar14;
  int *local_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631400;
  local_c = ExceptionList;
  if (param_2 < 0.0 || (param_2 == 0.0) != 0) {
    return (uint)(ushort)((ushort)(param_2 < 0.0) << 8 | (ushort)NAN(param_2) << 10 |
                         (ushort)(param_2 == 0.0) << 0xe);
  }
  ExceptionList = &local_c;
  local_38 = param_1;
  piVar5 = (int *)FUN_004042e0(&local_3c);
  local_4 = 0;
  if (*piVar5 == 0) {
    local_1c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar4 != '\0');
    uVar10 = ~uVar10 - 1;
    cVar4 = FUN_00401940(uVar10,1);
    if (cVar4 != '\0') {
      puVar12 = (undefined4 *)&DAT_006b3f70;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *local_18 = *puVar12;
        puVar12 = puVar12 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_00404190(uVar10);
      param_1 = local_38;
    }
    local_4._0_1_ = 1;
    pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_4 = 0xffffffff;
  piVar5 = *(int **)(*piVar5 + 0x360);
  piVar7 = local_3c;
  if (local_3c != (int *)0x0) {
    iVar1 = local_3c[5];
    piVar7 = local_3c + 5;
    *piVar7 = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar7 = (int *)FUN_005abfc0(0);
    }
    local_3c = (int *)0x0;
  }
  if (piVar5 == (int *)0x0) {
    ExceptionList = local_c;
    return (uint)piVar7 & 0xffffff00;
  }
  pfVar8 = (float *)(**(code **)(*piVar5 + 0x48))(auStack_28);
  local_38 = *pfVar8;
  puVar14 = auStack_20;
  fStack_34 = pfVar8[1];
  fStack_30 = pfVar8[2];
  FUN_004dc0d0(puVar14);
  pfVar8 = (float *)FUN_00554a50(puVar14);
  fVar2 = pfVar8[1];
  fVar3 = ABS(*(float *)((int)param_1 + 0x14c) - fStack_34);
  if (fVar2 < fVar3 || (fVar2 == fVar3) != 0) {
    ExceptionList = pvStack_10;
    return (uint)(ushort)((ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                         (ushort)(fVar2 == fVar3) << 0xe);
  }
  fVar2 = ABS(*(float *)((int)param_1 + 0x148) - local_38);
  fVar3 = *pfVar8 + unaff_retaddr;
  if (fVar3 < fVar2 || (fVar3 == fVar2) != 0) {
    ExceptionList = pvStack_10;
    return (uint)(ushort)((ushort)(fVar3 < fVar2) << 8 | (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
                         (ushort)(fVar3 == fVar2) << 0xe);
  }
  fVar2 = ABS(*(float *)((int)param_1 + 0x150) - fStack_30);
  fVar3 = pfVar8[2] + unaff_retaddr;
  uVar9 = (uint3)(byte)(fVar3 < fVar2 |
                        (byte)((ushort)((ushort)(NAN(fVar3) || NAN(fVar2)) << 10) >> 8) |
                       (byte)((ushort)((ushort)(fVar3 == fVar2) << 0xe) >> 8));
  if (fVar3 < fVar2 || (fVar3 == fVar2) != 0) {
    ExceptionList = pvStack_10;
    return (uint)uVar9 << 8;
  }
  ExceptionList = pvStack_10;
  return CONCAT31(uVar9,1);
}

