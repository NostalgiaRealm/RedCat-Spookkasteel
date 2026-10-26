/*
 * FUN_0044c530 at 0044c530
 * undefined FUN_0044c530(void)
 * Address ranges: 0044c530-0044c754
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0044c530(int *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_EBX;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  int iStack_44;
  uint uStack_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  undefined4 *puStack_1c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00625890;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0044be40();
  (**(code **)(*param_1 + 0x60))(param_1);
  piVar2 = (int *)(**(code **)(*param_1 + 100))();
  if (piVar2 != (int *)0x0) {
    iStack_2c = param_1[0x90];
    iStack_28 = param_1[0x91];
    iStack_38 = param_1[0x8d];
    iStack_24 = param_1[0x92];
    iStack_34 = param_1[0x8e];
    iStack_30 = param_1[0x8f];
    FUN_005b2f20();
    FUN_005b2fa0(0xc0a00000);
    FUN_005b3000(&iStack_2c);
    FUN_00502350(1);
    (**(code **)(*piVar2 + 0x4c))(&iStack_2c);
    piVar2[0x61] = param_1[0x7b];
    piVar2[0x60] = param_1[0x76];
    piStack_3c = (int *)FUN_004042e0(&iStack_44);
    puStack_8 = (undefined1 *)0x0;
    if (*piStack_3c == 0) {
      auStack_20[0] = (undefined1)((uint)unaff_EBX >> 0x18);
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uStack_40 = uVar6;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puStack_1c = *puVar8;
          puVar8 = puVar8 + 1;
          puStack_1c = puStack_1c + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puStack_1c = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puStack_1c = (undefined4 *)((int)puStack_1c + 1);
        }
        FUN_00404190(uVar6);
      }
      puStack_8._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_20);
      (*pcVar3)();
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      FUN_004040a0(1);
    }
    FUN_004f41c0(piVar2);
    puStack_8 = (undefined1 *)0xffffffff;
    if (iStack_44 != 0) {
      iVar9 = *(int *)(iStack_44 + 0x14) + -1;
      *(int *)(iStack_44 + 0x14) = iVar9;
      if (iVar9 == 0) {
        FUN_005abfc0(0);
      }
      iStack_44 = 0;
    }
    iVar9 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar9 = FUN_004bc480();
    }
    if (*(int *)(iVar9 + 0x4e8) == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar9 + 0x49c);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_0060af10(puVar4);
      *(undefined4 *)(iVar9 + 0x4e8) = uVar5;
    }
    FUN_0044c080();
  }
  FUN_00502220();
  FUN_00502350(0);
  ExceptionList = pvStack_10;
  return;
}

