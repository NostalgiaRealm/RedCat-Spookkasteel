/*
 * FUN_005600c0 at 005600c0
 * undefined FUN_005600c0(void)
 * Address ranges: 005600c0-005603c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_005600c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iStack_58;
  char acStack_4c [4];
  undefined4 *puStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  char local_3c;
  undefined4 *puStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  char local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f9c0;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x40);
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1 + 0x125) == '\0') {
    local_2c[0] = param_5;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x4f3,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((*(char *)(param_1 + 0x104) != '\0') || (param_5 != '\0')) {
    local_3c = param_5;
    FUN_004040a0(0);
    local_4 = 1;
    acStack_4c[0] = param_5;
    FUN_004040a0(0);
    iStack_58 = param_3;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_0040cc00(param_4,0,0xffffffff);
    do {
      param_5 = 10;
      uVar5 = FUN_00548ba0(&param_5,0,1);
      if (uVar5 == 0xffffffff) {
        FUN_0040cc00(acStack_4c,0,0xffffffff);
      }
      else {
        uVar6 = uStack_44;
        if (uVar5 < uStack_44) {
          uVar6 = uVar5;
        }
        if ((uVar6 == 0) || (uVar6 != uStack_44)) {
LAB_00560266:
          cVar2 = FUN_00401940(uVar6,1);
          if (cVar2 != '\0') {
            puVar8 = puStack_48;
            if (puStack_48 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)&DAT_0064a3b4;
            }
            puVar10 = puStack_38;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            *(undefined1 *)((int)puStack_38 + uVar6) = 0;
            uStack_34 = uVar6;
          }
        }
        else {
          puVar8 = puStack_48;
          if (puStack_48 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)&DAT_0064a3b4;
          }
          if (0xfd < *(byte *)((int)puVar8 + -1)) goto LAB_00560266;
          FUN_004040a0(1);
          puStack_38 = puStack_48;
          if (puStack_48 == (undefined4 *)0x0) {
            puStack_38 = (undefined4 *)&DAT_0064a3b4;
          }
          uStack_34 = uStack_44;
          uStack_30 = uStack_40;
          *(char *)((int)puStack_38 + -1) = *(char *)((int)puStack_38 + -1) + '\x01';
        }
        if (uVar5 < uStack_44 - 1) {
          uVar6 = uVar5 + 1;
          uVar7 = (uStack_44 - uVar5) - 1;
          if (uStack_44 < uVar6) {
            FUN_005fe747();
          }
          uVar4 = uStack_44 - uVar6;
          if (uVar7 < uStack_44 - uVar6) {
            uVar4 = uVar7;
          }
          FUN_0040c9b0(uVar4 + uVar6,0xffffffff);
          FUN_0040c9b0(0,uVar6);
        }
        else {
          uVar5 = 0xffffffff;
        }
      }
      puVar8 = puStack_38;
      if (puStack_38 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0064a3b4;
      }
      if (*(int *)(param_1 + 0x100) == 0) {
        FUN_00409810(&DAT_006b3f70,&param_3);
        local_4._0_1_ = 3;
        pcVar3 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad
                                      ,auStack_1c);
        (*pcVar3)();
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_004040a0(1);
      }
      FUN_005bcfb0(*(undefined4 *)(param_1 + 0x100),param_2,iStack_58,&DAT_006a35ec,
                   (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3,puVar8);
      iStack_58 = iStack_58 + *(int *)(param_1 + 0x108);
    } while (uVar5 != 0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  ExceptionList = pvStack_c;
  return;
}

