/*
 * FUN_0049da40 at 0049da40
 * undefined FUN_0049da40(void)
 * Address ranges: 0049da40-0049dd55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0049da40(int param_1,float param_2,int param_3)

{
  char cVar1;
  float fVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 local_34 [16];
  undefined1 local_24 [4];
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0062cac8;
  local_14 = ExceptionList;
  if ((*(char *)(param_1 + 0x200) == '\0') ||
     (*(float *)(param_1 + 0x1f8) < *(float *)(param_1 + 0x1fc))) {
    ExceptionList = &local_14;
    iVar6 = FUN_005171f0();
    iVar3 = *(int *)(iVar6 + 100);
    if (iVar3 == -0x80000000) {
      puVar9 = *(undefined1 **)(iVar6 + 0x18);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar9);
      *(int *)(iVar6 + 100) = iVar3;
    }
    if (iVar3 != 0) {
      if (param_3 == 0) {
        puVar9 = &DAT_006920fc;
        puVar8 = &DAT_006920fc;
      }
      else {
        puVar9 = *(undefined1 **)(param_3 + 0x70);
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &DAT_0064a3b4;
        }
        puVar8 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)(param_3 + 0x60);
        }
      }
      puVar7 = *(undefined1 **)(param_1 + 0x70);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      puVar4 = *(undefined1 **)(param_1 + 0x60);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_24,s_Actor__s___s___DamageMax__f__Dam_00694d98,puVar4,puVar7,
                           (double)*(float *)(param_1 + 0x1f8),(double)*(float *)(param_1 + 0x1fc),
                           (double)param_2,puVar8,puVar9);
      local_c = 2;
      FUN_005aff00(uVar5);
      if (local_20 != 0) {
        cVar1 = *(char *)(local_20 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)(local_20 + -1) = cVar1 + -1;
          ExceptionList = local_14;
          return;
        }
        FUN_005fe5f0((char *)(local_20 + -1));
      }
    }
  }
  else {
    fVar2 = param_2 + *(float *)(param_1 + 0x1fc);
    ExceptionList = &local_14;
    *(float *)(param_1 + 0x1fc) = fVar2;
    if (*(float *)(param_1 + 0x1f8) < fVar2) {
      FUN_005171f0();
      iVar3 = FUN_004337e0();
      if (iVar3 != 0) {
        if (param_3 == 0) {
          puVar9 = &DAT_006920fc;
          puVar8 = &DAT_006920fc;
        }
        else {
          puVar9 = *(undefined1 **)(param_3 + 0x70);
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &DAT_0064a3b4;
          }
          puVar8 = &DAT_0064a3b4;
          if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
            puVar8 = *(undefined1 **)(param_3 + 0x60);
          }
        }
        puVar7 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_1 + 0x70) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(param_1 + 0x70);
        }
        puVar4 = *(undefined1 **)(param_1 + 0x60);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        uVar5 = FUN_005ae390(local_34,s_Actor__s___s___DamageMax__f__Dam_00694e38,puVar4,puVar7,
                             (double)*(float *)(param_1 + 0x1f8),(double)*(float *)(param_1 + 0x1fc)
                             ,(double)param_2,puVar8,puVar9);
        local_c = 0;
        FUN_005aff00(uVar5);
        local_c = 0xffffffff;
        FUN_004040a0(1);
      }
      FUN_0049d9d0();
      ExceptionList = local_14;
      return;
    }
    FUN_005171f0();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      if (param_3 == 0) {
        puVar9 = &DAT_006920fc;
        puVar8 = &DAT_006920fc;
      }
      else {
        puVar9 = *(undefined1 **)(param_3 + 0x70);
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &DAT_0064a3b4;
        }
        puVar8 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)(param_3 + 0x60);
        }
      }
      puVar7 = &DAT_0064a3b4;
      if (*(undefined1 **)(param_1 + 0x70) != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(param_1 + 0x70);
      }
      puVar4 = *(undefined1 **)(param_1 + 0x60);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_34,s_Actor__s___s___DamageMax__f__Dam_00694de8,puVar4,puVar7,
                           (double)*(float *)(param_1 + 0x1f8),(double)*(float *)(param_1 + 0x1fc),
                           (double)param_2,puVar8,puVar9);
      local_c = 1;
      FUN_005aff00(uVar5);
      local_c = 0xffffffff;
      FUN_004040a0(1);
      ExceptionList = local_14;
      return;
    }
  }
  ExceptionList = local_14;
  return;
}

