/*
 * FUN_005b1bd0 at 005b1bd0
 * undefined FUN_005b1bd0(void)
 * Address ranges: 005b1bd0-005b1e14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_005b1bd0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646210;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    ExceptionList = &local_c;
    FUN_00515db0();
    iVar2 = FUN_004337e0();
    if (iVar2 != 0) {
      puVar6 = &DAT_0064a3b4;
      if (*(undefined1 **)(param_1 + 0x24) != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(param_1 + 0x24);
      }
      iVar2 = FUN_005b18a0(local_1c,param_3);
      local_4 = 0;
      puVar9 = &DAT_0064a3b4;
      if (*(undefined1 **)(iVar2 + 4) != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)(iVar2 + 4);
      }
      puVar8 = *(undefined1 **)(param_5 + 4);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      puVar3 = *(undefined1 **)(param_4 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      uVar4 = FUN_005ae390(local_2c,s_Script_call__s___s___s___FAILS_o_006a9204,puVar3,puVar8,puVar9
                           ,puVar6);
      local_4._0_1_ = 1;
      FUN_005aff00(uVar4);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
  }
  else {
    ExceptionList = &local_c;
    iVar5 = FUN_00515db0();
    iVar7 = *(int *)(iVar5 + 100);
    if (iVar7 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar7 = FUN_0060af10(puVar6);
      *(int *)(iVar5 + 100) = iVar7;
    }
    if (iVar7 != 0) {
      puVar6 = &DAT_0064a3b4;
      if (*(undefined1 **)(iVar2 + 0x70) != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(iVar2 + 0x70);
      }
      iVar7 = FUN_005b18a0(local_3c,param_3);
      local_4 = 2;
      puVar9 = &DAT_0064a3b4;
      if (*(undefined1 **)(iVar7 + 4) != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)(iVar7 + 4);
      }
      puVar8 = *(undefined1 **)(param_5 + 4);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      puVar3 = *(undefined1 **)(param_4 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      FUN_0060a613(iVar2);
      uVar4 = FUN_0060b060();
      uVar4 = FUN_005ae390(local_4c,s_Script_call__s___s___s___on_sing_006a91cc,puVar3,puVar8,puVar9
                           ,puVar6,uVar4);
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_005aff00(uVar4);
      if (local_48 != 0) {
        cVar1 = *(char *)(local_48 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_48 + -1));
        }
        else {
          *(char *)(local_48 + -1) = cVar1 + -1;
        }
      }
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_4 = 0xffffffff;
      if (local_38 != 0) {
        cVar1 = *(char *)(local_38 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_38 + -1));
        }
        else {
          *(char *)(local_38 + -1) = cVar1 + -1;
        }
      }
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
    }
    FUN_00503c30(param_5,0,param_3);
  }
  *param_2 = &PTR_FUN_0064f00c;
  param_2[2] = 0;
  ExceptionList = local_c;
  return;
}

