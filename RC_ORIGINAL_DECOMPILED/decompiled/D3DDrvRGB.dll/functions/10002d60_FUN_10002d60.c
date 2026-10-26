/*
 * FUN_10002d60 at 10002d60
 * undefined4 __cdecl FUN_10002d60(undefined4 param_1, undefined4 param_2)
 * Address ranges: 10002d60-10002dde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10002d60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10002700(s_____D3DMain_CreateViewPort_____100172f8);
  puVar2 = &DAT_1001bcd4;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_1001bcd8 = 0;
  DAT_1001bcd4 = 0;
  _DAT_1001bcdc = param_1;
  _DAT_1001bce0 = param_2;
  _DAT_1001bce4 = 0;
  _DAT_1001bce8 = 0x3f800000;
  iVar1 = (**(code **)(*DAT_1001bcd0 + 0x34))(DAT_1001bcd0,&DAT_1001bcd4);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_10002700(s_SetViewport_failed___s_10017318);
    return 0;
  }
  return 1;
}

