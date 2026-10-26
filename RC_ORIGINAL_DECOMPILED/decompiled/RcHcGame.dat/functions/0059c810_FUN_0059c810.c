/*
 * FUN_0059c810 at 0059c810
 * undefined FUN_0059c810(void)
 * Address ranges: 0059c810-0059c963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0059c810(int param_1,undefined4 *param_2,undefined4 param_3,float param_4,float param_5)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 local_1c;
  float local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644827;
  local_c = ExceptionList;
  local_10 = 0;
  local_18 = 0.0;
  ExceptionList = &local_c;
  FUN_0059b1c0();
  local_4 = 1;
  FUN_0059b200();
  piVar4 = operator_new(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    *piVar4 = (int)&PTR_FUN_0064ef1c;
    piVar4[1] = iVar2;
    piVar4[3] = 0;
    piVar4[2] = *(int *)(iVar2 + 4);
  }
  (**(code **)*piVar4)();
  cVar3 = (**(code **)(*piVar4 + 0x18))();
  while (cVar3 != '\0') {
    (**(code **)(*piVar4 + 0x20))();
    fVar6 = (float10)FUN_00597fc0(param_3);
    fVar1 = (float)fVar6;
    if (((fVar6 < (float10)param_4) && (param_5 <= fVar1)) &&
       ((fVar1 < local_18 || (cVar3 = FUN_0059b1f0(), cVar3 == '\0')))) {
      uVar5 = FUN_00599450(local_14);
      local_4._0_1_ = 2;
      FUN_0059b1d0(uVar5);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_005630e0();
      local_18 = fVar1;
    }
    (**(code **)(*piVar4 + 8))();
    cVar3 = (**(code **)(*piVar4 + 0x18))();
  }
  FUN_005fe5f0(piVar4);
  local_10 = 1;
  *param_2 = local_1c;
  local_4 = local_4 & 0xffffff00;
  FUN_005630e0();
  ExceptionList = local_c;
  return param_2;
}

