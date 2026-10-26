/*
 * FUN_0042dd80 at 0042dd80
 * undefined FUN_0042dd80(void)
 * Address ranges: 0042dd80-0042df44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64abc0 slot 4 for .?AVCRcGuardian@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64abc0 slot 4 for
   .?AVCRcGuardian@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0042dd80(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int *piStack_3c;
  int local_24;
  int local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623570;
  local_c = ExceptionList;
  piStack_3c = param_2;
  ExceptionList = &local_c;
  FUN_00427d30();
  piStack_3c = (int *)0x42ddaf;
  cVar1 = FUN_00424420();
  if ((cVar1 == '\0') && (param_2 != (int *)0x0)) {
    piStack_3c = &local_20;
    piVar2 = (int *)FUN_004237d0();
    iVar8 = *piVar2;
    if ((local_20 != 0) &&
       (iVar6 = *(int *)(local_20 + 0x14) + -1, *(int *)(local_20 + 0x14) = iVar6, iVar6 == 0)) {
      piStack_3c = (int *)0x0;
      FUN_005abfc0();
    }
    if (iVar8 != 0) {
      if (*(char *)(param_1 + 0x170) == '\0') {
        FUN_004237d0(&piStack_3c);
        piVar2 = (int *)FUN_0040b060();
        iVar8 = local_24;
      }
      else {
        piStack_3c = &local_24;
        piVar2 = (int *)FUN_004042e0();
        local_4 = 0;
        if (*piVar2 == 0) {
          piStack_3c = (int *)0x0;
          local_1c[0] = param_2._0_1_;
          FUN_004040a0();
          uVar5 = 0xffffffff;
          pcVar7 = &DAT_006b3f70;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          piStack_3c = (int *)(~uVar5 - 1);
          FUN_004040f0(&DAT_006b3f70);
          piStack_3c = (int *)local_1c;
          local_4._0_1_ = 1;
          pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
          (*pcVar3)();
          local_4 = (uint)local_4._1_3_ << 8;
          piStack_3c = (int *)0x1;
          FUN_004040a0();
        }
        local_4 = 0xffffffff;
        piVar2 = *(int **)(*piVar2 + 0x360);
        iVar8 = 0;
        if (local_24 != 0) {
          iVar8 = *(int *)(local_24 + 0x14) + -1;
          *(int *)(local_24 + 0x14) = iVar8;
          if (iVar8 == 0) {
            piStack_3c = (int *)0x0;
            FUN_005abfc0();
          }
          local_24 = 0;
          iVar8 = local_24;
        }
      }
      local_24 = iVar8;
      if (param_2 == piVar2) {
        piStack_3c = (int *)0x42defc;
        iVar8 = FUN_00565870();
        if ((*(int *)(param_1 + 0x1a8) == -1) || (999 < iVar8 - *(int *)(param_1 + 0x1a8))) {
          piStack_3c = (int *)0x0;
          iVar6 = param_1;
          iVar4 = FUN_0044c1e0(param_1);
          FUN_00503fc0(*(undefined4 *)(iVar4 + 0x24),iVar6);
          *(int *)(param_1 + 0x1a8) = iVar8;
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

