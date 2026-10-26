/*
 * FUN_10001cc0 at 10001cc0
 * undefined4 __stdcall FUN_10001cc0(void)
 * Address ranges: 10001cc0-10001e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001cc0(void)

{
  _grDepthBufferMode_4(1);
  _grDepthBufferFunction_4(6);
  _grDepthMask_4(1);
  _grChromakeyMode_4(0);
  _grChromakeyValue_4(1);
  _grTexDetailControl_16(DAT_101f55a0,0,1,0x3f800000);
  _grTexLodBiasValue_8(DAT_101f55a0,0xbf800000);
  _guColorCombineFunction_4(4);
  _guTexCombineFunction_8(DAT_101f55a0,1);
  _grTexFilterMode_12(DAT_101f55a0,1,1);
  _grTexClampMode_12(DAT_101f55a0,0,0);
  _grTexCombine_28(DAT_101f55a0,1,0,1,0,0,0);
  _grColorCombine_20(3,1,0,1,0);
  _grAlphaCombine_20(3,3,0,1,0);
  if (1 < DAT_101f55c4) {
    _grTexDetailControl_16(DAT_101f55a4,0,1,0x3e99999a);
    _grTexLodBiasValue_8(DAT_101f55a4,0x3e99999a);
    _guTexCombineFunction_8(DAT_101f55a4,1);
    _grTexFilterMode_12(DAT_101f55a4,1,1);
    _grTexClampMode_12(DAT_101f55a4,1,1);
    _grTexCombine_28(DAT_101f55a4,3,1,3,1,0,0);
    _grTexClampMode_12(DAT_101f55a4,1,1);
    _grHints_8(0,0x14);
  }
  FUN_10001eb0((void *)0x0,0,0,0);
  return 1;
}

