/*
 * FUN_005b8730 at 005b8730
 * undefined FUN_005b8730(void)
 * Address ranges: 005b8730-005b88c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b8730(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_604 [385];
  
  DAT_006cc400 = param_2 + 0xbcc;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  DAT_00722f24 = 0;
  _DAT_00747b40 = 0;
  _DAT_00747b48 = 0;
  FUN_005b8630(param_1);
  FUN_005b8670(param_2);
  FUN_005b86b0(*(undefined4 *)(param_2 + 0x18));
  puVar1 = (undefined4 *)FUN_005c9480();
  DAT_006ac538 = *puVar1;
  DAT_006ac53c = puVar1[1];
  DAT_006ac540 = puVar1[2];
  FUN_005b8700();
  _DAT_006cc404 = local_604;
  DAT_006cc3fc = ~*(uint *)(*(int *)(DAT_006cc410 + 0xa8) + 4) & 1;
  iVar2 = FUN_005b7e20(4);
  if (iVar2 == 0) {
    DAT_006cc3fc = 0;
  }
  FUN_005d0740(local_604,param_3);
  FUN_005d5580(param_1,param_2,param_3,local_604);
  iVar2 = FUN_005d34c0(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  puVar1 = local_604;
  puVar3 = &DAT_00722920;
  for (iVar2 = 0x181; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_005b88d0(param_1,param_2,param_3,local_604);
  if (iVar2 == 0) {
    return 0;
  }
  *(float *)(param_2 + 0x3a8) =
       *(float *)(param_2 + 0x388) * 0.0055555557 * 3.14159 * 0.033333335 +
       *(float *)(param_2 + 0x3a8);
  (**(code **)(DAT_006cc410 + 0x70))();
  (**(code **)(DAT_006cc410 + 0x74))();
  iVar2 = FUN_005b62f0(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_0059be40();
  puVar3 = (undefined4 *)(param_2 + 0xc20);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return 1;
}

