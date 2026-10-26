/*
 * FUN_00543870 at 00543870
 * undefined FUN_00543870(void)
 * Address ranges: 00543870-00543a51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00543870(undefined1 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_0063cc3f;
  local_c = ExceptionList;
  local_4 = 2;
  uStack_3 = 0;
  uStack_48 = 0x5438be;
  ExceptionList = &local_c;
  FUN_00549920();
  uVar8 = 0;
  uVar3 = 0;
  local_4 = 3;
  uVar2 = local_4;
  local_4 = 3;
  if (param_4 != 0) {
    do {
      pcVar7 = "";
      if (param_3 != 0) {
        pcVar7 = (char *)(param_3 + uVar8);
      }
      if (*pcVar7 == ',') {
        FUN_004eed60(&uStack_50,uVar3,uVar8 - uVar3);
        FUN_00543d70(local_1c);
        uStack_48 = 0;
        local_4 = 4;
        uStack_4c = 0x543921;
        FUN_00549d20();
        local_4 = 3;
        FUN_00514430();
        uVar3 = uVar8;
        while( true ) {
          pcVar7 = "";
          if (param_3 != 0) {
            pcVar7 = (char *)(param_3 + uVar3);
          }
          uVar8 = uVar3;
          if (*pcVar7 != ',') break;
          uVar3 = uVar3 + 1;
        }
      }
      else {
        uVar8 = uVar8 + 1;
      }
    } while (uVar8 < param_4);
    uVar2 = local_4;
    if (uVar3 != uVar8) {
      FUN_004eed60(&uStack_50,uVar3,uVar8 - uVar3);
      FUN_00543d70(local_1c);
      uStack_48 = 0;
      local_4 = 5;
      uStack_4c = 0x54398d;
      FUN_00549d20();
      local_4 = 3;
      uStack_48 = 0x54399c;
      FUN_005fe5f0();
      uVar2 = local_4;
    }
  }
  local_4 = uVar2;
  *param_1 = param_1._0_1_;
  iVar4 = FUN_00442d80();
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  uStack_48 = 0x5439c1;
  pvVar5 = operator_new(iVar4 << 4);
  *(void **)(param_1 + 4) = pvVar5;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0x5439d9;
  uVar6 = FUN_00548cd0();
  *(undefined4 *)(param_1 + 8) = uVar6;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  uStack_48 = 0;
  _local_4 = CONCAT31(uStack_3,1);
  uStack_4c = 0x5439ff;
  FUN_00548ca0();
  uStack_48 = 0x543a09;
  FUN_005fe5f0();
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      uStack_48 = 0x543a39;
      FUN_005fe5f0();
    }
    else {
      *(char *)(param_3 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

