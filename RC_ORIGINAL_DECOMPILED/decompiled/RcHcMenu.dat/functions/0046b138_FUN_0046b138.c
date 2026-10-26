/*
 * FUN_0046b138 at 0046b138
 * undefined __register FUN_0046b138(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0046b138-0046b17e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463810 slot 22 for TLargeintField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463810 slot 22 for
   TLargeintField. Original bytes unchanged; names and types still inferred. */

void FUN_0046b138(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int local_110;
  uint local_10c;
  byte local_108 [256];
  
  cVar1 = FUN_0046b2b0(param_1,(int)&local_110,param_3);
  if (cVar1 == '\0') {
    FUN_00403db0(param_2);
  }
  else {
    FUN_00406058(local_108,extraout_EDX,extraout_ECX,local_110,local_10c);
    FUN_00403fd4(param_2,local_108);
  }
  return;
}

