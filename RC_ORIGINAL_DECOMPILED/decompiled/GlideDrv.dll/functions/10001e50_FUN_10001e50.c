/*
 * FUN_10001e50 at 10001e50
 * undefined4 __fastcall FUN_10001e50(LPCSTR param_1)
 * Address ranges: 10001e50-10001ead
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10001e50(LPCSTR param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = _malloc(0x12c000);
  iVar2 = grLfbReadRegion(0,0,0,0x280,0x1e0,0x500,puVar1);
  if (iVar2 == 0) {
    FUN_10001920(7,s_GLIDE__Could_not_save_BMP__1000e4a0);
    return 0;
  }
  FUN_10001000((int)puVar1,param_1);
  FUN_10003f4c(puVar1);
  return 1;
}

