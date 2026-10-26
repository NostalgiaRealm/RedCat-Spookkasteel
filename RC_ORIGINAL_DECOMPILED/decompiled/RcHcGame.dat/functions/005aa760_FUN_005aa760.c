/*
 * FUN_005aa760 at 005aa760
 * undefined FUN_005aa760(void)
 * Address ranges: 005aa760-005aa976
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005aa91a) */
/* WARNING: Removing unreachable block (ram,0x005aa931) */
/* WARNING: Removing unreachable block (ram,0x005aa940) */
/* WARNING: Removing unreachable block (ram,0x005aa949) */

undefined4 * __thiscall FUN_005aa760(int param_1,undefined1 *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645a83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = operator_new(0x28);
  local_4 = 0;
  local_10 = local_14;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_005ab4a0();
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar1 = *param_2;
    local_14[6] = 0;
    *(undefined1 *)(local_14 + 5) = uVar1;
    local_14[7] = 0;
    local_14[8] = 0;
    FUN_0040cc00(param_2,0,0xffffffff);
    *(undefined1 *)(local_14 + 9) = 0;
    *local_14 = &PTR_FUN_006500f8;
  }
  *(undefined1 *)(local_14 + 9) = param_3;
  puVar6 = *(undefined4 **)(param_1 + 0x94);
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x98) - (int)puVar6 >> 2 != 0) {
    FUN_004dddf0(puVar6,puVar6,puVar6 + 1);
    FUN_004a7300(*(int *)(param_1 + 0x94),1 - (*(int *)(param_1 + 0x94) - (int)puVar6 >> 2),
                 &local_14);
    puVar2 = *(undefined4 **)(param_1 + 0x94);
    for (; puVar6 != puVar2; puVar6 = puVar6 + 1) {
      *puVar6 = local_14;
    }
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 4;
    ExceptionList = local_c;
    return local_14;
  }
  if ((*(int *)(param_1 + 0x90) == 0) || ((uint)((int)puVar6 - *(int *)(param_1 + 0x90) >> 2) < 2))
  {
    iVar3 = 1;
  }
  else {
    iVar3 = FUN_0044e4c0();
  }
  iVar4 = FUN_0044e4c0();
  iVar4 = iVar4 + iVar3;
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  pvVar5 = operator_new(iVar3 * 4);
  iVar3 = FUN_004dddf0(*(undefined4 *)(param_1 + 0x90),puVar6,pvVar5);
  FUN_004a7300(iVar3,1,&local_14);
  FUN_004dddf0(puVar6,*(undefined4 *)(param_1 + 0x94),iVar3 + 4);
  FUN_00587d50(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  FUN_005fe5f0(*(undefined4 *)(param_1 + 0x90));
  *(void **)(param_1 + 0x98) = (void *)((int)pvVar5 + iVar4 * 4);
  iVar3 = FUN_0044e4c0();
  *(void **)(param_1 + 0x90) = pvVar5;
  *(int *)(param_1 + 0x94) = (int)pvVar5 + iVar3 * 4 + 4;
  ExceptionList = local_c;
  return local_14;
}

