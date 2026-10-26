/*
 * FUN_100078d0 at 100078d0
 * undefined4 __cdecl FUN_100078d0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100078d0-10007a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl
FUN_100078d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piStack_a0;
  undefined4 *puStack_9c;
  undefined4 *puStack_98;
  undefined4 uStack_94;
  undefined4 local_88 [3];
  undefined4 local_7c [26];
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  undefined4 local_4;
  
  uStack_94 = 0;
  puVar5 = local_7c;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_4;
    param_4 = param_4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_4 = param_6;
  puStack_98 = local_88;
  local_7c[3] = param_2;
  puStack_9c = local_7c;
  local_7c[0] = 0x7c;
  local_7c[1] = 0x101007;
  local_14 = 0x1800;
  local_10 = 4;
  local_c = (int *)0x0;
  local_8 = 0;
  local_7c[2] = param_3;
  piStack_a0 = DAT_100274a8;
  iVar4 = (**(code **)(*DAT_100274a8 + 0x18))();
  piVar3 = local_c;
  if (iVar4 != 0) {
    return 0;
  }
  piVar1 = local_c + 3;
  *local_c = (int)puStack_98;
  *piVar1 = 0;
  iVar4 = (**(code **)*puStack_98)(puStack_98,&DAT_10011838);
  if (iVar4 != 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    return 0;
  }
  if (local_8 != 0) {
    piStack_a0 = (int *)0x1;
    puStack_9c = (undefined4 *)0x1;
    iVar4 = (**(code **)(*(int *)*piVar3 + 0x74))((int *)*piVar3,8,&piStack_a0);
    if (iVar4 != 0) {
      FUN_10005350(7,s_THandle_CreateSurfaces__SetColor_10015690);
      (**(code **)(*(int *)*piVar3 + 8))((int *)*piVar3);
      piVar2 = (int *)*piVar1;
      *piVar3 = 0;
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar1 = 0;
      return 0;
    }
  }
  return 1;
}

