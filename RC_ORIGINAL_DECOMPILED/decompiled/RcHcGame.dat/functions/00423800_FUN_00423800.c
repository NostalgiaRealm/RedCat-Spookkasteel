/*
 * FUN_00423800 at 00423800
 * undefined FUN_00423800(void)
 * Address ranges: 00423800-00423bdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 30 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 30 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00423800(int *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  float10 fVar10;
  char *local_128;
  undefined1 *local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  undefined1 auStack_104 [3];
  undefined1 local_101;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  int iStack_c4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  char *pcStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622631;
  local_c = ExceptionList;
  local_128 = (char *)param_1[0x3e];
  if (local_128 == (char *)0x0) {
    param_1[0x58] = 0;
    *(undefined1 *)(param_1 + 0x59) = 0;
    param_1[0x57] = 0x7f7fffff;
    return;
  }
  local_114 = (undefined1 *)&local_128;
  ExceptionList = &local_c;
  if (local_128 != (char *)0x0) {
    ExceptionList = &local_c;
    *(int *)(local_128 + 0x14) = *(int *)(local_128 + 0x14) + 1;
  }
  puVar2 = (undefined1 *)FUN_004142f0();
  local_114 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    local_128 = (char *)param_1[0x3e];
    local_100 = (double)CONCAT44(local_100._4_4_,&local_128);
    if (local_128 != (char *)0x0) {
      *(int *)(local_128 + 0x14) = *(int *)(local_128 + 0x14) + 1;
    }
    piVar4 = (int *)FUN_0040b060();
    if (piVar4 == (int *)0x0) {
      local_100 = (double)CONCAT71(local_100._1_7_,local_101);
      uVar7 = 0xffffffff;
      local_100 = (double)((ulonglong)local_100 & 0xffffffff);
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      local_128 = (char *)(~uVar7 - 1);
      local_f8 = 0;
      local_f4 = 0;
      FUN_004040f0(&DAT_006b3f70);
      local_128 = (char *)&local_100;
      local_4 = 0;
      pcVar5 = (code *)FUN_005a07f0(s_gameObject____0_0068ec7c,
                                    s_D__Work_RCHorror_RCSource_RCEnem_0068f7f4,0x20a);
      (*pcVar5)();
      local_4 = 0xffffffff;
      puVar2 = local_114;
      if (local_100._4_4_ != 0) {
        local_128 = (char *)(local_100._4_4_ + -1);
        cVar1 = *(char *)(local_100._4_4_ + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
          puVar2 = local_114;
        }
        else {
          *local_128 = cVar1 + -1;
        }
      }
    }
    local_128 = (char *)&local_100;
    puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x48))();
    local_110 = *puVar3;
    local_10c = (float)puVar3[1];
    local_108 = puVar3[2];
  }
  else {
    local_128 = (char *)&local_100;
    puVar3 = (undefined4 *)FUN_0049bc80();
    local_110 = *puVar3;
    local_10c = (float)puVar3[1];
    local_108 = puVar3[2];
  }
  local_128 = (char *)&local_100;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x48))();
  local_f4 = *puVar3;
  uStack_f0 = puVar3[1];
  uStack_ec = puVar3[2];
  fVar10 = (float10)FUN_005b30a0();
  param_1[0x57] = (int)(float)fVar10;
  fVar10 = (float10)FUN_005b1600(&local_f4,&local_114);
  param_1[0x58] = (int)(float)fVar10;
  (**(code **)(*param_1 + 0x9c))();
  puVar3 = (undefined4 *)FUN_004236b0(auStack_104);
  local_f4 = *puVar3;
  uStack_f0 = puVar3[1];
  uStack_ec = puVar3[2];
  fVar10 = (float10)(**(code **)(*param_1 + 0x68))();
  if (fVar10 < (float10)(float)param_1[0x57]) {
    local_128 = (char *)0x423a03;
    fVar10 = (float10)(**(code **)(*param_1 + 0x6c))();
    if (fVar10 < (float10)(float)param_1[0x57]) {
LAB_00423a44:
      *(undefined1 *)(param_1 + 0x59) = 0;
      ExceptionList = local_c;
      return;
    }
    local_128 = (char *)((float)param_1[0x58] - (float)local_114);
    fVar10 = (float10)FUN_005b1630();
    local_100 = (double)ABS(fVar10);
    local_128 = (char *)0x423a33;
    fVar10 = (float10)(**(code **)(*param_1 + 100))();
    if (fVar10 * (float10)0.5 <= (float10)local_100) goto LAB_00423a44;
  }
  local_100 = (double)CONCAT44(local_100._4_4_,&local_128);
  FUN_004042e0(&local_128);
  FUN_00565c30();
  local_4 = 1;
  uStack_d0 = 1;
  uStack_cf = 1;
  uStack_ce = 1;
  uStack_cd = 1;
  uStack_cc = 1;
  uStack_cb = 1;
  uStack_ca = 0;
  local_128 = (char *)0x423a9e;
  local_128 = (char *)(**(code **)(*param_1 + 0x9c))();
  FUN_005663d0();
  local_128 = (char *)&local_110;
  cVar1 = FUN_00565e10(&uStack_f0);
  if (cVar1 != '\0') {
    if (puVar2 == (undefined1 *)0x0) {
LAB_00423b08:
      *(undefined1 *)(param_1 + 0x59) = 0;
      goto LAB_00423b3a;
    }
    local_128 = (char *)0x423acc;
    puVar6 = (undefined1 *)FUN_00566370();
    if (puVar6 != puVar2) {
      local_128 = (char *)&local_110;
      local_10c = (*(float *)(puVar2 + 300) - *(float *)(puVar2 + 0x120)) + local_10c;
      cVar1 = FUN_00565e10(&uStack_f0);
      if (cVar1 != '\0') {
        local_128 = (char *)0x423b04;
        puVar6 = (undefined1 *)FUN_00566370();
        if (puVar6 != puVar2) goto LAB_00423b08;
      }
      *(undefined1 *)(param_1 + 0x59) = 1;
      param_1[0x5a] = param_2;
      goto LAB_00423b3a;
    }
  }
  *(undefined1 *)(param_1 + 0x59) = 1;
  param_1[0x5a] = param_2;
LAB_00423b3a:
  local_4 = 2;
  local_128 = pcStack_18;
  FUN_005fe5f0();
  pcStack_18 = (char *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_005fe5f0(uStack_28);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  if (iStack_c4 != 0) {
    iVar8 = *(int *)(iStack_c4 + 0x14) + -1;
    *(int *)(iStack_c4 + 0x14) = iVar8;
    if (iVar8 == 0) {
      local_128 = (char *)0x0;
      FUN_005abfc0();
    }
    iStack_c4 = 0;
  }
  local_4 = 0xffffffff;
  local_128 = (char *)0x423bc3;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

