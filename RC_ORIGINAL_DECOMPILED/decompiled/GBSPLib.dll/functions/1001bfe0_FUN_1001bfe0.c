/*
 * FUN_1001bfe0 at 1001bfe0
 * undefined FUN_1001bfe0(void)
 * Address ranges: 1001bfe0-1001c10a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001bfe0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_10014a20(4);
  if (iVar1 == 0) {
    FUN_10015fb0(0x5e,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x209,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_10014a60(param_2,s__X___2X_1003a6c8,0,0xf0);
  if (iVar1 == 0) {
    FUN_10015fb0(0x5e,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x211,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_10024f00();
  iVar2 = FUN_10014a60(param_2,s__s__d_1003a6b8,s_Strings_1003c720,iVar1);
  if (iVar2 == 0) {
    FUN_10015fb0(0x5e,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x218,&DAT_10265ce0,0);
    return 0;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = FUN_1001bcd0();
      iVar4 = FUN_10014a60(param_2,&DAT_1003c728,uVar3);
      if (iVar4 == 0) {
        FUN_10015fb0(0x5e,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x220,&DAT_10265ce0,0);
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}

