/*
 * FUN_005e5430 at 005e5430
 * undefined FUN_005e5430(void)
 * Address ranges: 005e5430-005e55b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005e5430(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  facet *pfVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064672e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_005febf3();
  param_1[0xd] = uVar3;
  if (*(int *)(DAT_0070fc00 + 4) != -1) {
    *(int *)(DAT_0070fc00 + 4) = *(int *)(DAT_0070fc00 + 4) + 1;
  }
  param_1[7] = param_1 + 5;
  param_1[8] = param_1 + 6;
  param_1[0xb] = param_1 + 9;
  puVar1 = param_1 + 2;
  *param_1 = &PTR_FUN_006515fc;
  param_1[3] = param_1 + 1;
  param_1[4] = puVar1;
  param_1[0xc] = param_1 + 10;
  *puVar1 = 0;
  *(undefined4 *)param_1[8] = 0;
  local_4 = 0;
  *(undefined4 *)param_1[0xc] = 0;
  FUN_005e5690(0,0,0);
  local_4 = 1;
  puVar2 = param_1 + 0x13;
  uVar3 = FUN_005febf3();
  *puVar2 = uVar3;
  if (*(int *)(DAT_0070fc00 + 4) != -1) {
    *(int *)(DAT_0070fc00 + 4) = *(int *)(DAT_0070fc00 + 4) + 1;
  }
  *param_1 = &PTR_FUN_0065164c;
  *(undefined1 *)(param_1 + 0x12) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((facet *)*puVar2 != (facet *)0x0) {
    pfVar4 = std::locale::facet::_Decref((facet *)*puVar2);
    if (pfVar4 != (facet *)0x0) {
      (*(code *)**(undefined4 **)pfVar4)(1);
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = FUN_005febf3();
    *puVar2 = uVar3;
    if (*(int *)(DAT_0070fc00 + 4) != -1) {
      *(int *)(DAT_0070fc00 + 4) = *(int *)(DAT_0070fc00 + 4) + 1;
    }
  }
  param_1[7] = param_1 + 5;
  param_1[8] = param_1 + 6;
  param_1[0xb] = param_1 + 9;
  param_1[0x11] = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = puVar1;
  param_1[0xc] = param_1 + 10;
  FUN_005e56b0(0,0);
  FUN_005e5690(0,0,0);
  if ((param_2 != 0) && (*(char *)(param_1 + 0x12) == '\0')) {
    FUN_005e5a90(param_2 + 8,param_2,param_2 + 4,param_2 + 8,param_2,param_2 + 4);
  }
  param_1[0x14] = param_2;
  param_1[0x10] = DAT_00747b58;
  param_1[0xf] = DAT_00747b58;
  param_1[0xe] = 0;
  ExceptionList = pvStack_c;
  return param_1;
}

