/*
 * FUN_1001ca90 at 1001ca90
 * undefined FUN_1001ca90(void)
 * Address ranges: 1001ca90-1001cc6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001ca90(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  
  iVar1 = FUN_10014a20(4);
  if (iVar1 == 0) {
    FUN_10015fb0(0x58,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x1fd,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_10014a60(param_2,s__X___2X_1003a6c8,0,0xf0);
  if (iVar1 == 0) {
    FUN_10015fb0(0x58,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x207,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_10014a60(param_2,s__s__d_1003a6b8,s_DataSize_1003c754,*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    FUN_10015fb0(0x58,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x20f,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_10024f00();
  iVar2 = FUN_10014a60(param_2,s__s__d_1003a6b8,s_TimeKeys_1003c748,iVar1);
  if (iVar2 == 0) {
    FUN_10015fb0(0x58,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x217,&DAT_10265ce0,0);
    return 0;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      pfVar3 = (float *)FUN_10024ee0();
      iVar4 = FUN_10014a60(param_2,s__f__d_1003c740,(double)*pfVar3,pfVar3[1]);
      if (iVar4 == 0) {
        FUN_10015fb0(0x58,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x220,&DAT_10265ce0,0);
        return 0;
      }
      iVar4 = FUN_10014a60(param_2,&DAT_1003c728,*(int *)(param_1 + 8) + (int)pfVar3[1]);
      if (iVar4 == 0) {
        FUN_10015fb0(0x58,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x225,&DAT_10265ce0,0);
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}

