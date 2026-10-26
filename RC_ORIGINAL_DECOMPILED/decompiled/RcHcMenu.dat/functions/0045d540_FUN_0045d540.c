/*
 * FUN_0045d540 at 0045d540
 * undefined __register FUN_0045d540(int * param_1, int param_2)
 * Address ranges: 0045d540-0045d6ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045d540(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int iVar7;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  int iVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int *in_FS_OFFSET;
  int iStack_134;
  int iStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_118 = 0;
  puStack_120 = &LAB_0045d6ac;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  local_c = param_2;
  local_8 = param_1;
  if ((param_2 < 0) || (puVar1 = &stack0xfffffffc, param_1[1] <= param_2)) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_00409bd8(local_c,&local_118);
    iStack_134 = local_118;
    FUN_004040f0((int *)&local_10,4);
    piVar2 = FUN_0040ceec((int *)&DAT_00410554,'\x01',local_10);
    FUN_0040382c(piVar2);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  (**(code **)*local_8)(local_8,local_c);
  uVar3 = local_8[1] - local_c;
  if (SBORROW4(local_8[1],local_c)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  uVar4 = uVar3 - 1;
  if (SBORROW4(uVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (0 < (int)uVar4) {
    puVar5 = (undefined4 *)FUN_0045d430(local_8,local_c);
    iVar8 = local_c + 1;
    if (SCARRY4(local_c,1)) {
      thunk_FUN_00402874((uint)puVar5);
      iVar8 = extraout_EDX;
    }
    puVar6 = (undefined4 *)FUN_0045d430(local_8,iVar8);
    iVar8 = local_8[1] - local_c;
    if (SBORROW4(local_8[1],local_c)) {
      puVar6 = (undefined4 *)thunk_FUN_00402874((uint)puVar6);
      iVar8 = extraout_ECX;
    }
    iVar7 = iVar8 + -1;
    if (SBORROW4(iVar8,1)) {
      puVar6 = (undefined4 *)thunk_FUN_00402874((uint)puVar6);
      iVar7 = extraout_ECX_00;
    }
    uVar3 = (uint)((longlong)iVar7 * (longlong)local_8[5]);
    if ((longlong)(int)uVar3 != (longlong)iVar7 * (longlong)local_8[5]) {
      puVar6 = (undefined4 *)thunk_FUN_00402874((uint)puVar6);
      uVar3 = extraout_ECX_01;
    }
    FUN_00402944(puVar6,puVar5,uVar3);
  }
  iVar8 = local_8[1] + -1;
  if (SBORROW4(local_8[1],1)) {
    thunk_FUN_00402874((uint)local_8);
    iVar8 = extraout_EDX_00;
  }
  puVar5 = (undefined4 *)FUN_0045d430(local_8,iVar8);
  FUN_00402cfc(puVar5,local_8[5],0);
  piVar2 = local_8 + 1;
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  if (SBORROW4(iVar8,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  *in_FS_OFFSET = iStack_134;
  FUN_00403db0(&local_118);
  FUN_00403dd4(&local_14,2);
  return;
}

