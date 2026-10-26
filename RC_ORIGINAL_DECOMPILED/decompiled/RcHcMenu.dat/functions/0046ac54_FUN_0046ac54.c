/*
 * FUN_0046ac54 at 0046ac54
 * undefined __register FUN_0046ac54(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0046ac54-0046ac95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 22 for TIntegerField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 22 for
   TIntegerField. Original bytes unchanged; names and types still inferred. */

void FUN_0046ac54(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  uint local_10c;
  byte local_108 [256];
  
  cVar1 = FUN_0046adb8(param_1,&local_10c,param_3);
  if (cVar1 == '\0') {
    FUN_00403db0(param_2);
  }
  else {
    FUN_00402d7c(local_10c,(char *)local_108);
    FUN_00403fd4(param_2,local_108);
  }
  return;
}

