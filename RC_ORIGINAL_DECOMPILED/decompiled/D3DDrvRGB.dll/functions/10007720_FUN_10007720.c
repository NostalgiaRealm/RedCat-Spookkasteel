/*
 * FUN_10007720 at 10007720
 * undefined4 __cdecl FUN_10007720(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10007720-1000781a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl
FUN_10007720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_94;
  int local_88 [3];
  undefined4 local_7c [26];
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = local_7c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  local_7c[3] = param_2;
  local_7c[2] = param_3;
  uStack_94 = 0;
  local_7c[0] = 0x7c;
  local_7c[1] = 0x101007;
  local_14 = 0x1000;
  local_10 = 0x14;
  local_c = (int *)0x0;
  local_8 = 0;
  local_4 = 0;
  iVar3 = (**(code **)(*DAT_1001bcb0 + 0x18))(DAT_1001bcb0,local_7c);
  piVar2 = local_c;
  if (iVar3 != 0) {
    return 0;
  }
  *local_c = (int)local_88;
  uStack_94 = 1;
  iVar3 = (**(code **)(local_88[0] + 0x74))(local_88,8,&uStack_94);
  if (iVar3 != 0) {
    FUN_10005e40(7,s_THandle_CreateSurfaces__SetColor_10018b94);
    piVar1 = (int *)*piVar2;
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = 0;
    return 0;
  }
  return 1;
}

