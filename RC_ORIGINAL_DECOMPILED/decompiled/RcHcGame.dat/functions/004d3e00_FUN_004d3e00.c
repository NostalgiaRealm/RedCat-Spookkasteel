/*
 * FUN_004d3e00 at 004d3e00
 * undefined FUN_004d3e00(void)
 * Address ranges: 004d3e00-004d3fbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f078 slot 26 for .?AVCAdamTriggerModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f078 slot 26 for
   .?AVCAdamTriggerModel@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004d3e00(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  int local_30;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631768;
  local_c = ExceptionList;
  if (0.0 < *(float *)(*(int *)(param_1 + 0x168) + 0x48)) {
    ExceptionList = &local_c;
    if (param_2 == -1) {
      local_1c[0] = (undefined1)param_2;
      ExceptionList = &local_c;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_1c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar3 = (int *)FUN_004042e0(&local_30);
    local_4 = 1;
    if (*piVar3 == 0) {
      auStack_2c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puStack_28 = *puVar6;
          puVar6 = puVar6 + 1;
          puStack_28 = puStack_28 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puStack_28 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puStack_28 = (undefined4 *)((int)puStack_28 + 1);
        }
        FUN_00404190(uVar4);
      }
      local_4._0_1_ = 2;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_2c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    FUN_00503fc0((float)param_2 * *(float *)(*(int *)(param_1 + 0x168) + 0x48) * 0.001,param_1,0);
    local_4 = 0xffffffff;
    if ((local_30 != 0) &&
       (iVar7 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar7, iVar7 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = local_c;
  return;
}

