/*
 * FUN_0046bdb4 at 0046bdb4
 * undefined __register FUN_0046bdb4(int * param_1, VARIANTARG * param_2)
 * Address ranges: 0046bdb4-0046bdec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464134 slot 23 for TDateTimeField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464134 slot 23 for
   TDateTimeField. Original bytes unchanged; names and types still inferred. */

void FUN_0046bdb4(int *param_1,VARIANTARG *param_2)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_10;
  undefined4 local_c;
  
  cVar1 = FUN_0046bec8(param_1,(int)&local_10);
  if (cVar1 == '\0') {
    FUN_00404e28(param_2,(VARIANTARG *)PTR_DAT_00572068);
  }
  else {
    FUN_00405c58(param_2,extraout_EDX,extraout_ECX,local_10,local_c);
  }
  return;
}

