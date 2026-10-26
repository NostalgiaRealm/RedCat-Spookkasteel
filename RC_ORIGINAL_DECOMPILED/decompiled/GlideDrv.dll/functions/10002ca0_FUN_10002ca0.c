/*
 * FUN_10002ca0 at 10002ca0
 * undefined __cdecl FUN_10002ca0(int param_1, uint param_2)
 * Address ranges: 10002ca0-10002fc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002ca0(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 != DAT_100e3a5c) {
    if ((param_2 & 4) == 0) {
      if ((DAT_100e3a5c & 4) != 0) {
        uVar1 = 6;
        goto LAB_10002cbe;
      }
    }
    else {
      uVar1 = 7;
LAB_10002cbe:
      _grDepthBufferFunction_4(uVar1);
    }
    if ((param_2 & 8) == 0) {
      if ((DAT_100e3a5c & 8) != 0) {
        uVar1 = 1;
        goto LAB_10002cd7;
      }
    }
    else {
      uVar1 = 0;
LAB_10002cd7:
      _grDepthMask_4(uVar1);
    }
    if ((param_2 & 0x10) == 0) {
      if ((DAT_100e3a5c & 0x10) == 0) goto LAB_10002d06;
      uVar2 = 0;
      uVar1 = 0;
    }
    else {
      uVar2 = 1;
      uVar1 = 1;
    }
    _grTexClampMode_12(DAT_101f55a0,uVar1,uVar2);
  }
LAB_10002d06:
  DAT_100e3a5c = param_2;
  if (param_1 == DAT_100e3a58) {
    return;
  }
  if (DAT_100e3a58 == 9) {
    _grChromakeyMode_4(0);
  }
  switch(param_1) {
  case 1:
    _grTexMipMapMode_12(DAT_101f55a0,1,0);
    FUN_10002b50(3);
    FUN_10002bc0(2);
    uVar2 = 5;
    uVar1 = 1;
    goto LAB_10002e3d;
  case 2:
  case 3:
    FUN_10002b50(1);
    FUN_10002bc0(1);
    uVar2 = 4;
    uVar1 = 4;
    goto LAB_10002e3d;
  case 4:
    FUN_10002b50(3);
    FUN_10002bc0(2);
    _grTexMipMapMode_12(DAT_101f55a0,1,0);
    uVar2 = 2;
    uVar1 = 2;
LAB_10002e3d:
    _grAlphaBlendFunction_16(1,5,uVar1,uVar2);
    if (DAT_1000e338 != 0) {
      _grFogMode_4(2);
      DAT_100e3a58 = param_1;
      return;
    }
    break;
  case 5:
    FUN_10002b50(3);
    FUN_10002bc0(2);
    _grTexMipMapMode_12(DAT_101f55a0,1,0);
    _grAlphaBlendFunction_16(4,0,4,0);
    if (DAT_1000e338 != 0) {
      _grFogMode_4(2);
      DAT_100e3a58 = param_1;
      return;
    }
    break;
  case 6:
    FUN_10002b50(3);
    FUN_10002bc0(2);
    _grTexMipMapMode_12(DAT_101f55a0,1,0);
    _grAlphaBlendFunction_16(4,0,4,0);
    if (DAT_1000e338 != 0) {
      _grFogMode_4(0x202);
      DAT_100e3a58 = param_1;
      return;
    }
    break;
  case 7:
    _grTexMipMapMode_12(DAT_101f55a4,0,0);
    if (1 < DAT_101f55c4) {
      FUN_10002b50(3);
      _grAlphaBlendFunction_16(1,5,2,2);
      if (DAT_1000e338 != 0) {
        _grFogMode_4(2);
      }
      FUN_10002bc0(3);
      _grTexMipMapMode_12(DAT_101f55a0,1,0);
      DAT_100e3a58 = param_1;
      return;
    }
    FUN_10002b50(3);
    FUN_10002bc0(2);
    if (DAT_1000e338 == 0) {
      uVar2 = 0;
      uVar1 = 2;
    }
    else {
      _grFogMode_4(0x102);
      uVar2 = 0xf;
      uVar1 = 4;
    }
    _grAlphaBlendFunction_16(uVar1,uVar2,4,0);
    _grTexClampMode_12(DAT_101f55a0,1,1);
    DAT_100e3a58 = param_1;
    DAT_100e3a5c = DAT_100e3a5c | 0x10;
    return;
  case 8:
    _grTexMipMapMode_12(DAT_101f55a4,0,0);
    FUN_10002b50(3);
    if (DAT_101f55c4 < 2) {
      FUN_10002bc0(2);
    }
    else {
      FUN_10002bc0(4);
      _grTexMipMapMode_12(DAT_101f55a0,1,0);
    }
    if (DAT_1000e338 != 0) {
      _grFogMode_4(0);
    }
    _grAlphaBlendFunction_16(4,4,4,4);
    DAT_100e3a58 = param_1;
    return;
  case 9:
    _grLfbConstantDepth_4(0xffff);
    _grLfbConstantAlpha_4(0xff);
    _grChromakeyMode_4(1);
    _grAlphaBlendFunction_16(4,0,4,0);
  }
  DAT_100e3a58 = param_1;
  return;
}

