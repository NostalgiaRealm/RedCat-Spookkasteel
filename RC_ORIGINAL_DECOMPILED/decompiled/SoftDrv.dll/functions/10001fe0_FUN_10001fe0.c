/*
 * FUN_10001fe0 at 10001fe0
 * undefined FUN_10001fe0(void)
 * Address ranges: 10001fe0-10002174
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10001fe0(undefined4 param_1,int param_2,int param_3,HWND param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  HDC hdc;
  int iVar3;
  HBITMAP pHVar4;
  int iVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = param_5;
  param_5[4] = 0;
  param_5[5] = 0;
  puVar2 = _malloc(0x428);
  puVar1[3] = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return false;
  }
  for (iVar5 = 0x10a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)puVar1[3];
  puVar2[1] = param_1;
  *puVar2 = 0x28;
  puVar2[2] = -param_2;
  *(undefined2 *)(puVar2 + 3) = 1;
  *(undefined2 *)((int)puVar2 + 0xe) = (undefined2)param_3;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  hdc = GetDC(param_4);
  if (hdc == (HDC)0x0) {
    return false;
  }
  iVar5 = GetDeviceCaps(hdc,0xe);
  iVar3 = GetDeviceCaps(hdc,0xc);
  iVar5 = iVar5 * iVar3;
  FUN_10002180(s_DIBDisplay__Desktop__d_BPP_100210a8,iVar5);
  iVar3 = FUN_100021e0(hdc,iVar5,&param_5,&local_8,&local_4);
  if (iVar3 == 0) {
    param_5 = (undefined4 *)0xf800;
    local_8 = 0x7e0;
    local_4 = 0x1f;
  }
  if (param_3 == 0x10) {
    puVar2[4] = 3;
    if ((iVar5 == 0xf) || (iVar5 == 0x10)) {
      *puVar1 = param_5;
      puVar1[1] = local_8;
      puVar1[2] = local_4;
    }
    else {
      *puVar1 = 0xf800;
      puVar1[1] = 0x7e0;
      puVar1[2] = 0x1f;
    }
  }
  else if (param_3 == 0x18) {
    puVar2[4] = 3;
    *puVar1 = 0xff0000;
    puVar1[1] = 0xff00;
    puVar1[2] = 0xff;
  }
  *(undefined4 *)(puVar1[3] + 0x28) = *puVar1;
  *(undefined4 *)(puVar1[3] + 0x2c) = puVar1[1];
  *(undefined4 *)(puVar1[3] + 0x30) = puVar1[2];
  pHVar4 = CreateDIBSection(hdc,(BITMAPINFO *)puVar1[3],0,(void **)(puVar1 + 5),(HANDLE)0x0,0);
  puVar1[4] = pHVar4;
  ReleaseDC(param_4,hdc);
  return puVar1[4] != 0;
}

