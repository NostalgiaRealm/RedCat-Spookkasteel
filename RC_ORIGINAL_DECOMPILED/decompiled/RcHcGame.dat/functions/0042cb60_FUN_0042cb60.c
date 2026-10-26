/*
 * FUN_0042cb60 at 0042cb60
 * undefined FUN_0042cb60(void)
 * Address ranges: 0042cb60-0042cf38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_0042cb60(int param_1,undefined4 param_2,float param_3,float param_4,float param_5,int *param_6)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 *puVar13;
  float10 fVar14;
  char local_85;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 auStack_74 [4];
  float fStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44 [12];
  char local_38 [4];
  undefined4 *puStack_34;
  uint uStack_30;
  undefined1 auStack_28 [12];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006233f0;
  pvStack_c = ExceptionList;
  local_78 = param_5 * param_5;
  local_7c = ABS(param_4);
  ExceptionList = &pvStack_c;
  *param_6 = 0;
  puVar3 = (undefined4 *)FUN_0042c620(local_44,param_2);
  local_5c = *puVar3;
  local_58 = puVar3[1];
  local_54 = puVar3[2];
  FUN_0042dbe0(&local_80,**(undefined4 **)(param_1 + 0x3c),*(undefined4 **)(param_1 + 0x3c));
  piVar10 = (int *)**(int **)(param_1 + 0x24);
  if (piVar10 != *(int **)(param_1 + 0x24)) {
    do {
      if (piVar10[2] == 0) {
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
        local_4 = 0;
        pcVar4 = (code *)FUN_005a07f0(s__i____0_0069002c,s_D__Work_RCHorror_RCSource_RCTarg_00690034
                                      ,0x103,local_1c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      piVar8 = (int *)piVar10[2];
      if ((char)piVar8[0x1f] != '\0') {
        puVar3 = (undefined4 *)(**(code **)(*piVar8 + 0x48))(local_38);
        uStack_50 = *puVar3;
        uStack_4c = puVar3[1];
        uStack_48 = puVar3[2];
        FUN_005b2fe0(local_44);
        fVar14 = (float10)FUN_005b15f0(local_44);
        fVar14 = (float10)FUN_005b1630((float)((float10)param_3 - fVar14));
        if (ABS(fVar14) <= (float10)local_7c * (float10)0.5) {
          fVar14 = (float10)FUN_005b2fc0();
          local_80 = (float)fVar14;
          if (fVar14 < (float10)local_78) {
            bVar1 = false;
            piVar11 = (int *)**(int **)(param_1 + 0x3c);
            fStack_70 = local_80;
            piStack_6c = piVar8;
            if (piVar11 != *(int **)(param_1 + 0x3c)) {
              do {
                if (bVar1) goto LAB_0042cda2;
                if (local_80 < (float)piVar11[2]) {
                  piVar8 = (int *)piVar11[1];
                  piVar5 = operator_new(0x10);
                  piVar7 = piVar11;
                  if (piVar11 == (int *)0x0) {
                    piVar7 = piVar5;
                  }
                  *piVar5 = (int)piVar7;
                  if (piVar8 == (int *)0x0) {
                    piVar8 = piVar5;
                  }
                  piVar5[1] = (int)piVar8;
                  piVar11[1] = (int)piVar5;
                  *(int **)piVar5[1] = piVar5;
                  FUN_0042dc30(piVar5 + 2,&fStack_70);
                  bVar1 = true;
                  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
                }
                piVar11 = (int *)*piVar11;
              } while (piVar11 != (int *)*(int *)(param_1 + 0x3c));
              if (bVar1) goto LAB_0042cda2;
            }
            FUN_0042db80(auStack_74,*(undefined4 *)(param_1 + 0x3c),&fStack_70);
          }
        }
      }
LAB_0042cda2:
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)*(int *)(param_1 + 0x24));
  }
  local_85 = '\0';
  piVar10 = (int *)**(int **)(param_1 + 0x3c);
  if (piVar10 != *(int **)(param_1 + 0x3c)) {
    do {
      if (local_85 != '\0') break;
      if (piVar10[3] == 0) {
        local_38[0] = local_85;
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6 - 1;
        cVar2 = FUN_00401940(uVar6,1);
        if (cVar2 != '\0') {
          puVar3 = (undefined4 *)&DAT_006b3f70;
          puVar13 = puStack_34;
          for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar13 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar9 = uVar6 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          *(undefined1 *)((int)puStack_34 + uVar6) = 0;
          uStack_30 = uVar6;
        }
        local_4 = 1;
        pcVar4 = (code *)FUN_005a07f0(s_di_>m_Actor____0_00690090,
                                      s_D__Work_RCHorror_RCSource_RCTarg_00690034,0x13e,local_38);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      piVar8 = (int *)piVar10[3];
      puVar3 = (undefined4 *)(**(code **)(*piVar8 + 0x48))(auStack_28);
      uStack_68 = *puVar3;
      uStack_60 = puVar3[2];
      fStack_64 = (float)puVar3[1] + (float)piVar8[0x48];
      cVar2 = FUN_0042c680(param_2,piVar8,&uStack_68);
      if (cVar2 == '\0') {
        fStack_64 = ((float)piVar8[0x4b] - (float)piVar8[0x48]) + fStack_64;
        cVar2 = FUN_0042c680(param_2,piVar8,&uStack_68);
        if (cVar2 != '\0') {
          *param_6 = (int)piVar8;
          goto LAB_0042cefc;
        }
      }
      else {
        *param_6 = (int)piVar8;
LAB_0042cefc:
        local_85 = '\x01';
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)*(int *)(param_1 + 0x3c));
  }
  ExceptionList = pvStack_c;
  return *param_6 != 0;
}

