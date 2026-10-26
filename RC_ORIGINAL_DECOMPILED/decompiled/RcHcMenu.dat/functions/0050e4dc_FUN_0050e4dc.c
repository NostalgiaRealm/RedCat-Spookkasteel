/*
 * FUN_0050e4dc at 0050e4dc
 * undefined __register FUN_0050e4dc(int * param_1)
 * Address ranges: 0050e4dc-0050e684
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050e4dc(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  bool bVar6;
  uint local_20;
  int local_1c;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  FUN_0050e248(param_1,&local_20);
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_0041c034(*(int **)(local_8[0x81] + 0x10),*(undefined4 *)(local_8[0x80] + 0xc));
  }
  else if (*(char *)((int)local_8 + 0x20b) == '\x01') {
    FUN_0041c034(*(int **)(local_8[0x81] + 0x10),0);
  }
  else {
    FUN_0041c034(*(int **)(local_8[0x81] + 0x10),*(undefined4 *)(local_8[0x80] + 0xc));
  }
  local_10 = 5;
  uVar2 = 0;
  local_c = 0;
  do {
    iVar3 = local_1c + local_10;
    if (SCARRY4(local_1c,local_10)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar3 = extraout_ECX;
    }
    iVar4 = local_20 + 3;
    if (SCARRY4(local_20,3)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar3 = extraout_ECX_00;
      iVar4 = extraout_EDX;
    }
    iVar5 = iVar4 + local_c;
    if (SCARRY4(iVar4,local_c)) {
      thunk_FUN_00402874(uVar2);
      iVar3 = extraout_ECX_01;
      iVar5 = extraout_EDX_00;
    }
    uVar2 = FUN_0041cad0((int *)local_8[0x81],iVar5,iVar3);
    iVar3 = local_1c + local_10;
    if (SCARRY4(local_1c,local_10)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar3 = extraout_ECX_02;
    }
    iVar4 = iVar3 + 3;
    if (SCARRY4(iVar3,3)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar4 = extraout_ECX_03;
    }
    iVar3 = local_20 + 3;
    if (SCARRY4(local_20,3)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar4 = extraout_ECX_04;
      iVar3 = extraout_EDX_01;
    }
    iVar5 = iVar3 + local_c;
    if (SCARRY4(iVar3,local_c)) {
      thunk_FUN_00402874(uVar2);
      iVar4 = extraout_ECX_05;
      iVar5 = extraout_EDX_02;
    }
    uVar2 = FUN_0041ca70((int *)local_8[0x81],iVar5,iVar4);
    bVar6 = SCARRY4(local_10,1);
    local_10 = local_10 + 1;
    if (bVar6) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    local_c = local_c + 1;
  } while (local_c != 3);
  bVar6 = SBORROW4(local_10,2);
  local_10 = local_10 + -2;
  if (bVar6) {
    thunk_FUN_00402874(uVar2);
  }
  uVar2 = 0;
  local_c = 0;
  do {
    iVar3 = local_1c + local_10;
    if (SCARRY4(local_1c,local_10)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar3 = extraout_ECX_06;
    }
    iVar4 = local_20 + 6;
    if (SCARRY4(local_20,6)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar3 = extraout_ECX_07;
      iVar4 = extraout_EDX_03;
    }
    iVar5 = iVar4 + local_c;
    if (SCARRY4(iVar4,local_c)) {
      thunk_FUN_00402874(uVar2);
      iVar3 = extraout_ECX_08;
      iVar5 = extraout_EDX_04;
    }
    uVar2 = FUN_0041cad0((int *)local_8[0x81],iVar5,iVar3);
    iVar3 = local_1c + local_10;
    if (SCARRY4(local_1c,local_10)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar3 = extraout_ECX_09;
    }
    iVar4 = iVar3 + 3;
    if (SCARRY4(iVar3,3)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar4 = extraout_ECX_10;
    }
    iVar3 = local_20 + 6;
    if (SCARRY4(local_20,6)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar4 = extraout_ECX_11;
      iVar3 = extraout_EDX_05;
    }
    iVar5 = iVar3 + local_c;
    if (SCARRY4(iVar3,local_c)) {
      thunk_FUN_00402874(uVar2);
      iVar4 = extraout_ECX_12;
      iVar5 = extraout_EDX_06;
    }
    uVar2 = FUN_0041ca70((int *)local_8[0x81],iVar5,iVar4);
    bVar6 = SBORROW4(local_10,1);
    local_10 = local_10 + -1;
    if (bVar6) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    local_c = local_c + 1;
  } while (local_c != 4);
  return;
}

