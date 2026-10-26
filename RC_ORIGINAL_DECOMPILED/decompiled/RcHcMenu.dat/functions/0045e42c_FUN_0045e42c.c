/*
 * FUN_0045e42c at 0045e42c
 * undefined __register FUN_0045e42c(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0045e42c-0045e515
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045e42c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  char local_d;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_120 = &LAB_0045e516;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_d = '\0';
  local_c = 0;
  local_8 = param_1;
  while (local_d == '\0') {
    iVar2 = FUN_0045ba40((int)local_8);
    if (iVar2 <= local_c) break;
    piVar1 = (int *)(**(code **)*local_8)(local_8,local_c,(undefined4 *)*local_8,param_4,param_5);
    iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0045e06c);
    local_d = FUN_0045e0dc(iVar2);
    if (!(bool)local_d) {
      bVar3 = SCARRY4(local_c,1);
      local_c = local_c + 1;
      if (bVar3) {
        thunk_FUN_00402874(CONCAT31(extraout_var,local_d));
      }
    }
  }
  if (local_d == '\0') {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
  }
  FUN_0045b928(local_8,local_c);
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_0045e51d;
  puStack_120 = (undefined1 *)0x45e515;
  FUN_00403dd4(&local_18,2);
  return;
}

