/*
 * FUN_0050848c at 0050848c
 * undefined __register FUN_0050848c(int param_1)
 * Address ranges: 0050848c-005085d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00508509) */

void FUN_0050848c(int param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int iVar2;
  int extraout_ECX_00;
  int iVar3;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  int *piVar4;
  undefined4 uVar5;
  int local_20 [4];
  int *local_10;
  byte local_9;
  int local_8;
  
  local_10 = *(int **)(param_1 + 0x1f0);
  local_8 = param_1;
  FUN_0041c318((int *)local_10[5],*(undefined4 *)(param_1 + 0x60));
  FUN_0041bb48((int *)local_10[3],-0x7fffffee,extraout_ECX);
  FUN_0041bde8((int *)local_10[3],8);
  local_9 = 0;
  do {
    uVar5 = 0x50;
    piVar4 = local_20;
    uVar1 = local_9 + 1;
    if (SCARRY4((uint)local_9,1)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    iVar2 = (int)((longlong)(int)uVar1 * 0x19);
    if ((longlong)iVar2 != (longlong)(int)uVar1 * 0x19) {
      uVar1 = thunk_FUN_00402874(uVar1);
      iVar2 = extraout_ECX_00;
    }
    iVar3 = iVar2 + 0x1d;
    if (SCARRY4(iVar2,0x1d)) {
      thunk_FUN_00402874(uVar1);
      iVar3 = extraout_ECX_01;
    }
    uVar1 = (uint)local_9 * 0x19 + 0x1d;
    if (SCARRY4((uint)local_9 * 0x19,0x1d)) {
      uVar1 = thunk_FUN_00402874(uVar1);
      iVar3 = extraout_ECX_02;
    }
    FUN_00411624(uVar1,0x3f,iVar3,piVar4,uVar5);
    FUN_00507b68(local_8,local_20,*(undefined **)(&DAT_00571dcc + (uint)local_9 * 4));
    local_9 = local_9 + 1;
  } while (local_9 != 7);
  FUN_0041c034((int *)local_10[4],0x80000008);
  FUN_0041c318((int *)local_10[5],0x80000005);
  FUN_0041cb34(local_10,0x1d,0x50,0xe6,0xcc);
  FUN_0041cad0(local_10,6,0x50);
  FUN_0041ca70(local_10,0x1d,0x50);
  FUN_0041cad0(local_10,6,0xe5);
  FUN_0041ca70(local_10,0x1d,0xe5);
  FUN_00508784(local_8,extraout_EDX,extraout_ECX_03);
  return;
}

