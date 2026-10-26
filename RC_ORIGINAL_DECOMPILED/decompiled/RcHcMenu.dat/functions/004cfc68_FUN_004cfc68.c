/*
 * FUN_004cfc68 at 004cfc68
 * undefined __register FUN_004cfc68(int * param_1, int param_2)
 * Address ranges: 004cfc68-004cfd20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cfc68(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_14 = 0;
  puStack_11c = &LAB_004cfd21;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  FUN_004cf8cc(param_1,param_2,0);
  if (-1 < local_c) {
    iVar1 = (**(code **)(*(int *)local_8[4] + 0x14))();
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if (local_c <= (int)uVar2) goto LAB_004cfcef;
  }
  FUN_00402fe0(*local_8,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_00404038(&local_14,(undefined4 *)".GetConTableInfoByNum: out of range");
  FUN_00403d94(local_14);
LAB_004cfcef:
  piVar3 = (int *)(**(code **)(*(int *)local_8[4] + 0x18))((int *)local_8[4],local_c);
  local_10 = FUN_00403224(piVar3,(int)&DAT_004cc564);
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_004cfd28;
  puStack_11c = (undefined1 *)0x4cfd20;
  FUN_00403db0(&local_14);
  return;
}

