/*
 * FUN_004d1740 at 004d1740
 * undefined FUN_004d1740(void)
 * Address ranges: 004d1740-004d1927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d1740(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 local_70;
  float local_6c;
  undefined1 local_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [4];
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined **local_44;
  undefined4 local_3c;
  double local_34;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00631430;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004cffd0();
  iVar2 = FUN_005b9940();
  if (iVar2 != 0) {
    FUN_005bdde0(param_2,param_3);
    iVar2 = FUN_005bde60();
    while (iVar2 != 0) {
      iVar3 = FUN_00519a70();
      iVar2 = *(int *)(iVar3 + 100);
      if (iVar2 == -0x80000000) {
        iVar2 = FUN_0060af10();
        *(int *)(iVar3 + 100) = iVar2;
      }
      if ((iVar2 != 0) && (*(char *)(param_1 + 0xa9) != '\0')) {
        puVar6 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_1 + 0x70) != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_1 + 0x70);
        }
        puVar4 = *(undefined1 **)(param_1 + 0x60);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        uVar5 = FUN_005ae390(local_54,s_Model__s___s___Event__s_occurs_a_006992ec,puVar4,puVar6,
                             local_70,(double)local_6c);
        local_c = 0;
        FUN_005aff00(uVar5);
        if (local_50 != 0) {
          cVar1 = *(char *)(local_50 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *(char *)(local_50 + -1) = cVar1 + -1;
          }
        }
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
      }
      local_60 = 0;
      local_58 = 0;
      local_c = 1;
      local_5c = 0;
      FUN_005e2da0();
      local_44 = &PTR_FUN_0064f00c;
      local_3c = 1;
      local_34 = (double)local_6c;
      local_c._0_1_ = 3;
      FUN_005e1f20();
      FUN_005e1f20();
      FUN_00504690(&DAT_006b96a0,local_64);
      local_c._0_1_ = 2;
      FUN_005e2f00();
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_005e2f00();
      local_c = 0xffffffff;
      FUN_005e2320();
      iVar2 = FUN_005bde60();
    }
  }
  ExceptionList = local_14;
  return;
}

