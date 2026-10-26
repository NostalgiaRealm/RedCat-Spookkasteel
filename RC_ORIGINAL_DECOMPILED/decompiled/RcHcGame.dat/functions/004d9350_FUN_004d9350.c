/*
 * FUN_004d9350 at 004d9350
 * undefined FUN_004d9350(void)
 * Address ranges: 004d9350-004d94b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 4 for .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 4 for
   .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred. */

void FUN_004d9350(int param_1)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  int local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631ca0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_006b93c4 == -0x80000000) {
    puVar3 = DAT_006b9378;
    if (DAT_006b9378 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    ExceptionList = &local_c;
    DAT_006b93c4 = FUN_0060af10(puVar3);
  }
  if (DAT_006b93c4 != 0) {
    piVar4 = (int *)FUN_004042e0(&local_20);
    local_4 = 0;
    if (*piVar4 == 0) {
      local_1c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar2 = FUN_00401940(uVar6,1);
      if (cVar2 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_18 = *puVar8;
          puVar8 = puVar8 + 1;
          local_18 = local_18 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)local_18 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          local_18 = (undefined4 *)((int)local_18 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4._0_1_ = 1;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    iVar1 = *(int *)(*piVar4 + 0x360);
    if (local_20 != 0) {
      iVar9 = *(int *)(local_20 + 0x14) + -1;
      *(int *)(local_20 + 0x14) = iVar9;
      if (iVar9 == 0) {
        FUN_005abfc0(0);
      }
      local_20 = 0;
    }
    if (param_1 == iVar1) {
      pcVar10 = s_Player_collision_with_self_00699ca8;
    }
    else {
      pcVar10 = s_Unknown_moving_object_collided_w_00699c7c;
    }
    FUN_005afe30(pcVar10);
  }
  ExceptionList = local_c;
  return;
}

