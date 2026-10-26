/*
 * FUN_0056c610 at 0056c610
 * undefined FUN_0056c610(void)
 * Address ranges: 0056c610-0056c856
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056c610(undefined4 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 local_4c [4];
  undefined4 *local_48;
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640a78;
  pvStack_c = ExceptionList;
  iVar8 = *(int *)(param_2 + 4);
  if (iVar8 != 0) {
    if ((((*(int *)(param_2 + 8) - iVar8) / 0x18 == 2) && (*(int *)(iVar8 + 8) == 3)) &&
       (ExceptionList = &pvStack_c, *(int *)(iVar8 + 0x20) == 2)) goto LAB_0056c6f9;
  }
  local_4c[0] = (undefined1)param_2;
  ExceptionList = &pvStack_c;
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
    puVar9 = (undefined4 *)&DAT_006b3f70;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_48 = *puVar9;
      puVar9 = puVar9 + 1;
      local_48 = local_48 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)local_48 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      local_48 = (undefined4 *)((int)local_48 + 1);
    }
    FUN_00404190(uVar6);
  }
  local_4 = 0;
  pcVar3 = (code *)FUN_005a07f0(s__args_size______2______args_0__I_006a42d4,
                                s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x1de,local_4c);
  (*pcVar3)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_0056c6f9:
  iVar8 = 1;
LAB_0056c6fe:
  do {
    iVar1 = *(int *)(param_2 + 4);
    if (*(int *)(iVar1 + 0x20) != 2) {
      local_4c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 1;
      pcVar3 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                    0x42,local_4c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(iVar1 + 0x28) < iVar8) {
      *param_1 = &PTR_FUN_0064f00c;
      param_1[2] = 0;
      ExceptionList = pvStack_c;
      return;
    }
    uVar4 = FUN_0045da10(auStack_3c);
    local_4 = 2;
    uVar4 = FUN_0056c860(auStack_1c,uVar4,iVar8);
    local_4._0_1_ = 3;
    uVar5 = FUN_0045da10(auStack_2c);
    local_4._0_1_ = 4;
    FUN_00514140(uVar5,uVar4);
    FUN_00512a60(uVar5,uVar4);
    local_4._0_1_ = 3;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    if (iStack_38 != 0) {
      cVar2 = *(char *)(iStack_38 + -1);
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        iVar8 = iVar8 + 1;
        *(char *)(iStack_38 + -1) = cVar2 + -1;
        iStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        goto LAB_0056c6fe;
      }
      FUN_005fe5f0((char *)(iStack_38 + -1));
    }
    iStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    iVar8 = iVar8 + 1;
  } while( true );
}

