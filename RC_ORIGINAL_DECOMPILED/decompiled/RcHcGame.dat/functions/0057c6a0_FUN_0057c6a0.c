/*
 * FUN_0057c6a0 at 0057c6a0
 * undefined FUN_0057c6a0(void)
 * Address ranges: 0057c6a0-0057c840
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_0057c6a0(int param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar9;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined2 extraout_var;
  uint3 uVar8;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  float10 fVar13;
  float local_34;
  int *local_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641f90;
  local_c = ExceptionList;
  local_34 = 0.0;
  uVar9 = 0;
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (uVar9 = (undefined2)((uint)*(int *)(param_1 + 0x18) >> 0x10),
     *(char *)(param_1 + 0x124) != '\0')) {
    ExceptionList = &local_c;
    local_2c = param_1;
    piVar4 = (int *)FUN_004042e0(&local_30);
    local_4 = 0;
    if (*piVar4 == 0) {
      FUN_004040a0(0);
      uVar10 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      uVar10 = ~uVar10 - 1;
      cVar3 = FUN_00401940(uVar10,1);
      if (cVar3 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *local_18 = *puVar7;
          puVar7 = puVar7 + 1;
          local_18 = local_18 + 1;
        }
        for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)local_18 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          local_18 = (undefined4 *)((int)local_18 + 1);
        }
        FUN_00404190(uVar10);
        param_1 = local_2c;
      }
      local_4._0_1_ = 1;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    piVar4 = *(int **)(*piVar4 + 0x360);
    piVar6 = local_30;
    if (local_30 != (int *)0x0) {
      iVar2 = local_30[5];
      piVar6 = local_30 + 5;
      *piVar6 = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        piVar6 = (int *)FUN_005abfc0(0);
      }
      local_30 = (int *)0x0;
    }
    uVar9 = (undefined2)((uint)piVar6 >> 0x10);
    if (piVar4 != (int *)0x0) {
      puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0x48))(local_1c);
      uStack_28 = *puVar7;
      uStack_24 = puVar7[1];
      uStack_20 = puVar7[2];
      fVar13 = (float10)FUN_005b30a0();
      local_34 = (float)fVar13;
      uVar9 = extraout_var;
    }
  }
  fVar1 = *(float *)(param_1 + 0x120);
  uVar8 = (uint3)(CONCAT22(uVar9,(ushort)(local_34 < fVar1) << 8 |
                                 (ushort)(NAN(local_34) || NAN(fVar1)) << 10 |
                                 (ushort)(local_34 == fVar1) << 0xe) >> 8);
  if ((local_34 == fVar1) == 0) {
    *(float *)(param_1 + 0x120) = local_34;
    ExceptionList = local_c;
    return CONCAT31(uVar8,1);
  }
  ExceptionList = local_c;
  return (uint)uVar8 << 8;
}

