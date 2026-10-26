/*
 * FUN_00564a90 at 00564a90
 * undefined FUN_00564a90(void)
 * Address ranges: 00564a90-00564d46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00564a90(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ff38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005644d0(param_1);
  iVar3 = FUN_004337e0();
  if (iVar3 == 0) {
    FUN_00517430();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      puVar4 = *(undefined1 **)(iVar2 + 0x20);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_2c,s_CAdamEngine__CheckDriverSafety___006a3b54,param_1,puVar4);
      local_4 = 0;
      FUN_005aff00(uVar5);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (param_2 != '\0') {
      iVar3 = FUN_004337e0();
      if (iVar3 == 0) {
        iVar6 = FUN_00517430();
        iVar3 = *(int *)(iVar6 + 100);
        if (iVar3 == -0x80000000) {
          puVar4 = *(undefined1 **)(iVar6 + 0x18);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0064a3b4;
          }
          iVar3 = FUN_0060af10(puVar4);
          *(int *)(iVar6 + 100) = iVar3;
        }
        if (iVar3 != 0) {
          puVar4 = *(undefined1 **)(iVar2 + 0x20);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0064a3b4;
          }
          uVar5 = FUN_005ae390(local_2c,s_CAdamEngine__CheckDriverSafety___006a3aac,param_1,puVar4);
          local_4 = 2;
          FUN_005aff00(uVar5);
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        FUN_005c9530(param_1,0);
        ExceptionList = local_c;
        return 0;
      }
      FUN_00517430();
      iVar3 = FUN_004337e0();
      if (iVar3 != 0) {
        puVar4 = *(undefined1 **)(iVar2 + 0x20);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        uVar5 = FUN_005ae390(local_2c,s_CAdamEngine__CheckDriverSafety___006a3b00,param_1,puVar4);
        local_4 = 1;
        FUN_005aff00(uVar5);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      FUN_005c9530(param_1,0);
      FUN_005a0fc0(0);
      ExceptionList = local_c;
      return 0;
    }
    iVar6 = FUN_00517430();
    iVar3 = *(int *)(iVar6 + 100);
    if (iVar3 == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar6 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar4);
      *(int *)(iVar6 + 100) = iVar3;
    }
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return 1;
    }
    puVar4 = *(undefined1 **)(iVar2 + 0x20);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_2c,s_CAdamEngine__CheckDriverSafety___006a3a4c,param_1,puVar4);
    local_4 = 3;
    FUN_005aff00(uVar5);
  }
  else {
    iVar6 = FUN_00517430();
    iVar3 = *(int *)(iVar6 + 100);
    if (iVar3 == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar6 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar4);
      *(int *)(iVar6 + 100) = iVar3;
    }
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return 1;
    }
    puVar4 = *(undefined1 **)(iVar2 + 0x20);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_1c,s_CAdamEngine__CheckDriverSafety___006a3a0c,param_1,puVar4);
    local_4 = 4;
    FUN_005aff00(uVar5);
    local_28 = local_18;
  }
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_28 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return 1;
    }
    FUN_005fe5f0((char *)(local_28 + -1));
  }
  ExceptionList = local_c;
  return 1;
}

