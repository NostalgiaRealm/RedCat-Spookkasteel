/*
 * FUN_0056eef0 at 0056eef0
 * undefined FUN_0056eef0(void)
 * Address ranges: 0056eef0-0056f265
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0056eef0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  int *piVar7;
  undefined4 unaff_EBX;
  char *pcVar8;
  int iVar9;
  int *piStack_130;
  undefined4 **ppuStack_12c;
  int local_110;
  undefined4 *local_10c [3];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int aiStack_f4 [8];
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  int iStack_c8;
  undefined4 uStack_8c;
  undefined1 auStack_70 [24];
  int aiStack_58 [6];
  char cStack_40;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00640eb1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((char)param_1[0x53] != '\0') {
    ppuStack_12c = (undefined4 **)0x56ef20;
    ExceptionList = &pvStack_c;
    FUN_0056eb90();
    *(undefined1 *)(param_1 + 0x53) = 0;
  }
  ppuStack_12c = (undefined4 **)param_3;
  piStack_130 = param_2;
  FUN_004de640();
  ppuStack_12c = (undefined4 **)0x56ef45;
  FUN_0056e970();
  iVar9 = param_1[0x5a];
  bVar2 = true;
  if (iVar9 != -1) {
    iVar1 = param_1[0x5b];
    if (iVar1 == -1) {
      param_1[0x5c] = 0x3f800000;
      param_1[0x5b] = iVar9 + (int)param_2;
    }
    else if (iVar1 < (int)param_2) {
      bVar2 = false;
      param_1[0x5c] = 0;
    }
    else if (iVar9 < 1) {
      param_1[0x5c] = 0;
    }
    else {
      local_110 = iVar1 - (int)param_2;
      param_1[0x5c] = (int)((float)local_110 / (float)iVar9);
    }
  }
  *(bool *)(param_1 + 0x5d) = bVar2;
  if (bVar2) {
    ppuStack_12c = local_10c;
    piStack_130 = (int *)0x56efe5;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x48))();
    uStack_100 = *puVar4;
    uStack_fc = puVar4[1];
    uStack_f8 = puVar4[2];
    if (param_3 == -1) {
      piStack_130 = (int *)0x0;
      local_110 = CONCAT31(local_110._1_3_,(char)((uint)unaff_EBX >> 0x18));
      FUN_004040a0();
      uVar6 = 0xffffffff;
      piStack_130 = (int *)0x1;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      piVar7 = (int *)(~uVar6 - 1);
      cVar3 = FUN_00401940(piVar7);
      if (cVar3 != '\0') {
        puVar4 = (undefined4 *)&DAT_006b3f70;
        for (uVar6 = (uint)piVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *local_10c[0] = *puVar4;
          puVar4 = puVar4 + 1;
          local_10c[0] = local_10c[0] + 1;
        }
        for (uVar6 = (uint)piVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)local_10c[0] = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          local_10c[0] = (undefined4 *)((int)local_10c[0] + 1);
        }
        piStack_130 = piVar7;
        FUN_00404190();
      }
      piStack_130 = &local_110;
      puStack_8 = (undefined1 *)0x0;
      pcVar5 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a);
      (*pcVar5)();
      puStack_8 = (undefined1 *)0xffffffff;
      piStack_130 = (int *)0x1;
      FUN_004040a0();
    }
    piStack_130 = aiStack_f4;
    FUN_005b3020((float)(int)param_2 * 0.001);
    if ((*(char *)((int)param_1 + 0x149) != '\0') ||
       ((*(char *)((int)param_1 + 0x14a) != '\0' && (*(char *)((int)param_1 + 0x14b) == '\0')))) {
      FUN_004042e0(&piStack_130);
      FUN_00565c30();
      puStack_8 = (undefined1 *)0x1;
      uStack_d4 = 0;
      uStack_d1 = 0;
      uStack_cf = 0;
      if ((*(char *)((int)param_1 + 0x14a) == '\0') ||
         (uStack_d3 = 1, *(char *)((int)param_1 + 0x14b) != '\0')) {
        uStack_d3 = 0;
      }
      uStack_ce = *(undefined1 *)((int)param_1 + 0x149);
      uStack_8c = 0x3f23d70a;
      if ((*(char *)((int)param_1 + 0x14a) == '\0') ||
         (uStack_d2 = 1, *(char *)((int)param_1 + 0x14b) != '\0')) {
        uStack_d2 = 0;
      }
      piStack_130 = aiStack_f4;
      uStack_d0 = 0;
      cVar3 = FUN_00565e10(&uStack_100);
      if (cVar3 == '\0') {
        piStack_130 = aiStack_f4;
        (**(code **)(*param_1 + 0x4c))();
      }
      else {
        piStack_130 = aiStack_58;
        (**(code **)(*param_1 + 0x4c))();
        if (cStack_40 == '\0') {
          (**(code **)(*param_1 + 0x5c))(auStack_70);
        }
        else {
          (**(code **)(*param_1 + 0x58))();
        }
      }
      puStack_8 = (undefined1 *)0x2;
      piStack_130 = piStack_1c;
      FUN_005fe5f0();
      piStack_1c = (int *)0x0;
      uStack_18 = 0;
      pvStack_14 = (void *)0x0;
      FUN_005fe5f0(uStack_2c);
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      if (iStack_c8 != 0) {
        iVar9 = *(int *)(iStack_c8 + 0x14) + -1;
        *(int *)(iStack_c8 + 0x14) = iVar9;
        if (iVar9 == 0) {
          piStack_130 = (int *)0x0;
          FUN_005abfc0();
        }
        iStack_c8 = 0;
      }
      puStack_8 = (undefined1 *)0xffffffff;
      piStack_130 = (int *)0x56f23e;
      FUN_005ab4d0();
    }
    piStack_130 = aiStack_f4;
    (**(code **)(*param_1 + 0x4c))();
  }
  else {
    ppuStack_12c = (undefined4 **)(param_1 + 0x54);
    piStack_130 = (int *)0x56efc4;
    (**(code **)(*param_1 + 0x4c))();
    piStack_130 = param_1 + 0x57;
    (**(code **)(*param_1 + 0x5c))();
  }
  ExceptionList = pvStack_14;
  return;
}

