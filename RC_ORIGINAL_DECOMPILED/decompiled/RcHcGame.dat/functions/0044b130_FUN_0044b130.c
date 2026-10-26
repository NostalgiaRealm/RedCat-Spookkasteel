/*
 * FUN_0044b130 at 0044b130
 * undefined FUN_0044b130(void)
 * Address ranges: 0044b130-0044b408
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0044b130(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_25;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006256c2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_24 = param_1;
  FUN_004370c0(param_2,0);
  local_4 = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 1;
  *(undefined1 *)((int)param_1 + 0x149) = 0;
  *(undefined1 *)((int)param_1 + 0x14a) = 0;
  *(undefined1 *)((int)param_1 + 0x14b) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  FUN_004041b0(0xffffffff);
  param_1[0x5e] = 0;
  param_1[0x5f] = 0x42c80000;
  param_1[0x60] = 0x42c80000;
  param_1[0x61] = 0x42c80000;
  param_1[0x62] = 0x42c80000;
  *param_1 = &PTR_FUN_0064c4a8;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  local_4 = 1;
  param_1[0x66] = 0;
  FUN_005844b0();
  local_4._0_1_ = 2;
  uVar2 = __ftol();
  FUN_004041b0(uVar2);
  local_20 = param_1 + 0x6b;
  FUN_0044e4a0(&param_2);
  local_4._0_1_ = 3;
  FUN_0044e4e0(0);
  local_20 = param_1 + 0x6f;
  local_4._0_1_ = 4;
  FUN_0044e4a0(&local_25);
  local_4._0_1_ = 5;
  FUN_00514da0(0);
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x74) = 1;
  *(undefined1 *)((int)param_1 + 0x1d1) = 1;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x7b] = 0x40a00000;
  param_1[0x7c] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  uVar2 = __ftol();
  FUN_004041b0(uVar2);
  *(undefined1 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0x447a0000;
  uVar2 = __ftol();
  FUN_004041b0(uVar2);
  uVar2 = __ftol();
  param_1[0x87] = uVar2;
  param_1[0x88] = 0;
  FUN_004041b0(100);
  *param_1 = &PTR_FUN_0064d03c;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  iVar5 = *(int *)(iVar3 + 0x4e8);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x49c);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 0x4e8) = iVar5;
  }
  if (iVar5 != 0) {
    iVar5 = FUN_005166b0();
    iVar3 = *(int *)(iVar5 + 100);
    if (iVar3 == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar4);
      *(int *)(iVar5 + 100) = iVar3;
    }
    if (iVar3 != 0) {
      puVar4 = (undefined1 *)param_1[0x18];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar2 = FUN_005ae390(local_1c,s_Low_End_PC__Skipping_projectile_l_006915a8,puVar4);
      local_4 = CONCAT31(local_4._1_3_,7);
      FUN_005aff00(uVar2);
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = cVar1 + -1;
        }
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

