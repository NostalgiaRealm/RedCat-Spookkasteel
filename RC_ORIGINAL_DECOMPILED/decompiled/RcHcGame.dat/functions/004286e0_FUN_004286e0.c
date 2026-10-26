/*
 * FUN_004286e0 at 004286e0
 * undefined FUN_004286e0(void)
 * Address ranges: 004286e0-00428881
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64abc0 slot 35 for .?AVCRcGuardian@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64abc0 slot 35 for
   .?AVCRcGuardian@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004286e0(int *param_1,int param_2,undefined4 param_3,float param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00622d80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 < 7) {
    ExceptionList = &pvStack_c;
    cVar1 = (**(code **)(*param_1 + 0x88))(param_2);
    if (cVar1 != '\0') goto LAB_0042879b;
  }
  local_2c[0] = param_4._0_1_;
  uVar4 = 0xffffffff;
  local_28 = 0;
  pcVar5 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_24 = 0;
  local_20 = 0;
  FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
  uStack_4 = 0;
  pcVar2 = (code *)FUN_005a07f0(s_a_Type_<_NR_MOTION_&&_HasMotion(_0068f8c4,
                                s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,0x124,local_2c);
  (*pcVar2)();
  uStack_4 = 0xffffffff;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
LAB_0042879b:
  if ((param_2 < 2) || (3 < param_2)) {
    FUN_004233e0(param_2,param_3,param_4);
  }
  else {
    if (3.4028235e+38 <= param_4) {
      fVar6 = (float10)FUN_00424950();
      param_4 = (float)fVar6;
    }
    auStack_1c[0] = param_4._0_1_;
    uVar4 = 0xffffffff;
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    pcVar5 = (&PTR_s_start_0064bca4)[param_2];
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0((&PTR_s_start_0064bca4)[param_2],~uVar4 - 1);
    uStack_4 = 1;
    (**(code **)(*param_1 + 0x9c))();
    iVar3 = FUN_004286d0();
    FUN_004a0660(auStack_1c,param_3,param_4 * *(float *)(iVar3 + 0x28));
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

