/*
 * FUN_0049e668 at 0049e668
 * undefined __register FUN_0049e668(int * param_1, uint param_2)
 * Address ranges: 0049e668-0049e7c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049e668(int *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar7;
  BITMAPINFO *extraout_EDX;
  BITMAPINFO *extraout_EDX_00;
  BITMAPINFO *pBVar8;
  int *in_FS_OFFSET;
  int xDest;
  int yDest;
  int DestWidth;
  int DestHeight;
  int xSrc;
  int ySrc;
  int SrcWidth;
  int SrcHeight;
  void *lpBits;
  BITMAPINFO *lpbmi;
  UINT iUsage;
  DWORD rop;
  int iStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  uint local_18;
  BITMAPINFO *local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  puStack_128 = &LAB_0049e7ca;
  iStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_12c;
  local_c = param_2;
  local_8 = param_1;
  if (((int)param_2 < param_1[0xe]) || (puVar3 = &stack0xfffffffc, param_1[0xf] <= (int)param_2)) {
    FUN_00402fe0(*param_1,local_120);
    FUN_00403fd4(&local_20,local_120);
    FUN_004040f0(&local_1c,4);
    FUN_00403d94(local_1c);
    puVar3 = puStack_124;
  }
  puStack_124 = puVar3;
  if ((int)local_c < 0) {
    thunk_FUN_00402874(local_c);
  }
  iVar1 = local_8[5];
  local_14 = (BITMAPINFO *)AVIStreamGetFrame();
  if (local_14 != (BITMAPINFO *)0x0) {
    lVar2 = (longlong)(int)(local_14->bmiHeader).biClrUsed * 4;
    uVar4 = (uint)lVar2;
    uVar7 = extraout_ECX;
    if ((int)uVar4 != lVar2) {
      uVar4 = thunk_FUN_00402874(uVar4);
      uVar7 = extraout_ECX_00;
    }
    uVar5 = uVar4 + (local_14->bmiHeader).biSize;
    pBVar8 = local_14;
    if (CARRY4(uVar4,(local_14->bmiHeader).biSize)) {
      uVar5 = thunk_FUN_00402874(uVar5);
      uVar7 = extraout_ECX_01;
      pBVar8 = extraout_EDX;
    }
    if ((int)uVar5 < 0) {
      uVar5 = thunk_FUN_00402874(uVar5);
      uVar7 = extraout_ECX_02;
      pBVar8 = extraout_EDX_00;
    }
    rop = 0xcc0020;
    iUsage = 0;
    lpBits = (void *)((int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize + uVar5)
    ;
    SrcHeight = *(int *)(local_8[2] + 0x10);
    SrcWidth = *(int *)(local_8[2] + 0xc);
    ySrc = local_8[0x15];
    xSrc = local_8[0x14];
    DestHeight = *(int *)(local_8[2] + 0x10);
    DestWidth = *(int *)(local_8[2] + 0xc);
    yDest = 0;
    xDest = 0;
    lpbmi = local_14;
    local_18 = uVar5;
    piVar6 = (int *)FUN_0049ac74(local_8[0x2a],pBVar8,uVar7);
    hdc = (HDC)FUN_0041cf6c(piVar6);
    StretchDIBits(hdc,xDest,yDest,DestWidth,DestHeight,xSrc,ySrc,SrcWidth,SrcHeight,lpBits,lpbmi,
                  iUsage,rop);
  }
  local_10 = local_8[0x2a];
  *in_FS_OFFSET = iVar1;
  FUN_00403dd4(&local_20,2);
  return;
}

