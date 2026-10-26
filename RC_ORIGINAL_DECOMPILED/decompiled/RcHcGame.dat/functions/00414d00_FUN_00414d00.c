/*
 * FUN_00414d00 at 00414d00
 * undefined FUN_00414d00(void)
 * Address ranges: 00414d00-00414e42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b1f0 slot 4 for .?AVCRcSkeleton@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b1f0 slot 4 for
   .?AVCRcSkeleton@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00414d00(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int *piStack_34;
  int local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621180;
  local_c = ExceptionList;
  if ((param_2 != 0) && (0 < param_1[0x5e])) {
    if ((char)param_1[0x5c] == '\0') {
      ExceptionList = &local_c;
      piStack_34 = param_1;
      FUN_004237d0(&piStack_34);
      FUN_0040b060();
    }
    else {
      piStack_34 = &local_20;
      ExceptionList = &local_c;
      piVar2 = (int *)FUN_004042e0();
      local_4 = 0;
      if (*piVar2 == 0) {
        piStack_34 = (int *)0x0;
        local_1c[0] = (undefined1)param_2;
        FUN_004040a0();
        uVar4 = 0xffffffff;
        piStack_34 = (int *)0x1;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        piVar2 = (int *)(~uVar4 - 1);
        cVar1 = FUN_00401940(piVar2);
        if (cVar1 != '\0') {
          puVar5 = (undefined4 *)&DAT_006b3f70;
          for (uVar4 = (uint)piVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *local_18 = *puVar5;
            puVar5 = puVar5 + 1;
            local_18 = local_18 + 1;
          }
          for (uVar4 = (uint)piVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)local_18 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            local_18 = (undefined4 *)((int)local_18 + 1);
          }
          piStack_34 = piVar2;
          FUN_00404190();
        }
        piStack_34 = (int *)local_1c;
        local_4._0_1_ = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        piStack_34 = (int *)0x1;
        FUN_004040a0();
      }
      local_4 = 0xffffffff;
      if ((local_20 != 0) &&
         (iVar6 = *(int *)(local_20 + 0x14) + -1, *(int *)(local_20 + 0x14) = iVar6, iVar6 == 0)) {
        piStack_34 = (int *)0x0;
        FUN_005abfc0();
      }
    }
  }
  ExceptionList = local_c;
  return;
}

