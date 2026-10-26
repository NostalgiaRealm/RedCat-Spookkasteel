/*
 * FUN_0042c8f0 at 0042c8f0
 * undefined FUN_0042c8f0(void)
 * Address ranges: 0042c8f0-0042cb5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0042c8f0(undefined1 *param_1,undefined1 *param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puStack_120;
  int iStack_e0;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_24 [12];
  undefined1 local_18 [8];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006233c7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puStack_120 = param_1;
  FUN_004042e0(&puStack_120);
  FUN_00565c30();
  puStack_120 = param_2;
  local_4 = 0;
  FUN_005663d0();
  piVar4 = (int *)**(int **)(param_1 + 0x18);
  if (piVar4 != *(int **)(param_1 + 0x18)) {
    do {
      puStack_120 = (undefined1 *)piVar4[2];
      FUN_005663d0();
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x18));
  }
  puStack_120 = param_2;
  FUN_0042c620(local_24);
  puStack_120 = local_18;
  uVar2 = (**(code **)(*param_3 + 0x48))();
  cVar1 = FUN_00565e10(&stack0xfffffef0,uVar2);
  if (cVar1 == '\0') {
LAB_0042ca86:
    puStack_8 = (undefined1 *)0x3;
    FUN_00587d50(uStack_34,uStack_30);
    FUN_005fe5f0(uStack_34);
    puStack_8._0_1_ = 2;
    FUN_00587d50(uStack_44,uStack_40);
    FUN_005fe5f0(uStack_44);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    FUN_0057d310();
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_005ab4d0();
    uVar2 = 1;
  }
  else {
    iVar3 = FUN_005665a0();
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_005665a0();
      if (piVar4 == param_3) goto LAB_0042ca86;
    }
    puStack_8 = (undefined1 *)0x6;
    FUN_00587d50(uStack_34,uStack_30);
    FUN_005fe5f0(uStack_34);
    puStack_8._0_1_ = 5;
    FUN_00514430();
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
    if (iStack_e0 != 0) {
      FUN_004098d0();
    }
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_005ab4d0();
    uVar2 = 0;
  }
  ExceptionList = pvStack_10;
  return uVar2;
}

