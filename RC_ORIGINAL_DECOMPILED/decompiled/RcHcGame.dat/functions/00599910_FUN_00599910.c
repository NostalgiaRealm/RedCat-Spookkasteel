/*
 * FUN_00599910 at 00599910
 * undefined FUN_00599910(void)
 * Address ranges: 00599910-00599a59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00599910(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  float10 fVar6;
  float fVar7;
  undefined4 *puVar8;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006442f7;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  FUN_0059b1d0(&DAT_00650084);
  puVar8 = &local_14;
  local_4 = 1;
  uVar2 = FUN_0059df90(*param_3);
  cVar1 = FUN_0059ca10(param_1,uVar2,puVar8);
  if (cVar1 == '\0') {
    FUN_0059b1d0(&DAT_00650084);
    local_10 = 1;
    local_4 = local_4 & 0xffffff00;
    FUN_005630e0();
    ExceptionList = local_c;
    return param_2;
  }
  FUN_0059df90(local_14);
  uVar2 = param_4;
  cVar1 = FUN_00599e10(param_4,1);
  if (cVar1 == '\0') {
    uVar3 = FUN_0060a4a0();
    uVar3 = uVar3 & 0x80000001;
    bVar5 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar5 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
    }
    param_3 = (undefined4 *)(uint)bVar5;
    uVar4 = FUN_00597fb0(uVar2);
    fVar6 = (float10)FUN_00597fc0(uVar4);
    fVar7 = (float)fVar6;
    uVar4 = FUN_00597fb0(param_3,fVar7);
    uVar2 = FUN_00599c80(&param_4,uVar4,param_3,fVar7,uVar2);
    local_4._0_1_ = 2;
    FUN_0059b1d0(uVar2);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005630e0();
  }
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  *param_2 = local_14;
  FUN_005630e0();
  ExceptionList = local_c;
  return param_2;
}

