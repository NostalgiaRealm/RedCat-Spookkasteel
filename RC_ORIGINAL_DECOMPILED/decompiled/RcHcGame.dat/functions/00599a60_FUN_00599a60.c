/*
 * FUN_00599a60 at 00599a60
 * undefined FUN_00599a60(void)
 * Address ranges: 00599a60-00599b77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00599a60(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644337;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  fVar4 = (float10)FUN_00597fc0(param_3);
  local_1c = (float)fVar4;
  FUN_0059b1c0();
  local_4 = 1;
  FUN_0059b200();
  puVar3 = (undefined4 *)(param_1 + 0x34);
  local_18 = 8;
  do {
    cVar1 = FUN_0059b1f0();
    if (cVar1 != '\0') {
      FUN_0059df90(*puVar3);
      fVar4 = (float10)FUN_00597fc0(param_3);
      if ((float10)local_1c < fVar4) {
        uVar2 = FUN_00597a00();
        cVar1 = FUN_00599e10(param_4,uVar2);
        if (cVar1 != '\0') {
          uVar2 = FUN_00599450(local_14);
          local_4._0_1_ = 2;
          FUN_0059b1d0(uVar2);
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_005630e0();
          local_1c = (float)fVar4;
        }
      }
    }
    puVar3 = puVar3 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  local_10 = 1;
  *param_2 = param_3;
  local_4 = local_4 & 0xffffff00;
  FUN_005630e0();
  ExceptionList = local_c;
  return param_2;
}

