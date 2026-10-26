/*
 * FUN_0050e398 at 0050e398
 * undefined __register FUN_0050e398(int * param_1, undefined4 param_2)
 * Address ranges: 0050e398-0050e4d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050e398(int *param_1,undefined4 param_2)

{
  char cVar1;
  HWND hWndLock;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  RECT *pRVar4;
  RECT local_1c;
  undefined4 local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  hWndLock = (HWND)FUN_0041cf6c((int *)param_1[0x81]);
  LockWindowUpdate(hWndLock);
  if ((*(byte *)(local_8 + 8) & 0x10) != 0) {
    FUN_0041c318(*(int **)(local_8[0x81] + 0x14),local_8[0x18]);
    (**(code **)(*local_8 + 0x40))(local_8,&local_1c);
    FUN_0041c9f8((int *)local_8[0x81],&local_1c);
  }
  if ((char)local_8[0x84] == '\0') {
    FUN_0041c318(*(int **)(local_8[0x81] + 0x14),local_8[0x18]);
    (**(code **)(*local_8 + 0x40))(local_8,&local_1c);
    FUN_0041c9f8((int *)local_8[0x81],&local_1c);
  }
  else {
    uVar2 = local_8[0xd] + local_8[0xf];
    if (SCARRY4(local_8[0xd],local_8[0xf])) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    pRVar4 = &local_1c;
    iVar3 = local_8[0xc] + local_8[0xe];
    if (SCARRY4(local_8[0xc],local_8[0xe])) {
      thunk_FUN_00402874((uint)local_8);
      iVar3 = extraout_ECX;
    }
    FUN_00411624(local_8[0xc],local_8[0xd],iVar3,&pRVar4->left,uVar2);
    FUN_004ab7f0((int *)local_8[9],&local_1c.left,'\0');
    (**(code **)(*(int *)local_8[9] + 0x80))();
  }
  FUN_0050dee4(local_8);
  FUN_0050e688(local_8);
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 != '\0') {
    cVar1 = FUN_00403270(local_8,extraout_EDX,extraout_ECX_00);
    if ((cVar1 != '\0') && ((*(byte *)(local_8 + 8) & 0x10) == 0)) {
      FUN_0050e794(local_8);
    }
  }
  LockWindowUpdate((HWND)0x0);
  return;
}

