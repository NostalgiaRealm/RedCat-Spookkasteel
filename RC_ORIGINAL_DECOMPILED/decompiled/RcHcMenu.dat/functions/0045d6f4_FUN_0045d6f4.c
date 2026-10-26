/*
 * FUN_0045d6f4 at 0045d6f4
 * undefined __register FUN_0045d6f4(int * param_1, int param_2)
 * Address ranges: 0045d6f4-0045d846
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045d6f4(int *param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int iVar6;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  int iVar7;
  int extraout_EDX;
  int *in_FS_OFFSET;
  int iStack_130;
  int iStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_118 = 0;
  puStack_120 = &LAB_0045d847;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  local_c = param_2;
  local_8 = param_1;
  if ((param_2 < 0) || (puVar2 = &stack0xfffffffc, param_1[1] < param_2)) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_00409bd8(local_c,&local_118);
    iStack_130 = local_118;
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar2 = puStack_11c;
  }
  puStack_11c = puVar2;
  piVar1 = local_8 + 1;
  iVar7 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar7,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  FUN_0045d910((uint)local_8,local_8[1]);
  uVar3 = local_8[1] - 1;
  if (SBORROW4(local_8[1],1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (local_c < (int)uVar3) {
    iVar7 = local_c + 1;
    if (SCARRY4(local_c,1)) {
      thunk_FUN_00402874(uVar3);
      iVar7 = extraout_EDX;
    }
    puVar4 = (undefined4 *)FUN_0045d430(local_8,iVar7);
    puVar5 = (undefined4 *)FUN_0045d430(local_8,local_c);
    iVar7 = local_8[1] - local_c;
    if (SBORROW4(local_8[1],local_c)) {
      puVar5 = (undefined4 *)thunk_FUN_00402874((uint)puVar5);
      iVar7 = extraout_ECX;
    }
    iVar6 = iVar7 + -1;
    if (SBORROW4(iVar7,1)) {
      puVar5 = (undefined4 *)thunk_FUN_00402874((uint)puVar5);
      iVar6 = extraout_ECX_00;
    }
    uVar3 = (uint)((longlong)iVar6 * (longlong)local_8[5]);
    if ((longlong)(int)uVar3 != (longlong)iVar6 * (longlong)local_8[5]) {
      puVar5 = (undefined4 *)thunk_FUN_00402874((uint)puVar5);
      uVar3 = extraout_ECX_01;
    }
    FUN_00402944(puVar5,puVar4,uVar3);
  }
  puVar4 = (undefined4 *)FUN_0045d430(local_8,local_c);
  FUN_00402cfc(puVar4,local_8[5],0);
  *in_FS_OFFSET = iStack_130;
  FUN_00403db0(&local_118);
  FUN_00403dd4(&local_14,2);
  return;
}

