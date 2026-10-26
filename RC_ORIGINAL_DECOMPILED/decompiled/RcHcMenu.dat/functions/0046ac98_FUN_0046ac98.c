/*
 * FUN_0046ac98 at 0046ac98
 * undefined __register FUN_0046ac98(int * param_1, VARIANTARG * param_2, uint param_3)
 * Address ranges: 0046ac98-0046acc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 23 for TIntegerField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 23 for
   TIntegerField. Original bytes unchanged; names and types still inferred. */

void FUN_0046ac98(int *param_1,VARIANTARG *param_2,uint param_3)

{
  char cVar1;
  uint local_c;
  
  local_c = param_3;
  cVar1 = FUN_0046adb8(param_1,&local_c,param_3);
  if (cVar1 == '\0') {
    FUN_00404e28(param_2,(VARIANTARG *)PTR_DAT_00572068);
  }
  else {
    FUN_004053dc(param_2,local_c);
  }
  return;
}

